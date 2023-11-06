import re

def generate_import_declaration(function_name):
    return '__attribute__((import_name("' + function_name + '")))'

def scan_function(content):
    functions = []

    lines = content.split('\n')

    for line in lines:
        line = line.strip()

        # Skip empty lines or lines without function declaration
        if not line or (not line.startswith('extern') and not line.startswith('GLAPI')) or line.startswith('extern "C"'):
            continue

        line = line.replace("APIENTRY", "")

        parts = line.split('(')

        # Extract the return type and function name
        declaration = parts[0].split()
        return_type = ' '.join(declaration[1:-1]).strip()
        function_name = declaration[-1].strip('*')

        # Extract the parameters
        parameters = parts[1].split(')')[0].strip()
        parameters = [param.strip() for param in parameters.split(',')]

        function = [return_type, function_name, parameters]
        functions.append(function)

    return functions



def parse_type(type):
    parsed = type \
        .replace("import_name", "import##name") \
        .replace("__attribute__", "##attribute##") \
        .replace("GLsync", "int") \
        .replace("GL", "") \
        .replace("clampf", "float") \
        .replace("bitfield", "int") \
        .replace("uint", "int") \
        .replace("boolean", "int") \
        .replace("boolArray", "booleanArray") \
        .replace("enum", "int") \
        .replace("ushort", "int") \
        .replace("ubyte", "int") \
        .replace("sizei", "int") \
        .replace("int", "int") \
        .replace("intptr", "int") \
        .replace("int64", "int") \
        .replace("double", "float") \
        .replace("clampd", "float") \
        .replace("short", "int") \
        .replace("byte", "int") \
        .replace("voidArray", "voidpArray") \
        .replace("##attribute##", "__attribute__") \
        .replace("import##name", "import_name") 

    return parsed

def parse_type_python(type):
    if type.count("*") > 0:
        return "int" 
    else:
        return type

def parse_header_file_python(header_file_path):
    with open(header_file_path, 'r') as header_file:
        header_content = header_file.read()
        function_declarations = scan_function(header_content)
        parsed_functions = []
        for function in function_declarations:
            parsed_functions.append([function[0], function[1], function[2]])
        return parsed_functions

def parse_header_file(header_file_path):
    with open(header_file_path, 'r') as header_file:
        header_content = header_file.read()
        function_declarations = scan_function(header_content)
        conflicting_symbols = []
        parsed_functions = []

        for return_type, function_name, arguments in function_declarations:
            conflicting_symbols.append(function_name)
            import_declaration = generate_import_declaration(function_name)
            function_declaration = import_declaration + '\nextern ' + return_type + ' ' + function_name + '(' + ", ".join(arguments) + ');\n'
            parsed_functions.append(function_declaration)
        return conflicting_symbols, parsed_functions

def generate_import_header(header, header_file_path, output_file_path):
    conflicting_symbols, parsed_functions = parse_header_file(header_file_path)
    with open(output_file_path, 'w') as output_file:
        output_file.write('#ifndef HEADERNAME_' + header + '_IMPORT_H\n')
        output_file.write('#define HEADERNAME_' + header + '_IMPORT_H\n\n')
        for symbol in conflicting_symbols:
            output_file.write('#undef ' + symbol + '\n')
        output_file.write('\n')
        for function_declaration in parsed_functions:
            if not "Sync" in function_declaration and not "TransposeMatrix" in function_declaration and not "MESA" in function_declaration and not "ARB" in function_declaration and not "ATI" in function_declaration and not "handle" in function_declaration and not "TransposeMatrix" in function_declaration:
                function_declaration = parse_type(function_declaration)
                output_file.write(function_declaration)
        output_file.write('\n#endif // HEADERNAME_' + header + '_IMPORT_H\n')

def flip_values(array):
    flipped_array = []
    for element in array:
        name, value = element.split()
        flipped_value = value + ' ' + name
        flipped_array.append(flipped_value)
    return flipped_array

variable_names = [
    "GLenum",
    "GLboolean",
    "GLbitfield",
    "GLchar",
    "GLbyte",
    "GLshort",
    "GLint",
    "GLsizei",
    "GLubyte",
    "GLushort",
    "GLuint",
    "GLhalf",
    "GLfloat",
    "GLclampf",
    "GLdouble",
    "GLclampd",
    "GLvoid",
    "ptrdiff_t",
    "GLintptr",
    "GLsizeiptr",
    "GLint64",
    "GLuint64"
]

pointer_variable_values = {
    "GLenum": "c_uint",
    "GLboolean": "c_ubyte",
    "GLbitfield": "c_uint",
    "GLchar": "c_char",
    "GLbyte": "c_byte",
    "GLshort": "c_short",
    "GLint": "c_int",
    "GLsizei": "c_int",
    "GLubyte": "c_ubyte",
    "GLushort": "c_ushort",
    "GLuint": "c_uint",
    "GLhalf": "c_ushort",
    "GLfloat": "c_float",
    "GLclampf": "c_float",
    "GLdouble": "c_double",
    "GLclampd": "c_double",
    "GLvoid": "c_int",
    "ptrdiff_t": "c_long",
    "GLintptr": "ptrdiff_t",
    "GLsizeiptr": "ptrdiff_t",
    "GLint64": "c_int64",
    "GLuint64": "c_uint64"
}


wasm_variable_values = {
    "GLenum": "int",
    "GLboolean": "int",
    "GLbitfield": "int",
    "GLchar": "int",
    "GLbyte": "int",
    "GLshort": "int",
    "GLint": "int",
    "GLsizei": "int",
    "GLubyte": "int",
    "GLushort": "int",
    "GLuint": "int",
    "GLhalf": "int",
    "GLfloat": "float",
    "GLclampf": "float",
    "GLdouble": "float",
    "GLclampd": "float",
    "GLvoid": "void",
    "ptrdiff_t": "int",
    "intptr": "int",
    "int64": "int",
    "GLintptr": "int",
    "GLsizeiptr": "int",
    "GLint64": "int",
    "GLuint64": "int",
    "GLsync": "int"
}


def replace_variables(string):
    for key, value in wasm_variable_values.items():
        if "*" in string:
            string = string.replace(key, "int")
        else:
            string = string.replace(key, value)

    return string


def parse_typed_arguments(string):
    for key, value in wasm_variable_values.items():
        if "*" in string:
            string = string.replace(key, "int")
        else:
            string = string.replace(key, value)
            string = string.replace("void", "")

    string = string.replace("*", "")
    string = string.replace("const", "")
    return string


def get_matching_variable(argument_parts, variable_names):
    for var_name in variable_names:
        for argument_part in argument_parts:
            if var_name == argument_part:
                return var_name
    return None  # Return None if no match is found

def parse_arguments(arguments):
    arguments_list = arguments
    flipped_arguments = []
    for argument in arguments_list:
        argument_parts = argument.split(' ')

        if len(argument_parts) > 2:
            for i, argument_part in enumerate(argument_parts):
                if ", ".join(argument_parts).count("*") > 0:
                    argument_parts = [part.replace("*", "") for part in argument_parts]

                    matching_var = get_matching_variable(argument_parts, variable_names)

                    argument_parts[0] = matching_var


            flipped_arguments.append('{}'.format(argument_parts[-1]))
        else:
            if len(argument_parts) > 1:
                for i, argument_part in enumerate(argument_parts):
                    if ", ".join(argument_parts).count("*") > 0:

                        argument_parts = [part.replace("*", "") for part in argument_parts]
                        matching_var = get_matching_variable(argument_parts, variable_names)
                        argument_parts[0] = matching_var

                flipped_arguments.append('{}'.format(argument_parts[-1]))
    return ', '.join(flipped_arguments)

def generate_c_const_pointer_code(const_pointer_arguments):
    for const_pointer_argument in const_pointer_arguments:
        code = f"""\n
\tShadyMemoryView shadyView_{const_pointer_argument}(reinterpret_cast<uint8_t*>({const_pointer_argument}));\n 
\tauto {const_pointer_argument}_ptr = shadyView_{const_pointer_argument}.to_char_pointer_pointer();\n
"""
        return code
    
def generate_c_pointer_code(const_pointer_arguments, pointer_data_type):
    for const_pointer_argument in const_pointer_arguments:
        code = f'''\n
\tShadyMemoryView shadyView_{const_pointer_argument}(reinterpret_cast<uint8_t*>({const_pointer_argument}));\n 
\tauto {const_pointer_argument}_ptr = shadyView_{const_pointer_argument}.to_{pointer_data_type}_pointer();\n'''
        return code

def flip_arguments(arguments):
    # split the arguments string by commas and strip any leading/trailing whitespace
    arguments_list = [arg.strip() for arg in arguments.split(",")]

    # for each argument, split by ": ", reverse, and join with a space
    flipped_arguments_list = [" ".join(arg.split(": ")[::-1]) for arg in arguments_list]

    # join the flipped arguments with ", " and return
    return ", ".join(flipped_arguments_list)

def generate_wasm_code(function_name, wasm_typed_arguments, wasm_typed_return_type):
    # Mapping from argument types to the corresponding wasm_valtype_new function calls
    type_mapping = {
        'int': 'wasmtime::ValType(wasmtime::ValKind::I32)',
        'float': 'wasmtime::ValType(wasmtime::ValKind::F32)',
        # Add more mappings for other types as needed
    }
    return_type_mapping = {
        'int': 'wasmtime::ValType(wasmtime::ValKind::I32)->kind()',
        'float': 'wasmtime::ValType(wasmtime::ValKind::F32)->kind()',
        # Add more mappings for other types as needed
    }

    if wasm_typed_arguments:
        # Split the arguments and find the appropriate wasm_valtype_new function call
        arguments = wasm_typed_arguments.split(', ')
        argument_types = [type_mapping[arg.split()[0]] for arg in arguments]
    else:
        argument_types = ['']

    # Handle the return type
    return_type = return_type_mapping.get(wasm_typed_return_type, '-1')

    # Generate the tuple
    tuple_str = '{{"{}", std::make_pair<std::vector<wasmtime::ValType>, int>({{{}}}, static_cast<int>({})) }}'.format(function_name, ', '.join(argument_types), return_type)

    return tuple_str


def generate_python_script(header_file_path, output_file_path):
    parsed_functions = parse_header_file_python(header_file_path)
    with open(output_file_path, 'w') as output_file:

        output_file.write('#include <cstdint>\n')
        output_file.write('#include <string>\n')
        output_file.write('#include <system/GL/gl3.h>\n')

        output_file.write('''\n
uint8_t* get_memory();
void* allocate(size_t size);
''')
                                  
#         output_file.write('''
# class ShadyMemoryView {
#     uint8_t* offset;

# public:
#     ShadyMemoryView(uint8_t* offset) {
#         this->offset = offset;
#     }

#     uint32_t* to_c_uint_pointer() {
#         return reinterpret_cast<uint32_t*>(offset);
#     }

#     float* to_c_float_pointer() {
#         return reinterpret_cast<float*>(offset);
#     }

#     double* to_c_double_pointer() {
#         return reinterpret_cast<double*>(offset);
#     }

#     int32_t* to_c_int_pointer() {
#         return reinterpret_cast<int32_t*>(offset);
#     }

#     char* to_c_char_pointer() {
#         return reinterpret_cast<char*>(offset);
#     }

#     char** to_char_pointer_pointer() {
#         uint32_t data_location = *reinterpret_cast<uint32_t*>(offset);
#         char* text_ptr = reinterpret_cast<char*>(memory + data_location);
#         return &text_ptr;
#     }

#     uint8_t* to_c_ubyte_pointer() {
#         return offset;
#     }

#     int8_t* to_c_byte_pointer() {
#         return reinterpret_cast<int8_t*>(offset);
#     }

#     int16_t* to_c_short_pointer() {
#         return reinterpret_cast<int16_t*>(offset);
#     }

#     uint16_t* to_c_ushort_pointer() {
#         return reinterpret_cast<uint16_t*>(offset);
#     }

#     int64_t* to_c_int64_pointer() {
#         return reinterpret_cast<int64_t*>(offset);
#     }

#     uint64_t* to_c_uint64_pointer() {
#         return reinterpret_cast<uint64_t*>(offset);
#     }
    
# };\n\n''')

        for function in parsed_functions:
            return_type = function[0]
            function_name = function[1]
            arguments = function[2]
            
            if not "TransposeMatrix" in function_name \
            and not "MESA" in function_name \
            and not "ARB" in function_name \
            and not "ATI" in function_name \
            and not "handle" in arguments \
            and not "Sync" in function_name: #TODO GLsync and friends
                wasm_return_type = parse_type_python(return_type)

                parsed_arguments = parse_arguments(arguments).split(",")
                
                typed_arguments = parsed_arguments

                argument_names = ",".join(typed_arguments)
                

                def generate_get_code(argument_names):
                    argument_list = argument_names
                    num_args = len(argument_list)
                    get_code_lines = []
                    for i in range(num_args):
                        get_code_lines.append('float ' + argument_list[i].strip() + ' = std::get<' + str(i) + '>(args);')
                    get_code = ''.join(get_code_lines)
                    return get_code

                wasm_typed_arguments = flip_arguments(", ".join(arguments))


                tuple_arguments = []
                for argument_name in argument_names.split(','):
                    tuple_arguments.append(argument_name)

                unpacked_tuple_arguments_code = generate_get_code(tuple_arguments)

                pointer_typed_arguments_code = "" 

                for typed_argument in arguments:
                    if typed_argument.count("*") > 0:
                        variable_name = typed_argument.split('*')[-1].strip()
                        pattern = r"^(.*?)\b" + re.escape(variable_name) + r"\b"
                        result = re.search(pattern, typed_argument)
                        variable_type = result.group(1)

                        pointer_typed_arguments_code += "auto {}_memory = static_cast<int>({});".format(variable_name, variable_name)
                        if typed_argument.count("*") > 1:
                            pointer_typed_arguments_code += "auto {}_data = (int*)((intptr_t)(get_memory()) + (intptr_t)({}));".format(variable_name, variable_name + "_memory")
                            pointer_typed_arguments_code += "auto {}_temporal = ({})((intptr_t)(get_memory()) + (intptr_t)({}[0]));".format(variable_name, variable_type, variable_name + "_data")
                            pointer_typed_arguments_code += "auto {}_ptr = ({})&{};".format(variable_name, variable_type, variable_name + "_temporal")
                        else:
                            pointer_typed_arguments_code += "auto {}_ptr = (intptr_t)({}) == 0 ? nullptr : ({})((intptr_t)(get_memory()) + (intptr_t)({}));".format(variable_name, variable_name + "_memory", variable_type, variable_name + "_memory")

                        pointer_typed_arguments_code += "\n\t"        

                wasm_typed_arguments = parse_typed_arguments(wasm_typed_arguments)

                stripped_arguments = []
                for typed_argument in wasm_typed_arguments.split(', '):
                    stripped_arguments.append(typed_argument.strip())

                argument_names = replace_variables(argument_names)
                parsed_return_type = replace_variables(wasm_return_type)


                if wasm_typed_arguments == "":
                    function_def = ""
                    unpacked_tuple_arguments_code = ""
                else:
                    function_def = "template <typename... Args>\n"
                    wasm_typed_arguments = "std::tuple<Args...> args" #', '.join(stripped_arguments)


                if "*" in return_type:
                    pattern = re.compile(r'auto\s+(\w+)_ptr')
                    matches = pattern.findall(pointer_typed_arguments_code.strip())

                    # For each match, replace the original variable name with the new variable name in argument_names
                    for original_name in matches:
                        # Make sure we are replacing only the exact variable names (not substrings in other variable names)
                        argument_names = re.sub(r'\b' + re.escape(original_name) + r'\b', original_name + '_ptr', argument_names)

                    function_def += 'static {} _{}({}) {{\n{}\n\t{}\n\t'

                    function_body = '''
\tconst char* result = reinterpret_cast<const char*>({}({}));
\tstd::string str(result);
\tsize_t data_length = str.length();
\tvoid* memory_ptr = allocate(data_length + 1); // +1 for null terminator
\tmemcpy((void*)((intptr_t)get_memory() + (intptr_t)memory_ptr), str.c_str(), str.size());
\treturn reinterpret_cast<ptrdiff_t>(memory_ptr);\n
'''.format(function_name, argument_names)

                    function_def = function_def.format(parsed_return_type, 
                            function_name, 
                            wasm_typed_arguments, 
                            unpacked_tuple_arguments_code,
                            pointer_typed_arguments_code, 
                            function_name, 
                            argument_names)
                    
                    function_end = '}\n\n'

                    output_file.write(function_def + function_body + function_end)
                else:
                    parsed_return_type = replace_variables(wasm_return_type)

                    pattern = re.compile(r'auto\s+(\w+)_ptr')
                    matches = pattern.findall(pointer_typed_arguments_code.strip())

                    # For each match, replace the original variable name with the new variable name in argument_names
                    for original_name in matches:
                        # Make sure we are replacing only the exact variable names (not substrings in other variable names)
                        argument_names = re.sub(r'\b' + re.escape(original_name) + r'\b', original_name + '_ptr', argument_names)

                    for typed_argument in arguments:
                        if typed_argument.count("*") == 0:
                            variable_name = typed_argument.split(' ')[-1].strip()
                            pattern = r"^(.*?)\b" + re.escape(variable_name) + r"\b"
                            result = re.search(pattern, typed_argument)
                            variable_type = result.group(1)

                            argument_names = re.sub(r'\b' + re.escape(variable_name) + r'\b', "({})".format(variable_type.strip()) + variable_name, argument_names)

                    if return_type == "void":                        
                        function_def += 'static {} _{}({}) {{\n\t{}\n\t{}\n\t{}({});\n\n}}\n\n'\
                        .format(parsed_return_type, 
                                function_name, 
                                wasm_typed_arguments, 
                                unpacked_tuple_arguments_code,
                                pointer_typed_arguments_code, 
                                function_name, 
                                argument_names)
                    else:
                        function_def += 'static {} _{}({}) {{\n\t{}\n\t{}\n\treturn ({})({}({}));\n\n}}\n\n'\
                        .format(parsed_return_type, 
                                function_name, 
                                wasm_typed_arguments,
                                unpacked_tuple_arguments_code, 
                                pointer_typed_arguments_code,
                                parsed_return_type, 
                                function_name, 
                                argument_names)


                    output_file.write(function_def)
        output_file.write('#include <wasmtime.hh>\n')
        output_file.write('#include <map>\n')
        output_file.write('#include <string>\n')
        output_file.write('#include <vector>\n')
        output_file.write('#include <iostream>\n')

        output_file.write('''
template <typename... Args>
auto call_variadic(std::string function_name, std::tuple<Args...> args){{
''')

        for function in parsed_functions:
            return_type = function[0].replace("void", "")
            function_name = function[1]
            arguments = ','.join(function[2]).replace("void", "")
        
            if "TransposeMatrix" in function_name or "MESA" in function_name or "ARB" in function_name or "ATI" in function_name or "handle" in arguments or "Sync" in function_name:
                continue


            args = "args"

            if arguments == "":
                args = ""

            if return_type != "":
                output_file.write('''
if (function_name.compare("{}") == 0){{
    return _{}({});
}}
'''.format(function_name, function_name, args))
            else:
                output_file.write('''
if (function_name.compare("{}") == 0){{
    _{}({});
}}
'''.format(function_name, function_name, args))

        output_file.write('''
}}
''')

        wasm_tuples = []
        for function in parsed_functions:
            return_type = function[0]
            function_name = function[1]
            arguments = function[2]
            
            if not "Sync" in function_name and not "TransposeMatrix" in function_name and not "MESA" in function_name and not "ARB" in function_name and not "ATI" in function_name and not "handle" in arguments:
                wasm_return_type = parse_type_python(return_type)

                wasm_return_type = replace_variables(wasm_return_type)

                wasm_typed_arguments = flip_arguments(", ".join(arguments))
                wasm_typed_arguments = parse_typed_arguments(wasm_typed_arguments)
                
                stripped_arguments = []
                for typed_argument in wasm_typed_arguments.split(', '):
                    stripped_arguments.append(typed_argument.strip())

                wasm_typed_arguments = ', '.join(stripped_arguments)

                wasm_tuples.append(generate_wasm_code(function_name, wasm_typed_arguments, wasm_return_type))

        # Join the wasm_tuples
        joined_tuples = ",\n".join(wasm_tuples)

        # Write to the output file
        output_file.write('''
auto& get_function_types_map(){
        ''')
        output_file.write('''
static std::map<std::string, std::pair<std::vector<wasmtime::ValType>, int>> function_types_map = {
''')

        # Add the tuples to the map
        output_file.write(joined_tuples)

        # Close the map declaration
        output_file.write('''
};
        ''')

        output_file.write('''
return function_types_map;
        ''')

        output_file.write('''
}
        ''')



        output_file.write('''
        
struct SFunctionMapping {
    //wasmtime_func_t func; 
    wasm_functype_t* type;
};

#define MAX_NUM_ARGUMENTS 20

static std::map<std::string, SFunctionMapping> func_mapping;

template <typename T, std::size_t N>
std::vector<T> generate_fixed_vector(const T& val) {
    return std::vector<T>(N, val);
}

template<typename T, std::size_t... Is>
constexpr auto vector_to_tuple_impl(const std::vector<T>& v, std::index_sequence<Is...>) {
    return std::make_tuple(v[Is]...);
}

template<typename T, std::size_t N>
constexpr auto vector_to_tuple(const std::vector<T>& v) {
    return vector_to_tuple_impl(v, std::make_index_sequence<N>{});
}

static wasmtime::Func generate_import(
	wasmtime::Store& store,
	std::string function_name, 
	std::map<std::string, std::pair<std::vector<wasmtime::ValType>, int>>& function_types_map) {
    // Look up the argument types and return type for this function name
    auto it = function_types_map.find(function_name);
    if (it == function_types_map.end()) {
        std::cout << "Error: function name not found in map: " << function_name << std::endl;
		exit(0);
    }
    
    auto argtypes = it->second.first;
    int rettype_enum = it->second.second;

	wasmtime::Func func(store, rettype_enum != -1 ? wasmtime::FuncType(argtypes, {wasmtime::ValType(static_cast<wasmtime::ValKind>(rettype_enum))}) : wasmtime::FuncType(argtypes, {}), [function_name, function_types_map](
		wasmtime::Caller caller, 
		std::span<const wasmtime::Val> args, 
		std::span<wasmtime::Val> results) -> 
		wasmtime::Result<std::monostate, wasmtime::Trap> {

			std::vector<wasmtime::ValType> arg_types = function_types_map.find(function_name)->second.first;


			std::vector<float> function_args;

			for(size_t i = 0; i < args.size(); i++) {
				switch(arg_types[i]->kind()) {
					case wasmtime::ValKind::I32:{
						function_args.push_back(args[i].i32());
					}
						break;

					case wasmtime::ValKind::F32:{
						function_args.push_back(args[i].f32());
					}
						break;

					// Add more cases for other argument types as needed

					default:
						std::cout << "Unknown argument type" << std::endl;
				}
			}


			if (function_args.size() > 0){
				auto tuple = vector_to_tuple<float, MAX_NUM_ARGUMENTS>(function_args);

				auto res = call_variadic(function_name, tuple);

				if(results.size() > 0){
					results[0] = wasmtime::Val(res);
				}				
			} else {
				std::cout << function_name << std::endl;
				auto tuple = vector_to_tuple<float, MAX_NUM_ARGUMENTS>({0});
				auto res = call_variadic(function_name, tuple);

				if(results.size() > 0){
					results[0] = wasmtime::Val(res);
				}

			}

            return wasmtime::Result<std::monostate, wasmtime::Trap>(std::monostate{}).ok();		
		}
	);
	
	return func;	
}

''')                    


# Example usage
header_file_path = 'system/GL/gl3.h'
output_file_path = 'examples/gl2_import.h'

generate_import_header("GL2", header_file_path, output_file_path)

output_file_path = 'gl4_functions.h'

generate_python_script(header_file_path, output_file_path)

# Function to parse the header file and extract function declarations
def parse_header(header_file):
    function_declarations = []
    
    with open(header_file, 'r') as file:
        lines = file.readlines()
        
        # Regular expression pattern to match lines like "#undef glScissor"
        pattern = r'#undef (\w+)\s*$'
        
        for line in lines:
            match = re.match(pattern, line)
            if match:
                function_name = match.group(1)
                function_declaration = f'{{ "{function_name}", (void*)&{function_name} }},'
                function_declarations.append(function_declaration)
    
    return function_declarations

# Function to generate the new header file with function addresses
def generate_output_header(header_file, output_file):
    function_declarations = parse_header(header_file)
    
    with open(output_file, 'w') as file:
        file.write('#ifndef HEADERNAME_DLSYM_IMPORT_H\n')
        file.write('#define HEADERNAME_DLSYM_IMPORT_H\n\n')

        file.write('#include <map>\n')
        file.write('#include <cstdint>\n\n')
        file.write('#include <string>\n\n')
        file.write('#include "gl2_import.h"\n\n')
        file.write('''void* dlsym(const char * symbol){ \n\n''')
        file.write('std::map<std::string, void*> function_map = {\n\n')

        for function_name in function_declarations:
            if not "Sync" in function_name:
                file.write(function_name + "\n")
        
        file.write('};\n')

        file.write('''return function_map[std::string{symbol}];\n}\n''')

        file.write('#endif')
        
# Example usage
header_file = 'examples/gl2_import.h'
output_file = 'examples/dlsym.cpp'

generate_output_header(header_file, output_file)