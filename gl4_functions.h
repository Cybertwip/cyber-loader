#include <cstdint>
#include <string>
#include <system/GL/gl3.h>


uint8_t* get_memory();
void* allocate(size_t size);
template <typename... Args>
static void _glCullFace(std::tuple<Args...> args) {
	float mode = std::get<0>(args);
	
	glCullFace((GLenum)mode);

}

template <typename... Args>
static void _glFrontFace(std::tuple<Args...> args) {
	float mode = std::get<0>(args);
	
	glFrontFace((GLenum)mode);

}

template <typename... Args>
static void _glHint(std::tuple<Args...> args) {
	float target = std::get<0>(args);float mode = std::get<1>(args);
	
	glHint((GLenum)target, (GLenum)mode);

}

template <typename... Args>
static void _glLineWidth(std::tuple<Args...> args) {
	float width = std::get<0>(args);
	
	glLineWidth((GLfloat)width);

}

template <typename... Args>
static void _glPointSize(std::tuple<Args...> args) {
	float size = std::get<0>(args);
	
	glPointSize((GLfloat)size);

}

template <typename... Args>
static void _glPolygonMode(std::tuple<Args...> args) {
	float face = std::get<0>(args);float mode = std::get<1>(args);
	
	glPolygonMode((GLenum)face, (GLenum)mode);

}

template <typename... Args>
static void _glScissor(std::tuple<Args...> args) {
	float x = std::get<0>(args);float y = std::get<1>(args);float width = std::get<2>(args);float height = std::get<3>(args);
	
	glScissor((GLint)x, (GLint)y, (GLsizei)width, (GLsizei)height);

}

template <typename... Args>
static void _glTexParameterf(std::tuple<Args...> args) {
	float target = std::get<0>(args);float pname = std::get<1>(args);float param = std::get<2>(args);
	
	glTexParameterf((GLenum)target, (GLenum)pname, (GLfloat)param);

}

template <typename... Args>
static void _glTexParameterfv(std::tuple<Args...> args) {
	float target = std::get<0>(args);float pname = std::get<1>(args);float params = std::get<2>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glTexParameterfv((GLenum)target, (GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glTexParameteri(std::tuple<Args...> args) {
	float target = std::get<0>(args);float pname = std::get<1>(args);float param = std::get<2>(args);
	
	glTexParameteri((GLenum)target, (GLenum)pname, (GLint)param);

}

template <typename... Args>
static void _glTexParameteriv(std::tuple<Args...> args) {
	float target = std::get<0>(args);float pname = std::get<1>(args);float params = std::get<2>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (const GLint *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glTexParameteriv((GLenum)target, (GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glTexImage1D(std::tuple<Args...> args) {
	float target = std::get<0>(args);float level = std::get<1>(args);float internalformat = std::get<2>(args);float width = std::get<3>(args);float border = std::get<4>(args);float format = std::get<5>(args);float type = std::get<6>(args);float pixels = std::get<7>(args);
	auto pixels_memory = static_cast<int>(pixels);auto pixels_ptr = (intptr_t)(pixels_memory) == 0 ? nullptr : (const GLvoid *)((intptr_t)(get_memory()) + (intptr_t)(pixels_memory));
	
	glTexImage1D((GLenum)target, (GLint)level, (GLint)internalformat, (GLsizei)width, (GLint)border, (GLenum)format, (GLenum)type, pixels_ptr);

}

template <typename... Args>
static void _glTexImage2D(std::tuple<Args...> args) {
	float target = std::get<0>(args);float level = std::get<1>(args);float internalformat = std::get<2>(args);float width = std::get<3>(args);float height = std::get<4>(args);float border = std::get<5>(args);float format = std::get<6>(args);float type = std::get<7>(args);float pixels = std::get<8>(args);
	auto pixels_memory = static_cast<int>(pixels);auto pixels_ptr = (intptr_t)(pixels_memory) == 0 ? nullptr : (const GLvoid *)((intptr_t)(get_memory()) + (intptr_t)(pixels_memory));
	
	glTexImage2D((GLenum)target, (GLint)level, (GLint)internalformat, (GLsizei)width, (GLsizei)height, (GLint)border, (GLenum)format, (GLenum)type, pixels_ptr);

}

template <typename... Args>
static void _glDrawBuffer(std::tuple<Args...> args) {
	float mode = std::get<0>(args);
	
	glDrawBuffer((GLenum)mode);

}

template <typename... Args>
static void _glClear(std::tuple<Args...> args) {
	float mask = std::get<0>(args);
	
	glClear((GLbitfield)mask);

}

template <typename... Args>
static void _glClearColor(std::tuple<Args...> args) {
	float red = std::get<0>(args);float green = std::get<1>(args);float blue = std::get<2>(args);float alpha = std::get<3>(args);
	
	glClearColor((GLfloat)red, (GLfloat)green, (GLfloat)blue, (GLfloat)alpha);

}

template <typename... Args>
static void _glClearStencil(std::tuple<Args...> args) {
	float s = std::get<0>(args);
	
	glClearStencil((GLint)s);

}

template <typename... Args>
static void _glClearDepth(std::tuple<Args...> args) {
	float depth = std::get<0>(args);
	
	glClearDepth((GLclampd)depth);

}

template <typename... Args>
static void _glStencilMask(std::tuple<Args...> args) {
	float mask = std::get<0>(args);
	
	glStencilMask((GLuint)mask);

}

template <typename... Args>
static void _glColorMask(std::tuple<Args...> args) {
	float red = std::get<0>(args);float green = std::get<1>(args);float blue = std::get<2>(args);float alpha = std::get<3>(args);
	
	glColorMask((GLboolean)red, (GLboolean)green, (GLboolean)blue, (GLboolean)alpha);

}

template <typename... Args>
static void _glDepthMask(std::tuple<Args...> args) {
	float flag = std::get<0>(args);
	
	glDepthMask((GLboolean)flag);

}

template <typename... Args>
static void _glDisable(std::tuple<Args...> args) {
	float cap = std::get<0>(args);
	
	glDisable((GLenum)cap);

}

template <typename... Args>
static void _glEnable(std::tuple<Args...> args) {
	float cap = std::get<0>(args);
	
	glEnable((GLenum)cap);

}

static void _glFinish() {
	
	
	glFinish();

}

static void _glFlush() {
	
	
	glFlush();

}

template <typename... Args>
static void _glBlendFunc(std::tuple<Args...> args) {
	float sfactor = std::get<0>(args);float dfactor = std::get<1>(args);
	
	glBlendFunc((GLenum)sfactor, (GLenum)dfactor);

}

template <typename... Args>
static void _glLogicOp(std::tuple<Args...> args) {
	float opcode = std::get<0>(args);
	
	glLogicOp((GLenum)opcode);

}

template <typename... Args>
static void _glStencilFunc(std::tuple<Args...> args) {
	float func = std::get<0>(args);float ref = std::get<1>(args);float mask = std::get<2>(args);
	
	glStencilFunc((GLenum)func, (GLint)ref, (GLuint)mask);

}

template <typename... Args>
static void _glStencilOp(std::tuple<Args...> args) {
	float fail = std::get<0>(args);float zfail = std::get<1>(args);float zpass = std::get<2>(args);
	
	glStencilOp((GLenum)fail, (GLenum)zfail, (GLenum)zpass);

}

template <typename... Args>
static void _glDepthFunc(std::tuple<Args...> args) {
	float func = std::get<0>(args);
	
	glDepthFunc((GLenum)func);

}

template <typename... Args>
static void _glPixelStoref(std::tuple<Args...> args) {
	float pname = std::get<0>(args);float param = std::get<1>(args);
	
	glPixelStoref((GLenum)pname, (GLfloat)param);

}

template <typename... Args>
static void _glPixelStorei(std::tuple<Args...> args) {
	float pname = std::get<0>(args);float param = std::get<1>(args);
	
	glPixelStorei((GLenum)pname, (GLint)param);

}

template <typename... Args>
static void _glReadBuffer(std::tuple<Args...> args) {
	float mode = std::get<0>(args);
	
	glReadBuffer((GLenum)mode);

}

template <typename... Args>
static void _glReadPixels(std::tuple<Args...> args) {
	float x = std::get<0>(args);float y = std::get<1>(args);float width = std::get<2>(args);float height = std::get<3>(args);float format = std::get<4>(args);float type = std::get<5>(args);float pixels = std::get<6>(args);
	auto pixels_memory = static_cast<int>(pixels);auto pixels_ptr = (intptr_t)(pixels_memory) == 0 ? nullptr : (GLvoid *)((intptr_t)(get_memory()) + (intptr_t)(pixels_memory));
	
	glReadPixels((GLint)x, (GLint)y, (GLsizei)width, (GLsizei)height, (GLenum)format, (GLenum)type, pixels_ptr);

}

template <typename... Args>
static void _glGetBooleanv(std::tuple<Args...> args) {
	float pname = std::get<0>(args);float params = std::get<1>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLboolean *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetBooleanv((GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glGetDoublev(std::tuple<Args...> args) {
	float pname = std::get<0>(args);float params = std::get<1>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetDoublev((GLenum)pname, params_ptr);

}

static int _glGetError() {
	
	
	return (int)(glGetError());

}

template <typename... Args>
static void _glGetFloatv(std::tuple<Args...> args) {
	float pname = std::get<0>(args);float params = std::get<1>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetFloatv((GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glGetIntegerv(std::tuple<Args...> args) {
	float pname = std::get<0>(args);float params = std::get<1>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLint *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetIntegerv((GLenum)pname, params_ptr);

}

template <typename... Args>
static int _glGetString(std::tuple<Args...> args) {
float name = std::get<0>(args);
	
	
	const char* result = reinterpret_cast<const char*>(glGetString(name));
	std::string str(result);
	size_t data_length = str.length();
	void* memory_ptr = allocate(data_length + 1); // +1 for null terminator
	memcpy((void*)((intptr_t)get_memory() + (intptr_t)memory_ptr), str.c_str(), str.size());
	return reinterpret_cast<ptrdiff_t>(memory_ptr);

}

template <typename... Args>
static void _glGetTexImage(std::tuple<Args...> args) {
	float target = std::get<0>(args);float level = std::get<1>(args);float format = std::get<2>(args);float type = std::get<3>(args);float pixels = std::get<4>(args);
	auto pixels_memory = static_cast<int>(pixels);auto pixels_ptr = (intptr_t)(pixels_memory) == 0 ? nullptr : (GLvoid *)((intptr_t)(get_memory()) + (intptr_t)(pixels_memory));
	
	glGetTexImage((GLenum)target, (GLint)level, (GLenum)format, (GLenum)type, pixels_ptr);

}

template <typename... Args>
static void _glGetTexParameterfv(std::tuple<Args...> args) {
	float target = std::get<0>(args);float pname = std::get<1>(args);float params = std::get<2>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetTexParameterfv((GLenum)target, (GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glGetTexParameteriv(std::tuple<Args...> args) {
	float target = std::get<0>(args);float pname = std::get<1>(args);float params = std::get<2>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLint *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetTexParameteriv((GLenum)target, (GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glGetTexLevelParameterfv(std::tuple<Args...> args) {
	float target = std::get<0>(args);float level = std::get<1>(args);float pname = std::get<2>(args);float params = std::get<3>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetTexLevelParameterfv((GLenum)target, (GLint)level, (GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glGetTexLevelParameteriv(std::tuple<Args...> args) {
	float target = std::get<0>(args);float level = std::get<1>(args);float pname = std::get<2>(args);float params = std::get<3>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLint *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetTexLevelParameteriv((GLenum)target, (GLint)level, (GLenum)pname, params_ptr);

}

template <typename... Args>
static int _glIsEnabled(std::tuple<Args...> args) {
	float cap = std::get<0>(args);
	
	return (int)(glIsEnabled((GLenum)cap));

}

template <typename... Args>
static void _glDepthRange(std::tuple<Args...> args) {
	float near = std::get<0>(args);float far = std::get<1>(args);
	
	glDepthRange((GLclampd)near, (GLclampd)far);

}

template <typename... Args>
static void _glViewport(std::tuple<Args...> args) {
	float x = std::get<0>(args);float y = std::get<1>(args);float width = std::get<2>(args);float height = std::get<3>(args);
	
	glViewport((GLint)x, (GLint)y, (GLsizei)width, (GLsizei)height);

}

template <typename... Args>
static void _glDrawArrays(std::tuple<Args...> args) {
	float mode = std::get<0>(args);float first = std::get<1>(args);float count = std::get<2>(args);
	
	glDrawArrays((GLenum)mode, (GLint)first, (GLsizei)count);

}

template <typename... Args>
static void _glDrawElements(std::tuple<Args...> args) {
	float mode = std::get<0>(args);float count = std::get<1>(args);float type = std::get<2>(args);float indices = std::get<3>(args);
	auto indices_memory = static_cast<int>(indices);auto indices_ptr = (intptr_t)(indices_memory) == 0 ? nullptr : (const GLvoid *)((intptr_t)(get_memory()) + (intptr_t)(indices_memory));
	
	glDrawElements((GLenum)mode, (GLsizei)count, (GLenum)type, indices_ptr);

}

template <typename... Args>
static void _glPolygonOffset(std::tuple<Args...> args) {
	float factor = std::get<0>(args);float units = std::get<1>(args);
	
	glPolygonOffset((GLfloat)factor, (GLfloat)units);

}

template <typename... Args>
static void _glCopyTexImage1D(std::tuple<Args...> args) {
	float target = std::get<0>(args);float level = std::get<1>(args);float internalformat = std::get<2>(args);float x = std::get<3>(args);float y = std::get<4>(args);float width = std::get<5>(args);float border = std::get<6>(args);
	
	glCopyTexImage1D((GLenum)target, (GLint)level, (GLenum)internalformat, (GLint)x, (GLint)y, (GLsizei)width, (GLint)border);

}

template <typename... Args>
static void _glCopyTexImage2D(std::tuple<Args...> args) {
	float target = std::get<0>(args);float level = std::get<1>(args);float internalformat = std::get<2>(args);float x = std::get<3>(args);float y = std::get<4>(args);float width = std::get<5>(args);float height = std::get<6>(args);float border = std::get<7>(args);
	
	glCopyTexImage2D((GLenum)target, (GLint)level, (GLenum)internalformat, (GLint)x, (GLint)y, (GLsizei)width, (GLsizei)height, (GLint)border);

}

template <typename... Args>
static void _glCopyTexSubImage1D(std::tuple<Args...> args) {
	float target = std::get<0>(args);float level = std::get<1>(args);float xoffset = std::get<2>(args);float x = std::get<3>(args);float y = std::get<4>(args);float width = std::get<5>(args);
	
	glCopyTexSubImage1D((GLenum)target, (GLint)level, (GLint)xoffset, (GLint)x, (GLint)y, (GLsizei)width);

}

template <typename... Args>
static void _glCopyTexSubImage2D(std::tuple<Args...> args) {
	float target = std::get<0>(args);float level = std::get<1>(args);float xoffset = std::get<2>(args);float yoffset = std::get<3>(args);float x = std::get<4>(args);float y = std::get<5>(args);float width = std::get<6>(args);float height = std::get<7>(args);
	
	glCopyTexSubImage2D((GLenum)target, (GLint)level, (GLint)xoffset, (GLint)yoffset, (GLint)x, (GLint)y, (GLsizei)width, (GLsizei)height);

}

template <typename... Args>
static void _glTexSubImage1D(std::tuple<Args...> args) {
	float target = std::get<0>(args);float level = std::get<1>(args);float xoffset = std::get<2>(args);float width = std::get<3>(args);float format = std::get<4>(args);float type = std::get<5>(args);float pixels = std::get<6>(args);
	auto pixels_memory = static_cast<int>(pixels);auto pixels_ptr = (intptr_t)(pixels_memory) == 0 ? nullptr : (const GLvoid *)((intptr_t)(get_memory()) + (intptr_t)(pixels_memory));
	
	glTexSubImage1D((GLenum)target, (GLint)level, (GLint)xoffset, (GLsizei)width, (GLenum)format, (GLenum)type, pixels_ptr);

}

template <typename... Args>
static void _glTexSubImage2D(std::tuple<Args...> args) {
	float target = std::get<0>(args);float level = std::get<1>(args);float xoffset = std::get<2>(args);float yoffset = std::get<3>(args);float width = std::get<4>(args);float height = std::get<5>(args);float format = std::get<6>(args);float type = std::get<7>(args);float pixels = std::get<8>(args);
	auto pixels_memory = static_cast<int>(pixels);auto pixels_ptr = (intptr_t)(pixels_memory) == 0 ? nullptr : (const GLvoid *)((intptr_t)(get_memory()) + (intptr_t)(pixels_memory));
	
	glTexSubImage2D((GLenum)target, (GLint)level, (GLint)xoffset, (GLint)yoffset, (GLsizei)width, (GLsizei)height, (GLenum)format, (GLenum)type, pixels_ptr);

}

template <typename... Args>
static void _glBindTexture(std::tuple<Args...> args) {
	float target = std::get<0>(args);float texture = std::get<1>(args);
	
	glBindTexture((GLenum)target, (GLuint)texture);

}

template <typename... Args>
static void _glDeleteTextures(std::tuple<Args...> args) {
	float n = std::get<0>(args);float textures = std::get<1>(args);
	auto textures_memory = static_cast<int>(textures);auto textures_ptr = (intptr_t)(textures_memory) == 0 ? nullptr : (const GLuint *)((intptr_t)(get_memory()) + (intptr_t)(textures_memory));
	
	glDeleteTextures((GLsizei)n, textures_ptr);

}

template <typename... Args>
static void _glGenTextures(std::tuple<Args...> args) {
	float n = std::get<0>(args);float textures = std::get<1>(args);
	auto textures_memory = static_cast<int>(textures);auto textures_ptr = (intptr_t)(textures_memory) == 0 ? nullptr : (GLuint *)((intptr_t)(get_memory()) + (intptr_t)(textures_memory));
	
	glGenTextures((GLsizei)n, textures_ptr);

}

template <typename... Args>
static int _glIsTexture(std::tuple<Args...> args) {
	float texture = std::get<0>(args);
	
	return (int)(glIsTexture((GLuint)texture));

}

template <typename... Args>
static void _glBlendColor(std::tuple<Args...> args) {
	float red = std::get<0>(args);float green = std::get<1>(args);float blue = std::get<2>(args);float alpha = std::get<3>(args);
	
	glBlendColor((GLfloat)red, (GLfloat)green, (GLfloat)blue, (GLfloat)alpha);

}

template <typename... Args>
static void _glBlendEquation(std::tuple<Args...> args) {
	float mode = std::get<0>(args);
	
	glBlendEquation((GLenum)mode);

}

template <typename... Args>
static void _glDrawRangeElements(std::tuple<Args...> args) {
	float mode = std::get<0>(args);float start = std::get<1>(args);float end = std::get<2>(args);float count = std::get<3>(args);float type = std::get<4>(args);float indices = std::get<5>(args);
	auto indices_memory = static_cast<int>(indices);auto indices_ptr = (intptr_t)(indices_memory) == 0 ? nullptr : (const GLvoid *)((intptr_t)(get_memory()) + (intptr_t)(indices_memory));
	
	glDrawRangeElements((GLenum)mode, (GLuint)start, (GLuint)end, (GLsizei)count, (GLenum)type, indices_ptr);

}

template <typename... Args>
static void _glTexImage3D(std::tuple<Args...> args) {
	float target = std::get<0>(args);float level = std::get<1>(args);float internalformat = std::get<2>(args);float width = std::get<3>(args);float height = std::get<4>(args);float depth = std::get<5>(args);float border = std::get<6>(args);float format = std::get<7>(args);float type = std::get<8>(args);float pixels = std::get<9>(args);
	auto pixels_memory = static_cast<int>(pixels);auto pixels_ptr = (intptr_t)(pixels_memory) == 0 ? nullptr : (const GLvoid *)((intptr_t)(get_memory()) + (intptr_t)(pixels_memory));
	
	glTexImage3D((GLenum)target, (GLint)level, (GLint)internalformat, (GLsizei)width, (GLsizei)height, (GLsizei)depth, (GLint)border, (GLenum)format, (GLenum)type, pixels_ptr);

}

template <typename... Args>
static void _glTexSubImage3D(std::tuple<Args...> args) {
	float target = std::get<0>(args);float level = std::get<1>(args);float xoffset = std::get<2>(args);float yoffset = std::get<3>(args);float zoffset = std::get<4>(args);float width = std::get<5>(args);float height = std::get<6>(args);float depth = std::get<7>(args);float format = std::get<8>(args);float type = std::get<9>(args);float pixels = std::get<10>(args);
	auto pixels_memory = static_cast<int>(pixels);auto pixels_ptr = (intptr_t)(pixels_memory) == 0 ? nullptr : (const GLvoid *)((intptr_t)(get_memory()) + (intptr_t)(pixels_memory));
	
	glTexSubImage3D((GLenum)target, (GLint)level, (GLint)xoffset, (GLint)yoffset, (GLint)zoffset, (GLsizei)width, (GLsizei)height, (GLsizei)depth, (GLenum)format, (GLenum)type, pixels_ptr);

}

template <typename... Args>
static void _glCopyTexSubImage3D(std::tuple<Args...> args) {
	float target = std::get<0>(args);float level = std::get<1>(args);float xoffset = std::get<2>(args);float yoffset = std::get<3>(args);float zoffset = std::get<4>(args);float x = std::get<5>(args);float y = std::get<6>(args);float width = std::get<7>(args);float height = std::get<8>(args);
	
	glCopyTexSubImage3D((GLenum)target, (GLint)level, (GLint)xoffset, (GLint)yoffset, (GLint)zoffset, (GLint)x, (GLint)y, (GLsizei)width, (GLsizei)height);

}

template <typename... Args>
static void _glActiveTexture(std::tuple<Args...> args) {
	float texture = std::get<0>(args);
	
	glActiveTexture((GLenum)texture);

}

template <typename... Args>
static void _glSampleCoverage(std::tuple<Args...> args) {
	float value = std::get<0>(args);float invert = std::get<1>(args);
	
	glSampleCoverage((GLclampf)value, (GLboolean)invert);

}

template <typename... Args>
static void _glCompressedTexImage3D(std::tuple<Args...> args) {
	float target = std::get<0>(args);float level = std::get<1>(args);float internalformat = std::get<2>(args);float width = std::get<3>(args);float height = std::get<4>(args);float depth = std::get<5>(args);float border = std::get<6>(args);float imageSize = std::get<7>(args);float data = std::get<8>(args);
	auto data_memory = static_cast<int>(data);auto data_ptr = (intptr_t)(data_memory) == 0 ? nullptr : (const GLvoid *)((intptr_t)(get_memory()) + (intptr_t)(data_memory));
	
	glCompressedTexImage3D((GLenum)target, (GLint)level, (GLenum)internalformat, (GLsizei)width, (GLsizei)height, (GLsizei)depth, (GLint)border, (GLsizei)imageSize, data_ptr);

}

template <typename... Args>
static void _glCompressedTexImage2D(std::tuple<Args...> args) {
	float target = std::get<0>(args);float level = std::get<1>(args);float internalformat = std::get<2>(args);float width = std::get<3>(args);float height = std::get<4>(args);float border = std::get<5>(args);float imageSize = std::get<6>(args);float data = std::get<7>(args);
	auto data_memory = static_cast<int>(data);auto data_ptr = (intptr_t)(data_memory) == 0 ? nullptr : (const GLvoid *)((intptr_t)(get_memory()) + (intptr_t)(data_memory));
	
	glCompressedTexImage2D((GLenum)target, (GLint)level, (GLenum)internalformat, (GLsizei)width, (GLsizei)height, (GLint)border, (GLsizei)imageSize, data_ptr);

}

template <typename... Args>
static void _glCompressedTexImage1D(std::tuple<Args...> args) {
	float target = std::get<0>(args);float level = std::get<1>(args);float internalformat = std::get<2>(args);float width = std::get<3>(args);float border = std::get<4>(args);float imageSize = std::get<5>(args);float data = std::get<6>(args);
	auto data_memory = static_cast<int>(data);auto data_ptr = (intptr_t)(data_memory) == 0 ? nullptr : (const GLvoid *)((intptr_t)(get_memory()) + (intptr_t)(data_memory));
	
	glCompressedTexImage1D((GLenum)target, (GLint)level, (GLenum)internalformat, (GLsizei)width, (GLint)border, (GLsizei)imageSize, data_ptr);

}

template <typename... Args>
static void _glCompressedTexSubImage3D(std::tuple<Args...> args) {
	float target = std::get<0>(args);float level = std::get<1>(args);float xoffset = std::get<2>(args);float yoffset = std::get<3>(args);float zoffset = std::get<4>(args);float width = std::get<5>(args);float height = std::get<6>(args);float depth = std::get<7>(args);float format = std::get<8>(args);float imageSize = std::get<9>(args);float data = std::get<10>(args);
	auto data_memory = static_cast<int>(data);auto data_ptr = (intptr_t)(data_memory) == 0 ? nullptr : (const GLvoid *)((intptr_t)(get_memory()) + (intptr_t)(data_memory));
	
	glCompressedTexSubImage3D((GLenum)target, (GLint)level, (GLint)xoffset, (GLint)yoffset, (GLint)zoffset, (GLsizei)width, (GLsizei)height, (GLsizei)depth, (GLenum)format, (GLsizei)imageSize, data_ptr);

}

template <typename... Args>
static void _glCompressedTexSubImage2D(std::tuple<Args...> args) {
	float target = std::get<0>(args);float level = std::get<1>(args);float xoffset = std::get<2>(args);float yoffset = std::get<3>(args);float width = std::get<4>(args);float height = std::get<5>(args);float format = std::get<6>(args);float imageSize = std::get<7>(args);float data = std::get<8>(args);
	auto data_memory = static_cast<int>(data);auto data_ptr = (intptr_t)(data_memory) == 0 ? nullptr : (const GLvoid *)((intptr_t)(get_memory()) + (intptr_t)(data_memory));
	
	glCompressedTexSubImage2D((GLenum)target, (GLint)level, (GLint)xoffset, (GLint)yoffset, (GLsizei)width, (GLsizei)height, (GLenum)format, (GLsizei)imageSize, data_ptr);

}

template <typename... Args>
static void _glCompressedTexSubImage1D(std::tuple<Args...> args) {
	float target = std::get<0>(args);float level = std::get<1>(args);float xoffset = std::get<2>(args);float width = std::get<3>(args);float format = std::get<4>(args);float imageSize = std::get<5>(args);float data = std::get<6>(args);
	auto data_memory = static_cast<int>(data);auto data_ptr = (intptr_t)(data_memory) == 0 ? nullptr : (const GLvoid *)((intptr_t)(get_memory()) + (intptr_t)(data_memory));
	
	glCompressedTexSubImage1D((GLenum)target, (GLint)level, (GLint)xoffset, (GLsizei)width, (GLenum)format, (GLsizei)imageSize, data_ptr);

}

template <typename... Args>
static void _glGetCompressedTexImage(std::tuple<Args...> args) {
	float target = std::get<0>(args);float level = std::get<1>(args);float img = std::get<2>(args);
	auto img_memory = static_cast<int>(img);auto img_ptr = (intptr_t)(img_memory) == 0 ? nullptr : (GLvoid *)((intptr_t)(get_memory()) + (intptr_t)(img_memory));
	
	glGetCompressedTexImage((GLenum)target, (GLint)level, img_ptr);

}

template <typename... Args>
static void _glBlendFuncSeparate(std::tuple<Args...> args) {
	float sfactorRGB = std::get<0>(args);float dfactorRGB = std::get<1>(args);float sfactorAlpha = std::get<2>(args);float dfactorAlpha = std::get<3>(args);
	
	glBlendFuncSeparate((GLenum)sfactorRGB, (GLenum)dfactorRGB, (GLenum)sfactorAlpha, (GLenum)dfactorAlpha);

}

template <typename... Args>
static void _glMultiDrawArrays(std::tuple<Args...> args) {
	float mode = std::get<0>(args);float first = std::get<1>(args);float count = std::get<2>(args);float drawcount = std::get<3>(args);
	auto first_memory = static_cast<int>(first);auto first_ptr = (intptr_t)(first_memory) == 0 ? nullptr : (const GLint *)((intptr_t)(get_memory()) + (intptr_t)(first_memory));
	auto count_memory = static_cast<int>(count);auto count_ptr = (intptr_t)(count_memory) == 0 ? nullptr : (const GLsizei *)((intptr_t)(get_memory()) + (intptr_t)(count_memory));
	
	glMultiDrawArrays((GLenum)mode, first_ptr, count_ptr, (GLsizei)drawcount);

}

template <typename... Args>
static void _glMultiDrawElements(std::tuple<Args...> args) {
	float mode = std::get<0>(args);float count = std::get<1>(args);float type = std::get<2>(args);float indices = std::get<3>(args);float drawcount = std::get<4>(args);
	auto count_memory = static_cast<int>(count);auto count_ptr = (intptr_t)(count_memory) == 0 ? nullptr : (const GLsizei *)((intptr_t)(get_memory()) + (intptr_t)(count_memory));
	auto indices_memory = static_cast<int>(indices);auto indices_data = (int*)((intptr_t)(get_memory()) + (intptr_t)(indices_memory));auto indices_temporal = (const GLvoid* const *)((intptr_t)(get_memory()) + (intptr_t)(indices_data[0]));auto indices_ptr = (const GLvoid* const *)&indices_temporal;
	
	glMultiDrawElements((GLenum)mode, count_ptr, (GLenum)type, indices_ptr, (GLsizei)drawcount);

}

template <typename... Args>
static void _glPointParameterf(std::tuple<Args...> args) {
	float pname = std::get<0>(args);float param = std::get<1>(args);
	
	glPointParameterf((GLenum)pname, (GLfloat)param);

}

template <typename... Args>
static void _glPointParameterfv(std::tuple<Args...> args) {
	float pname = std::get<0>(args);float params = std::get<1>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glPointParameterfv((GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glPointParameteri(std::tuple<Args...> args) {
	float pname = std::get<0>(args);float param = std::get<1>(args);
	
	glPointParameteri((GLenum)pname, (GLint)param);

}

template <typename... Args>
static void _glPointParameteriv(std::tuple<Args...> args) {
	float pname = std::get<0>(args);float params = std::get<1>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (const GLint *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glPointParameteriv((GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glGenQueries(std::tuple<Args...> args) {
	float n = std::get<0>(args);float ids = std::get<1>(args);
	auto ids_memory = static_cast<int>(ids);auto ids_ptr = (intptr_t)(ids_memory) == 0 ? nullptr : (GLuint *)((intptr_t)(get_memory()) + (intptr_t)(ids_memory));
	
	glGenQueries((GLsizei)n, ids_ptr);

}

template <typename... Args>
static void _glDeleteQueries(std::tuple<Args...> args) {
	float n = std::get<0>(args);float ids = std::get<1>(args);
	auto ids_memory = static_cast<int>(ids);auto ids_ptr = (intptr_t)(ids_memory) == 0 ? nullptr : (const GLuint *)((intptr_t)(get_memory()) + (intptr_t)(ids_memory));
	
	glDeleteQueries((GLsizei)n, ids_ptr);

}

template <typename... Args>
static int _glIsQuery(std::tuple<Args...> args) {
	float id = std::get<0>(args);
	
	return (int)(glIsQuery((GLuint)id));

}

template <typename... Args>
static void _glBeginQuery(std::tuple<Args...> args) {
	float target = std::get<0>(args);float id = std::get<1>(args);
	
	glBeginQuery((GLenum)target, (GLuint)id);

}

template <typename... Args>
static void _glEndQuery(std::tuple<Args...> args) {
	float target = std::get<0>(args);
	
	glEndQuery((GLenum)target);

}

template <typename... Args>
static void _glGetQueryiv(std::tuple<Args...> args) {
	float target = std::get<0>(args);float pname = std::get<1>(args);float params = std::get<2>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLint *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetQueryiv((GLenum)target, (GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glGetQueryObjectiv(std::tuple<Args...> args) {
	float id = std::get<0>(args);float pname = std::get<1>(args);float params = std::get<2>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLint *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetQueryObjectiv((GLuint)id, (GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glGetQueryObjectuiv(std::tuple<Args...> args) {
	float id = std::get<0>(args);float pname = std::get<1>(args);float params = std::get<2>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLuint *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetQueryObjectuiv((GLuint)id, (GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glBindBuffer(std::tuple<Args...> args) {
	float target = std::get<0>(args);float buffer = std::get<1>(args);
	
	glBindBuffer((GLenum)target, (GLuint)buffer);

}

template <typename... Args>
static void _glDeleteBuffers(std::tuple<Args...> args) {
	float n = std::get<0>(args);float buffers = std::get<1>(args);
	auto buffers_memory = static_cast<int>(buffers);auto buffers_ptr = (intptr_t)(buffers_memory) == 0 ? nullptr : (const GLuint *)((intptr_t)(get_memory()) + (intptr_t)(buffers_memory));
	
	glDeleteBuffers((GLsizei)n, buffers_ptr);

}

template <typename... Args>
static void _glGenBuffers(std::tuple<Args...> args) {
	float n = std::get<0>(args);float buffers = std::get<1>(args);
	auto buffers_memory = static_cast<int>(buffers);auto buffers_ptr = (intptr_t)(buffers_memory) == 0 ? nullptr : (GLuint *)((intptr_t)(get_memory()) + (intptr_t)(buffers_memory));
	
	glGenBuffers((GLsizei)n, buffers_ptr);

}

template <typename... Args>
static int _glIsBuffer(std::tuple<Args...> args) {
	float buffer = std::get<0>(args);
	
	return (int)(glIsBuffer((GLuint)buffer));

}

template <typename... Args>
static void _glBufferData(std::tuple<Args...> args) {
	float target = std::get<0>(args);float size = std::get<1>(args);float data = std::get<2>(args);float usage = std::get<3>(args);
	auto data_memory = static_cast<int>(data);auto data_ptr = (intptr_t)(data_memory) == 0 ? nullptr : (const GLvoid *)((intptr_t)(get_memory()) + (intptr_t)(data_memory));
	
	glBufferData((GLenum)target, (GLsizeiptr)size, data_ptr, (GLenum)usage);

}

template <typename... Args>
static void _glBufferSubData(std::tuple<Args...> args) {
	float target = std::get<0>(args);float offset = std::get<1>(args);float size = std::get<2>(args);float data = std::get<3>(args);
	auto data_memory = static_cast<int>(data);auto data_ptr = (intptr_t)(data_memory) == 0 ? nullptr : (const GLvoid *)((intptr_t)(get_memory()) + (intptr_t)(data_memory));
	
	glBufferSubData((GLenum)target, (GLintptr)offset, (GLsizeiptr)size, data_ptr);

}

template <typename... Args>
static void _glGetBufferSubData(std::tuple<Args...> args) {
	float target = std::get<0>(args);float offset = std::get<1>(args);float size = std::get<2>(args);float data = std::get<3>(args);
	auto data_memory = static_cast<int>(data);auto data_ptr = (intptr_t)(data_memory) == 0 ? nullptr : (GLvoid *)((intptr_t)(get_memory()) + (intptr_t)(data_memory));
	
	glGetBufferSubData((GLenum)target, (GLintptr)offset, (GLsizeiptr)size, data_ptr);

}

template <typename... Args>
static int _glMapBuffer(std::tuple<Args...> args) {
float target = std::get<0>(args);float access = std::get<1>(args);
	
	
	const char* result = reinterpret_cast<const char*>(glMapBuffer(target, access));
	std::string str(result);
	size_t data_length = str.length();
	void* memory_ptr = allocate(data_length + 1); // +1 for null terminator
	memcpy((void*)((intptr_t)get_memory() + (intptr_t)memory_ptr), str.c_str(), str.size());
	return reinterpret_cast<ptrdiff_t>(memory_ptr);

}

template <typename... Args>
static int _glUnmapBuffer(std::tuple<Args...> args) {
	float target = std::get<0>(args);
	
	return (int)(glUnmapBuffer((GLenum)target));

}

template <typename... Args>
static void _glGetBufferParameteriv(std::tuple<Args...> args) {
	float target = std::get<0>(args);float pname = std::get<1>(args);float params = std::get<2>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLint *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetBufferParameteriv((GLenum)target, (GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glGetBufferPointerv(std::tuple<Args...> args) {
	float target = std::get<0>(args);float pname = std::get<1>(args);float params = std::get<2>(args);
	auto params_memory = static_cast<int>(params);auto params_data = (int*)((intptr_t)(get_memory()) + (intptr_t)(params_memory));auto params_temporal = (GLvoid* *)((intptr_t)(get_memory()) + (intptr_t)(params_data[0]));auto params_ptr = (GLvoid* *)&params_temporal;
	
	glGetBufferPointerv((GLenum)target, (GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glBlendEquationSeparate(std::tuple<Args...> args) {
	float modeRGB = std::get<0>(args);float modeAlpha = std::get<1>(args);
	
	glBlendEquationSeparate((GLenum)modeRGB, (GLenum)modeAlpha);

}

template <typename... Args>
static void _glDrawBuffers(std::tuple<Args...> args) {
	float n = std::get<0>(args);float bufs = std::get<1>(args);
	auto bufs_memory = static_cast<int>(bufs);auto bufs_ptr = (intptr_t)(bufs_memory) == 0 ? nullptr : (const GLenum *)((intptr_t)(get_memory()) + (intptr_t)(bufs_memory));
	
	glDrawBuffers((GLsizei)n, bufs_ptr);

}

template <typename... Args>
static void _glStencilOpSeparate(std::tuple<Args...> args) {
	float face = std::get<0>(args);float sfail = std::get<1>(args);float dpfail = std::get<2>(args);float dppass = std::get<3>(args);
	
	glStencilOpSeparate((GLenum)face, (GLenum)sfail, (GLenum)dpfail, (GLenum)dppass);

}

template <typename... Args>
static void _glStencilFuncSeparate(std::tuple<Args...> args) {
	float face = std::get<0>(args);float func = std::get<1>(args);float ref = std::get<2>(args);float mask = std::get<3>(args);
	
	glStencilFuncSeparate((GLenum)face, (GLenum)func, (GLint)ref, (GLuint)mask);

}

template <typename... Args>
static void _glStencilMaskSeparate(std::tuple<Args...> args) {
	float face = std::get<0>(args);float mask = std::get<1>(args);
	
	glStencilMaskSeparate((GLenum)face, (GLuint)mask);

}

template <typename... Args>
static void _glAttachShader(std::tuple<Args...> args) {
	float program = std::get<0>(args);float shader = std::get<1>(args);
	
	glAttachShader((GLuint)program, (GLuint)shader);

}

template <typename... Args>
static void _glBindAttribLocation(std::tuple<Args...> args) {
	float program = std::get<0>(args);float index = std::get<1>(args);float name = std::get<2>(args);
	auto name_memory = static_cast<int>(name);auto name_ptr = (intptr_t)(name_memory) == 0 ? nullptr : (const GLchar *)((intptr_t)(get_memory()) + (intptr_t)(name_memory));
	
	glBindAttribLocation((GLuint)program, (GLuint)index, name_ptr);

}

template <typename... Args>
static void _glCompileShader(std::tuple<Args...> args) {
	float shader = std::get<0>(args);
	
	glCompileShader((GLuint)shader);

}

static int _glCreateProgram() {
	
	
	return (int)(glCreateProgram());

}

template <typename... Args>
static int _glCreateShader(std::tuple<Args...> args) {
	float type = std::get<0>(args);
	
	return (int)(glCreateShader((GLenum)type));

}

template <typename... Args>
static void _glDeleteProgram(std::tuple<Args...> args) {
	float program = std::get<0>(args);
	
	glDeleteProgram((GLuint)program);

}

template <typename... Args>
static void _glDeleteShader(std::tuple<Args...> args) {
	float shader = std::get<0>(args);
	
	glDeleteShader((GLuint)shader);

}

template <typename... Args>
static void _glDetachShader(std::tuple<Args...> args) {
	float program = std::get<0>(args);float shader = std::get<1>(args);
	
	glDetachShader((GLuint)program, (GLuint)shader);

}

template <typename... Args>
static void _glDisableVertexAttribArray(std::tuple<Args...> args) {
	float index = std::get<0>(args);
	
	glDisableVertexAttribArray((GLuint)index);

}

template <typename... Args>
static void _glEnableVertexAttribArray(std::tuple<Args...> args) {
	float index = std::get<0>(args);
	
	glEnableVertexAttribArray((GLuint)index);

}

template <typename... Args>
static void _glGetActiveAttrib(std::tuple<Args...> args) {
	float program = std::get<0>(args);float index = std::get<1>(args);float bufSize = std::get<2>(args);float length = std::get<3>(args);float size = std::get<4>(args);float type = std::get<5>(args);float name = std::get<6>(args);
	auto length_memory = static_cast<int>(length);auto length_ptr = (intptr_t)(length_memory) == 0 ? nullptr : (GLsizei *)((intptr_t)(get_memory()) + (intptr_t)(length_memory));
	auto size_memory = static_cast<int>(size);auto size_ptr = (intptr_t)(size_memory) == 0 ? nullptr : (GLint *)((intptr_t)(get_memory()) + (intptr_t)(size_memory));
	auto type_memory = static_cast<int>(type);auto type_ptr = (intptr_t)(type_memory) == 0 ? nullptr : (GLenum *)((intptr_t)(get_memory()) + (intptr_t)(type_memory));
	auto name_memory = static_cast<int>(name);auto name_ptr = (intptr_t)(name_memory) == 0 ? nullptr : (GLchar *)((intptr_t)(get_memory()) + (intptr_t)(name_memory));
	
	glGetActiveAttrib((GLuint)program, (GLuint)index, (GLsizei)bufSize, length_ptr, size_ptr, type_ptr, name_ptr);

}

template <typename... Args>
static void _glGetActiveUniform(std::tuple<Args...> args) {
	float program = std::get<0>(args);float index = std::get<1>(args);float bufSize = std::get<2>(args);float length = std::get<3>(args);float size = std::get<4>(args);float type = std::get<5>(args);float name = std::get<6>(args);
	auto length_memory = static_cast<int>(length);auto length_ptr = (intptr_t)(length_memory) == 0 ? nullptr : (GLsizei *)((intptr_t)(get_memory()) + (intptr_t)(length_memory));
	auto size_memory = static_cast<int>(size);auto size_ptr = (intptr_t)(size_memory) == 0 ? nullptr : (GLint *)((intptr_t)(get_memory()) + (intptr_t)(size_memory));
	auto type_memory = static_cast<int>(type);auto type_ptr = (intptr_t)(type_memory) == 0 ? nullptr : (GLenum *)((intptr_t)(get_memory()) + (intptr_t)(type_memory));
	auto name_memory = static_cast<int>(name);auto name_ptr = (intptr_t)(name_memory) == 0 ? nullptr : (GLchar *)((intptr_t)(get_memory()) + (intptr_t)(name_memory));
	
	glGetActiveUniform((GLuint)program, (GLuint)index, (GLsizei)bufSize, length_ptr, size_ptr, type_ptr, name_ptr);

}

template <typename... Args>
static void _glGetAttachedShaders(std::tuple<Args...> args) {
	float program = std::get<0>(args);float maxCount = std::get<1>(args);float count = std::get<2>(args);float shaders = std::get<3>(args);
	auto count_memory = static_cast<int>(count);auto count_ptr = (intptr_t)(count_memory) == 0 ? nullptr : (GLsizei *)((intptr_t)(get_memory()) + (intptr_t)(count_memory));
	auto shaders_memory = static_cast<int>(shaders);auto shaders_ptr = (intptr_t)(shaders_memory) == 0 ? nullptr : (GLuint *)((intptr_t)(get_memory()) + (intptr_t)(shaders_memory));
	
	glGetAttachedShaders((GLuint)program, (GLsizei)maxCount, count_ptr, shaders_ptr);

}

template <typename... Args>
static int _glGetAttribLocation(std::tuple<Args...> args) {
	float program = std::get<0>(args);float name = std::get<1>(args);
	auto name_memory = static_cast<int>(name);auto name_ptr = (intptr_t)(name_memory) == 0 ? nullptr : (const GLchar *)((intptr_t)(get_memory()) + (intptr_t)(name_memory));
	
	return (int)(glGetAttribLocation((GLuint)program, name_ptr));

}

template <typename... Args>
static void _glGetProgramiv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float pname = std::get<1>(args);float params = std::get<2>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLint *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetProgramiv((GLuint)program, (GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glGetProgramInfoLog(std::tuple<Args...> args) {
	float program = std::get<0>(args);float bufSize = std::get<1>(args);float length = std::get<2>(args);float infoLog = std::get<3>(args);
	auto length_memory = static_cast<int>(length);auto length_ptr = (intptr_t)(length_memory) == 0 ? nullptr : (GLsizei *)((intptr_t)(get_memory()) + (intptr_t)(length_memory));
	auto infoLog_memory = static_cast<int>(infoLog);auto infoLog_ptr = (intptr_t)(infoLog_memory) == 0 ? nullptr : (GLchar *)((intptr_t)(get_memory()) + (intptr_t)(infoLog_memory));
	
	glGetProgramInfoLog((GLuint)program, (GLsizei)bufSize, length_ptr, infoLog_ptr);

}

template <typename... Args>
static void _glGetShaderiv(std::tuple<Args...> args) {
	float shader = std::get<0>(args);float pname = std::get<1>(args);float params = std::get<2>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLint *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetShaderiv((GLuint)shader, (GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glGetShaderInfoLog(std::tuple<Args...> args) {
	float shader = std::get<0>(args);float bufSize = std::get<1>(args);float length = std::get<2>(args);float infoLog = std::get<3>(args);
	auto length_memory = static_cast<int>(length);auto length_ptr = (intptr_t)(length_memory) == 0 ? nullptr : (GLsizei *)((intptr_t)(get_memory()) + (intptr_t)(length_memory));
	auto infoLog_memory = static_cast<int>(infoLog);auto infoLog_ptr = (intptr_t)(infoLog_memory) == 0 ? nullptr : (GLchar *)((intptr_t)(get_memory()) + (intptr_t)(infoLog_memory));
	
	glGetShaderInfoLog((GLuint)shader, (GLsizei)bufSize, length_ptr, infoLog_ptr);

}

template <typename... Args>
static void _glGetShaderSource(std::tuple<Args...> args) {
	float shader = std::get<0>(args);float bufSize = std::get<1>(args);float length = std::get<2>(args);float source = std::get<3>(args);
	auto length_memory = static_cast<int>(length);auto length_ptr = (intptr_t)(length_memory) == 0 ? nullptr : (GLsizei *)((intptr_t)(get_memory()) + (intptr_t)(length_memory));
	auto source_memory = static_cast<int>(source);auto source_ptr = (intptr_t)(source_memory) == 0 ? nullptr : (GLchar *)((intptr_t)(get_memory()) + (intptr_t)(source_memory));
	
	glGetShaderSource((GLuint)shader, (GLsizei)bufSize, length_ptr, source_ptr);

}

template <typename... Args>
static int _glGetUniformLocation(std::tuple<Args...> args) {
	float program = std::get<0>(args);float name = std::get<1>(args);
	auto name_memory = static_cast<int>(name);auto name_ptr = (intptr_t)(name_memory) == 0 ? nullptr : (const GLchar *)((intptr_t)(get_memory()) + (intptr_t)(name_memory));
	
	return (int)(glGetUniformLocation((GLuint)program, name_ptr));

}

template <typename... Args>
static void _glGetUniformfv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float params = std::get<2>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetUniformfv((GLuint)program, (GLint)location, params_ptr);

}

template <typename... Args>
static void _glGetUniformiv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float params = std::get<2>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLint *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetUniformiv((GLuint)program, (GLint)location, params_ptr);

}

template <typename... Args>
static void _glGetVertexAttribdv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float pname = std::get<1>(args);float params = std::get<2>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetVertexAttribdv((GLuint)index, (GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glGetVertexAttribfv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float pname = std::get<1>(args);float params = std::get<2>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetVertexAttribfv((GLuint)index, (GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glGetVertexAttribiv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float pname = std::get<1>(args);float params = std::get<2>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLint *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetVertexAttribiv((GLuint)index, (GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glGetVertexAttribPointerv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float pname = std::get<1>(args);float pointer = std::get<2>(args);
	auto pointer_memory = static_cast<int>(pointer);auto pointer_data = (int*)((intptr_t)(get_memory()) + (intptr_t)(pointer_memory));auto pointer_temporal = (GLvoid* *)((intptr_t)(get_memory()) + (intptr_t)(pointer_data[0]));auto pointer_ptr = (GLvoid* *)&pointer_temporal;
	
	glGetVertexAttribPointerv((GLuint)index, (GLenum)pname, pointer_ptr);

}

template <typename... Args>
static int _glIsProgram(std::tuple<Args...> args) {
	float program = std::get<0>(args);
	
	return (int)(glIsProgram((GLuint)program));

}

template <typename... Args>
static int _glIsShader(std::tuple<Args...> args) {
	float shader = std::get<0>(args);
	
	return (int)(glIsShader((GLuint)shader));

}

template <typename... Args>
static void _glLinkProgram(std::tuple<Args...> args) {
	float program = std::get<0>(args);
	
	glLinkProgram((GLuint)program);

}

template <typename... Args>
static void _glShaderSource(std::tuple<Args...> args) {
	float shader = std::get<0>(args);float count = std::get<1>(args);float string = std::get<2>(args);float length = std::get<3>(args);
	auto string_memory = static_cast<int>(string);auto string_data = (int*)((intptr_t)(get_memory()) + (intptr_t)(string_memory));auto string_temporal = (const GLchar* const *)((intptr_t)(get_memory()) + (intptr_t)(string_data[0]));auto string_ptr = (const GLchar* const *)&string_temporal;
	auto length_memory = static_cast<int>(length);auto length_ptr = (intptr_t)(length_memory) == 0 ? nullptr : (const GLint *)((intptr_t)(get_memory()) + (intptr_t)(length_memory));
	
	glShaderSource((GLuint)shader, (GLsizei)count, string_ptr, length_ptr);

}

template <typename... Args>
static void _glUseProgram(std::tuple<Args...> args) {
	float program = std::get<0>(args);
	
	glUseProgram((GLuint)program);

}

template <typename... Args>
static void _glUniform1f(std::tuple<Args...> args) {
	float location = std::get<0>(args);float v0 = std::get<1>(args);
	
	glUniform1f((GLint)location, (GLfloat)v0);

}

template <typename... Args>
static void _glUniform2f(std::tuple<Args...> args) {
	float location = std::get<0>(args);float v0 = std::get<1>(args);float v1 = std::get<2>(args);
	
	glUniform2f((GLint)location, (GLfloat)v0, (GLfloat)v1);

}

template <typename... Args>
static void _glUniform3f(std::tuple<Args...> args) {
	float location = std::get<0>(args);float v0 = std::get<1>(args);float v1 = std::get<2>(args);float v2 = std::get<3>(args);
	
	glUniform3f((GLint)location, (GLfloat)v0, (GLfloat)v1, (GLfloat)v2);

}

template <typename... Args>
static void _glUniform4f(std::tuple<Args...> args) {
	float location = std::get<0>(args);float v0 = std::get<1>(args);float v1 = std::get<2>(args);float v2 = std::get<3>(args);float v3 = std::get<4>(args);
	
	glUniform4f((GLint)location, (GLfloat)v0, (GLfloat)v1, (GLfloat)v2, (GLfloat)v3);

}

template <typename... Args>
static void _glUniform1i(std::tuple<Args...> args) {
	float location = std::get<0>(args);float v0 = std::get<1>(args);
	
	glUniform1i((GLint)location, (GLint)v0);

}

template <typename... Args>
static void _glUniform2i(std::tuple<Args...> args) {
	float location = std::get<0>(args);float v0 = std::get<1>(args);float v1 = std::get<2>(args);
	
	glUniform2i((GLint)location, (GLint)v0, (GLint)v1);

}

template <typename... Args>
static void _glUniform3i(std::tuple<Args...> args) {
	float location = std::get<0>(args);float v0 = std::get<1>(args);float v1 = std::get<2>(args);float v2 = std::get<3>(args);
	
	glUniform3i((GLint)location, (GLint)v0, (GLint)v1, (GLint)v2);

}

template <typename... Args>
static void _glUniform4i(std::tuple<Args...> args) {
	float location = std::get<0>(args);float v0 = std::get<1>(args);float v1 = std::get<2>(args);float v2 = std::get<3>(args);float v3 = std::get<4>(args);
	
	glUniform4i((GLint)location, (GLint)v0, (GLint)v1, (GLint)v2, (GLint)v3);

}

template <typename... Args>
static void _glUniform1fv(std::tuple<Args...> args) {
	float location = std::get<0>(args);float count = std::get<1>(args);float value = std::get<2>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glUniform1fv((GLint)location, (GLsizei)count, value_ptr);

}

template <typename... Args>
static void _glUniform2fv(std::tuple<Args...> args) {
	float location = std::get<0>(args);float count = std::get<1>(args);float value = std::get<2>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glUniform2fv((GLint)location, (GLsizei)count, value_ptr);

}

template <typename... Args>
static void _glUniform3fv(std::tuple<Args...> args) {
	float location = std::get<0>(args);float count = std::get<1>(args);float value = std::get<2>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glUniform3fv((GLint)location, (GLsizei)count, value_ptr);

}

template <typename... Args>
static void _glUniform4fv(std::tuple<Args...> args) {
	float location = std::get<0>(args);float count = std::get<1>(args);float value = std::get<2>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glUniform4fv((GLint)location, (GLsizei)count, value_ptr);

}

template <typename... Args>
static void _glUniform1iv(std::tuple<Args...> args) {
	float location = std::get<0>(args);float count = std::get<1>(args);float value = std::get<2>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLint *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glUniform1iv((GLint)location, (GLsizei)count, value_ptr);

}

template <typename... Args>
static void _glUniform2iv(std::tuple<Args...> args) {
	float location = std::get<0>(args);float count = std::get<1>(args);float value = std::get<2>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLint *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glUniform2iv((GLint)location, (GLsizei)count, value_ptr);

}

template <typename... Args>
static void _glUniform3iv(std::tuple<Args...> args) {
	float location = std::get<0>(args);float count = std::get<1>(args);float value = std::get<2>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLint *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glUniform3iv((GLint)location, (GLsizei)count, value_ptr);

}

template <typename... Args>
static void _glUniform4iv(std::tuple<Args...> args) {
	float location = std::get<0>(args);float count = std::get<1>(args);float value = std::get<2>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLint *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glUniform4iv((GLint)location, (GLsizei)count, value_ptr);

}

template <typename... Args>
static void _glUniformMatrix2fv(std::tuple<Args...> args) {
	float location = std::get<0>(args);float count = std::get<1>(args);float transpose = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glUniformMatrix2fv((GLint)location, (GLsizei)count, (GLboolean)transpose, value_ptr);

}

template <typename... Args>
static void _glUniformMatrix3fv(std::tuple<Args...> args) {
	float location = std::get<0>(args);float count = std::get<1>(args);float transpose = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glUniformMatrix3fv((GLint)location, (GLsizei)count, (GLboolean)transpose, value_ptr);

}

template <typename... Args>
static void _glUniformMatrix4fv(std::tuple<Args...> args) {
	float location = std::get<0>(args);float count = std::get<1>(args);float transpose = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glUniformMatrix4fv((GLint)location, (GLsizei)count, (GLboolean)transpose, value_ptr);

}

template <typename... Args>
static void _glValidateProgram(std::tuple<Args...> args) {
	float program = std::get<0>(args);
	
	glValidateProgram((GLuint)program);

}

template <typename... Args>
static void _glVertexAttrib1d(std::tuple<Args...> args) {
	float index = std::get<0>(args);float x = std::get<1>(args);
	
	glVertexAttrib1d((GLuint)index, (GLdouble)x);

}

template <typename... Args>
static void _glVertexAttrib1dv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttrib1dv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttrib1f(std::tuple<Args...> args) {
	float index = std::get<0>(args);float x = std::get<1>(args);
	
	glVertexAttrib1f((GLuint)index, (GLfloat)x);

}

template <typename... Args>
static void _glVertexAttrib1fv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttrib1fv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttrib1s(std::tuple<Args...> args) {
	float index = std::get<0>(args);float x = std::get<1>(args);
	
	glVertexAttrib1s((GLuint)index, (GLshort)x);

}

template <typename... Args>
static void _glVertexAttrib1sv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLshort *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttrib1sv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttrib2d(std::tuple<Args...> args) {
	float index = std::get<0>(args);float x = std::get<1>(args);float y = std::get<2>(args);
	
	glVertexAttrib2d((GLuint)index, (GLdouble)x, (GLdouble)y);

}

template <typename... Args>
static void _glVertexAttrib2dv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttrib2dv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttrib2f(std::tuple<Args...> args) {
	float index = std::get<0>(args);float x = std::get<1>(args);float y = std::get<2>(args);
	
	glVertexAttrib2f((GLuint)index, (GLfloat)x, (GLfloat)y);

}

template <typename... Args>
static void _glVertexAttrib2fv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttrib2fv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttrib2s(std::tuple<Args...> args) {
	float index = std::get<0>(args);float x = std::get<1>(args);float y = std::get<2>(args);
	
	glVertexAttrib2s((GLuint)index, (GLshort)x, (GLshort)y);

}

template <typename... Args>
static void _glVertexAttrib2sv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLshort *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttrib2sv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttrib3d(std::tuple<Args...> args) {
	float index = std::get<0>(args);float x = std::get<1>(args);float y = std::get<2>(args);float z = std::get<3>(args);
	
	glVertexAttrib3d((GLuint)index, (GLdouble)x, (GLdouble)y, (GLdouble)z);

}

template <typename... Args>
static void _glVertexAttrib3dv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttrib3dv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttrib3f(std::tuple<Args...> args) {
	float index = std::get<0>(args);float x = std::get<1>(args);float y = std::get<2>(args);float z = std::get<3>(args);
	
	glVertexAttrib3f((GLuint)index, (GLfloat)x, (GLfloat)y, (GLfloat)z);

}

template <typename... Args>
static void _glVertexAttrib3fv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttrib3fv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttrib3s(std::tuple<Args...> args) {
	float index = std::get<0>(args);float x = std::get<1>(args);float y = std::get<2>(args);float z = std::get<3>(args);
	
	glVertexAttrib3s((GLuint)index, (GLshort)x, (GLshort)y, (GLshort)z);

}

template <typename... Args>
static void _glVertexAttrib3sv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLshort *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttrib3sv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttrib4Nbv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLbyte *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttrib4Nbv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttrib4Niv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLint *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttrib4Niv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttrib4Nsv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLshort *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttrib4Nsv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttrib4Nub(std::tuple<Args...> args) {
	float index = std::get<0>(args);float x = std::get<1>(args);float y = std::get<2>(args);float z = std::get<3>(args);float w = std::get<4>(args);
	
	glVertexAttrib4Nub((GLuint)index, (GLubyte)x, (GLubyte)y, (GLubyte)z, (GLubyte)w);

}

template <typename... Args>
static void _glVertexAttrib4Nubv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLubyte *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttrib4Nubv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttrib4Nuiv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLuint *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttrib4Nuiv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttrib4Nusv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLushort *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttrib4Nusv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttrib4bv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLbyte *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttrib4bv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttrib4d(std::tuple<Args...> args) {
	float index = std::get<0>(args);float x = std::get<1>(args);float y = std::get<2>(args);float z = std::get<3>(args);float w = std::get<4>(args);
	
	glVertexAttrib4d((GLuint)index, (GLdouble)x, (GLdouble)y, (GLdouble)z, (GLdouble)w);

}

template <typename... Args>
static void _glVertexAttrib4dv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttrib4dv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttrib4f(std::tuple<Args...> args) {
	float index = std::get<0>(args);float x = std::get<1>(args);float y = std::get<2>(args);float z = std::get<3>(args);float w = std::get<4>(args);
	
	glVertexAttrib4f((GLuint)index, (GLfloat)x, (GLfloat)y, (GLfloat)z, (GLfloat)w);

}

template <typename... Args>
static void _glVertexAttrib4fv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttrib4fv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttrib4iv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLint *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttrib4iv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttrib4s(std::tuple<Args...> args) {
	float index = std::get<0>(args);float x = std::get<1>(args);float y = std::get<2>(args);float z = std::get<3>(args);float w = std::get<4>(args);
	
	glVertexAttrib4s((GLuint)index, (GLshort)x, (GLshort)y, (GLshort)z, (GLshort)w);

}

template <typename... Args>
static void _glVertexAttrib4sv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLshort *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttrib4sv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttrib4ubv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLubyte *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttrib4ubv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttrib4uiv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLuint *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttrib4uiv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttrib4usv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLushort *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttrib4usv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttribPointer(std::tuple<Args...> args) {
	float index = std::get<0>(args);float size = std::get<1>(args);float type = std::get<2>(args);float normalized = std::get<3>(args);float stride = std::get<4>(args);float pointer = std::get<5>(args);
	auto pointer_memory = static_cast<int>(pointer);auto pointer_ptr = (intptr_t)(pointer_memory) == 0 ? nullptr : (const GLvoid *)((intptr_t)(get_memory()) + (intptr_t)(pointer_memory));
	
	glVertexAttribPointer((GLuint)index, (GLint)size, (GLenum)type, (GLboolean)normalized, (GLsizei)stride, pointer_ptr);

}

template <typename... Args>
static void _glUniformMatrix2x3fv(std::tuple<Args...> args) {
	float location = std::get<0>(args);float count = std::get<1>(args);float transpose = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glUniformMatrix2x3fv((GLint)location, (GLsizei)count, (GLboolean)transpose, value_ptr);

}

template <typename... Args>
static void _glUniformMatrix3x2fv(std::tuple<Args...> args) {
	float location = std::get<0>(args);float count = std::get<1>(args);float transpose = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glUniformMatrix3x2fv((GLint)location, (GLsizei)count, (GLboolean)transpose, value_ptr);

}

template <typename... Args>
static void _glUniformMatrix2x4fv(std::tuple<Args...> args) {
	float location = std::get<0>(args);float count = std::get<1>(args);float transpose = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glUniformMatrix2x4fv((GLint)location, (GLsizei)count, (GLboolean)transpose, value_ptr);

}

template <typename... Args>
static void _glUniformMatrix4x2fv(std::tuple<Args...> args) {
	float location = std::get<0>(args);float count = std::get<1>(args);float transpose = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glUniformMatrix4x2fv((GLint)location, (GLsizei)count, (GLboolean)transpose, value_ptr);

}

template <typename... Args>
static void _glUniformMatrix3x4fv(std::tuple<Args...> args) {
	float location = std::get<0>(args);float count = std::get<1>(args);float transpose = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glUniformMatrix3x4fv((GLint)location, (GLsizei)count, (GLboolean)transpose, value_ptr);

}

template <typename... Args>
static void _glUniformMatrix4x3fv(std::tuple<Args...> args) {
	float location = std::get<0>(args);float count = std::get<1>(args);float transpose = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glUniformMatrix4x3fv((GLint)location, (GLsizei)count, (GLboolean)transpose, value_ptr);

}

template <typename... Args>
static void _glColorMaski(std::tuple<Args...> args) {
	float index = std::get<0>(args);float r = std::get<1>(args);float g = std::get<2>(args);float b = std::get<3>(args);float a = std::get<4>(args);
	
	glColorMaski((GLuint)index, (GLboolean)r, (GLboolean)g, (GLboolean)b, (GLboolean)a);

}

template <typename... Args>
static void _glGetBooleani_v(std::tuple<Args...> args) {
	float target = std::get<0>(args);float index = std::get<1>(args);float data = std::get<2>(args);
	auto data_memory = static_cast<int>(data);auto data_ptr = (intptr_t)(data_memory) == 0 ? nullptr : (GLboolean *)((intptr_t)(get_memory()) + (intptr_t)(data_memory));
	
	glGetBooleani_v((GLenum)target, (GLuint)index, data_ptr);

}

template <typename... Args>
static void _glGetIntegeri_v(std::tuple<Args...> args) {
	float target = std::get<0>(args);float index = std::get<1>(args);float data = std::get<2>(args);
	auto data_memory = static_cast<int>(data);auto data_ptr = (intptr_t)(data_memory) == 0 ? nullptr : (GLint *)((intptr_t)(get_memory()) + (intptr_t)(data_memory));
	
	glGetIntegeri_v((GLenum)target, (GLuint)index, data_ptr);

}

template <typename... Args>
static void _glEnablei(std::tuple<Args...> args) {
	float target = std::get<0>(args);float index = std::get<1>(args);
	
	glEnablei((GLenum)target, (GLuint)index);

}

template <typename... Args>
static void _glDisablei(std::tuple<Args...> args) {
	float target = std::get<0>(args);float index = std::get<1>(args);
	
	glDisablei((GLenum)target, (GLuint)index);

}

template <typename... Args>
static int _glIsEnabledi(std::tuple<Args...> args) {
	float target = std::get<0>(args);float index = std::get<1>(args);
	
	return (int)(glIsEnabledi((GLenum)target, (GLuint)index));

}

template <typename... Args>
static void _glBeginTransformFeedback(std::tuple<Args...> args) {
	float primitiveMode = std::get<0>(args);
	
	glBeginTransformFeedback((GLenum)primitiveMode);

}

static void _glEndTransformFeedback() {
	
	
	glEndTransformFeedback();

}

template <typename... Args>
static void _glBindBufferRange(std::tuple<Args...> args) {
	float target = std::get<0>(args);float index = std::get<1>(args);float buffer = std::get<2>(args);float offset = std::get<3>(args);float size = std::get<4>(args);
	
	glBindBufferRange((GLenum)target, (GLuint)index, (GLuint)buffer, (GLintptr)offset, (GLsizeiptr)size);

}

template <typename... Args>
static void _glBindBufferBase(std::tuple<Args...> args) {
	float target = std::get<0>(args);float index = std::get<1>(args);float buffer = std::get<2>(args);
	
	glBindBufferBase((GLenum)target, (GLuint)index, (GLuint)buffer);

}

template <typename... Args>
static void _glTransformFeedbackVaryings(std::tuple<Args...> args) {
	float program = std::get<0>(args);float count = std::get<1>(args);float varyings = std::get<2>(args);float bufferMode = std::get<3>(args);
	auto varyings_memory = static_cast<int>(varyings);auto varyings_data = (int*)((intptr_t)(get_memory()) + (intptr_t)(varyings_memory));auto varyings_temporal = (const GLchar* const *)((intptr_t)(get_memory()) + (intptr_t)(varyings_data[0]));auto varyings_ptr = (const GLchar* const *)&varyings_temporal;
	
	glTransformFeedbackVaryings((GLuint)program, (GLsizei)count, varyings_ptr, (GLenum)bufferMode);

}

template <typename... Args>
static void _glGetTransformFeedbackVarying(std::tuple<Args...> args) {
	float program = std::get<0>(args);float index = std::get<1>(args);float bufSize = std::get<2>(args);float length = std::get<3>(args);float size = std::get<4>(args);float type = std::get<5>(args);float name = std::get<6>(args);
	auto length_memory = static_cast<int>(length);auto length_ptr = (intptr_t)(length_memory) == 0 ? nullptr : (GLsizei *)((intptr_t)(get_memory()) + (intptr_t)(length_memory));
	auto size_memory = static_cast<int>(size);auto size_ptr = (intptr_t)(size_memory) == 0 ? nullptr : (GLsizei *)((intptr_t)(get_memory()) + (intptr_t)(size_memory));
	auto type_memory = static_cast<int>(type);auto type_ptr = (intptr_t)(type_memory) == 0 ? nullptr : (GLenum *)((intptr_t)(get_memory()) + (intptr_t)(type_memory));
	auto name_memory = static_cast<int>(name);auto name_ptr = (intptr_t)(name_memory) == 0 ? nullptr : (GLchar *)((intptr_t)(get_memory()) + (intptr_t)(name_memory));
	
	glGetTransformFeedbackVarying((GLuint)program, (GLuint)index, (GLsizei)bufSize, length_ptr, size_ptr, type_ptr, name_ptr);

}

template <typename... Args>
static void _glClampColor(std::tuple<Args...> args) {
	float target = std::get<0>(args);float clamp = std::get<1>(args);
	
	glClampColor((GLenum)target, (GLenum)clamp);

}

template <typename... Args>
static void _glBeginConditionalRender(std::tuple<Args...> args) {
	float id = std::get<0>(args);float mode = std::get<1>(args);
	
	glBeginConditionalRender((GLuint)id, (GLenum)mode);

}

static void _glEndConditionalRender() {
	
	
	glEndConditionalRender();

}

template <typename... Args>
static void _glVertexAttribIPointer(std::tuple<Args...> args) {
	float index = std::get<0>(args);float size = std::get<1>(args);float type = std::get<2>(args);float stride = std::get<3>(args);float pointer = std::get<4>(args);
	auto pointer_memory = static_cast<int>(pointer);auto pointer_ptr = (intptr_t)(pointer_memory) == 0 ? nullptr : (const GLvoid *)((intptr_t)(get_memory()) + (intptr_t)(pointer_memory));
	
	glVertexAttribIPointer((GLuint)index, (GLint)size, (GLenum)type, (GLsizei)stride, pointer_ptr);

}

template <typename... Args>
static void _glGetVertexAttribIiv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float pname = std::get<1>(args);float params = std::get<2>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLint *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetVertexAttribIiv((GLuint)index, (GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glGetVertexAttribIuiv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float pname = std::get<1>(args);float params = std::get<2>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLuint *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetVertexAttribIuiv((GLuint)index, (GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glVertexAttribI1i(std::tuple<Args...> args) {
	float index = std::get<0>(args);float x = std::get<1>(args);
	
	glVertexAttribI1i((GLuint)index, (GLint)x);

}

template <typename... Args>
static void _glVertexAttribI2i(std::tuple<Args...> args) {
	float index = std::get<0>(args);float x = std::get<1>(args);float y = std::get<2>(args);
	
	glVertexAttribI2i((GLuint)index, (GLint)x, (GLint)y);

}

template <typename... Args>
static void _glVertexAttribI3i(std::tuple<Args...> args) {
	float index = std::get<0>(args);float x = std::get<1>(args);float y = std::get<2>(args);float z = std::get<3>(args);
	
	glVertexAttribI3i((GLuint)index, (GLint)x, (GLint)y, (GLint)z);

}

template <typename... Args>
static void _glVertexAttribI4i(std::tuple<Args...> args) {
	float index = std::get<0>(args);float x = std::get<1>(args);float y = std::get<2>(args);float z = std::get<3>(args);float w = std::get<4>(args);
	
	glVertexAttribI4i((GLuint)index, (GLint)x, (GLint)y, (GLint)z, (GLint)w);

}

template <typename... Args>
static void _glVertexAttribI1ui(std::tuple<Args...> args) {
	float index = std::get<0>(args);float x = std::get<1>(args);
	
	glVertexAttribI1ui((GLuint)index, (GLuint)x);

}

template <typename... Args>
static void _glVertexAttribI2ui(std::tuple<Args...> args) {
	float index = std::get<0>(args);float x = std::get<1>(args);float y = std::get<2>(args);
	
	glVertexAttribI2ui((GLuint)index, (GLuint)x, (GLuint)y);

}

template <typename... Args>
static void _glVertexAttribI3ui(std::tuple<Args...> args) {
	float index = std::get<0>(args);float x = std::get<1>(args);float y = std::get<2>(args);float z = std::get<3>(args);
	
	glVertexAttribI3ui((GLuint)index, (GLuint)x, (GLuint)y, (GLuint)z);

}

template <typename... Args>
static void _glVertexAttribI4ui(std::tuple<Args...> args) {
	float index = std::get<0>(args);float x = std::get<1>(args);float y = std::get<2>(args);float z = std::get<3>(args);float w = std::get<4>(args);
	
	glVertexAttribI4ui((GLuint)index, (GLuint)x, (GLuint)y, (GLuint)z, (GLuint)w);

}

template <typename... Args>
static void _glVertexAttribI1iv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLint *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttribI1iv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttribI2iv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLint *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttribI2iv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttribI3iv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLint *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttribI3iv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttribI4iv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLint *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttribI4iv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttribI1uiv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLuint *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttribI1uiv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttribI2uiv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLuint *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttribI2uiv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttribI3uiv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLuint *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttribI3uiv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttribI4uiv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLuint *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttribI4uiv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttribI4bv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLbyte *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttribI4bv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttribI4sv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLshort *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttribI4sv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttribI4ubv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLubyte *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttribI4ubv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttribI4usv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLushort *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttribI4usv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glGetUniformuiv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float params = std::get<2>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLuint *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetUniformuiv((GLuint)program, (GLint)location, params_ptr);

}

template <typename... Args>
static void _glBindFragDataLocation(std::tuple<Args...> args) {
	float program = std::get<0>(args);float color = std::get<1>(args);float name = std::get<2>(args);
	auto name_memory = static_cast<int>(name);auto name_ptr = (intptr_t)(name_memory) == 0 ? nullptr : (const GLchar *)((intptr_t)(get_memory()) + (intptr_t)(name_memory));
	
	glBindFragDataLocation((GLuint)program, (GLuint)color, name_ptr);

}

template <typename... Args>
static int _glGetFragDataLocation(std::tuple<Args...> args) {
	float program = std::get<0>(args);float name = std::get<1>(args);
	auto name_memory = static_cast<int>(name);auto name_ptr = (intptr_t)(name_memory) == 0 ? nullptr : (const GLchar *)((intptr_t)(get_memory()) + (intptr_t)(name_memory));
	
	return (int)(glGetFragDataLocation((GLuint)program, name_ptr));

}

template <typename... Args>
static void _glUniform1ui(std::tuple<Args...> args) {
	float location = std::get<0>(args);float v0 = std::get<1>(args);
	
	glUniform1ui((GLint)location, (GLuint)v0);

}

template <typename... Args>
static void _glUniform2ui(std::tuple<Args...> args) {
	float location = std::get<0>(args);float v0 = std::get<1>(args);float v1 = std::get<2>(args);
	
	glUniform2ui((GLint)location, (GLuint)v0, (GLuint)v1);

}

template <typename... Args>
static void _glUniform3ui(std::tuple<Args...> args) {
	float location = std::get<0>(args);float v0 = std::get<1>(args);float v1 = std::get<2>(args);float v2 = std::get<3>(args);
	
	glUniform3ui((GLint)location, (GLuint)v0, (GLuint)v1, (GLuint)v2);

}

template <typename... Args>
static void _glUniform4ui(std::tuple<Args...> args) {
	float location = std::get<0>(args);float v0 = std::get<1>(args);float v1 = std::get<2>(args);float v2 = std::get<3>(args);float v3 = std::get<4>(args);
	
	glUniform4ui((GLint)location, (GLuint)v0, (GLuint)v1, (GLuint)v2, (GLuint)v3);

}

template <typename... Args>
static void _glUniform1uiv(std::tuple<Args...> args) {
	float location = std::get<0>(args);float count = std::get<1>(args);float value = std::get<2>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLuint *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glUniform1uiv((GLint)location, (GLsizei)count, value_ptr);

}

template <typename... Args>
static void _glUniform2uiv(std::tuple<Args...> args) {
	float location = std::get<0>(args);float count = std::get<1>(args);float value = std::get<2>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLuint *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glUniform2uiv((GLint)location, (GLsizei)count, value_ptr);

}

template <typename... Args>
static void _glUniform3uiv(std::tuple<Args...> args) {
	float location = std::get<0>(args);float count = std::get<1>(args);float value = std::get<2>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLuint *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glUniform3uiv((GLint)location, (GLsizei)count, value_ptr);

}

template <typename... Args>
static void _glUniform4uiv(std::tuple<Args...> args) {
	float location = std::get<0>(args);float count = std::get<1>(args);float value = std::get<2>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLuint *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glUniform4uiv((GLint)location, (GLsizei)count, value_ptr);

}

template <typename... Args>
static void _glTexParameterIiv(std::tuple<Args...> args) {
	float target = std::get<0>(args);float pname = std::get<1>(args);float params = std::get<2>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (const GLint *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glTexParameterIiv((GLenum)target, (GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glTexParameterIuiv(std::tuple<Args...> args) {
	float target = std::get<0>(args);float pname = std::get<1>(args);float params = std::get<2>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (const GLuint *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glTexParameterIuiv((GLenum)target, (GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glGetTexParameterIiv(std::tuple<Args...> args) {
	float target = std::get<0>(args);float pname = std::get<1>(args);float params = std::get<2>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLint *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetTexParameterIiv((GLenum)target, (GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glGetTexParameterIuiv(std::tuple<Args...> args) {
	float target = std::get<0>(args);float pname = std::get<1>(args);float params = std::get<2>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLuint *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetTexParameterIuiv((GLenum)target, (GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glClearBufferiv(std::tuple<Args...> args) {
	float buffer = std::get<0>(args);float drawbuffer = std::get<1>(args);float value = std::get<2>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLint *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glClearBufferiv((GLenum)buffer, (GLint)drawbuffer, value_ptr);

}

template <typename... Args>
static void _glClearBufferuiv(std::tuple<Args...> args) {
	float buffer = std::get<0>(args);float drawbuffer = std::get<1>(args);float value = std::get<2>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLuint *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glClearBufferuiv((GLenum)buffer, (GLint)drawbuffer, value_ptr);

}

template <typename... Args>
static void _glClearBufferfv(std::tuple<Args...> args) {
	float buffer = std::get<0>(args);float drawbuffer = std::get<1>(args);float value = std::get<2>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glClearBufferfv((GLenum)buffer, (GLint)drawbuffer, value_ptr);

}

template <typename... Args>
static void _glClearBufferfi(std::tuple<Args...> args) {
	float buffer = std::get<0>(args);float drawbuffer = std::get<1>(args);float depth = std::get<2>(args);float stencil = std::get<3>(args);
	
	glClearBufferfi((GLenum)buffer, (GLint)drawbuffer, (GLfloat)depth, (GLint)stencil);

}

template <typename... Args>
static int _glGetStringi(std::tuple<Args...> args) {
float name = std::get<0>(args);float index = std::get<1>(args);
	
	
	const char* result = reinterpret_cast<const char*>(glGetStringi(name, index));
	std::string str(result);
	size_t data_length = str.length();
	void* memory_ptr = allocate(data_length + 1); // +1 for null terminator
	memcpy((void*)((intptr_t)get_memory() + (intptr_t)memory_ptr), str.c_str(), str.size());
	return reinterpret_cast<ptrdiff_t>(memory_ptr);

}

template <typename... Args>
static void _glDrawArraysInstanced(std::tuple<Args...> args) {
	float mode = std::get<0>(args);float first = std::get<1>(args);float count = std::get<2>(args);float instancecount = std::get<3>(args);
	
	glDrawArraysInstanced((GLenum)mode, (GLint)first, (GLsizei)count, (GLsizei)instancecount);

}

template <typename... Args>
static void _glDrawElementsInstanced(std::tuple<Args...> args) {
	float mode = std::get<0>(args);float count = std::get<1>(args);float type = std::get<2>(args);float indices = std::get<3>(args);float instancecount = std::get<4>(args);
	auto indices_memory = static_cast<int>(indices);auto indices_ptr = (intptr_t)(indices_memory) == 0 ? nullptr : (const GLvoid *)((intptr_t)(get_memory()) + (intptr_t)(indices_memory));
	
	glDrawElementsInstanced((GLenum)mode, (GLsizei)count, (GLenum)type, indices_ptr, (GLsizei)instancecount);

}

template <typename... Args>
static void _glTexBuffer(std::tuple<Args...> args) {
	float target = std::get<0>(args);float internalformat = std::get<1>(args);float buffer = std::get<2>(args);
	
	glTexBuffer((GLenum)target, (GLenum)internalformat, (GLuint)buffer);

}

template <typename... Args>
static void _glPrimitiveRestartIndex(std::tuple<Args...> args) {
	float index = std::get<0>(args);
	
	glPrimitiveRestartIndex((GLuint)index);

}

template <typename... Args>
static void _glGetInteger64i_v(std::tuple<Args...> args) {
	float target = std::get<0>(args);float index = std::get<1>(args);float data = std::get<2>(args);
	auto data_memory = static_cast<int>(data);auto data_ptr = (intptr_t)(data_memory) == 0 ? nullptr : (GLint64 *)((intptr_t)(get_memory()) + (intptr_t)(data_memory));
	
	glGetInteger64i_v((GLenum)target, (GLuint)index, data_ptr);

}

template <typename... Args>
static void _glGetBufferParameteri64v(std::tuple<Args...> args) {
	float target = std::get<0>(args);float pname = std::get<1>(args);float params = std::get<2>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLint64 *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetBufferParameteri64v((GLenum)target, (GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glFramebufferTexture(std::tuple<Args...> args) {
	float target = std::get<0>(args);float attachment = std::get<1>(args);float texture = std::get<2>(args);float level = std::get<3>(args);
	
	glFramebufferTexture((GLenum)target, (GLenum)attachment, (GLuint)texture, (GLint)level);

}

template <typename... Args>
static void _glVertexAttribDivisor(std::tuple<Args...> args) {
	float index = std::get<0>(args);float divisor = std::get<1>(args);
	
	glVertexAttribDivisor((GLuint)index, (GLuint)divisor);

}

template <typename... Args>
static void _glMinSampleShading(std::tuple<Args...> args) {
	float value = std::get<0>(args);
	
	glMinSampleShading((GLfloat)value);

}

template <typename... Args>
static void _glBlendEquationi(std::tuple<Args...> args) {
	float buf = std::get<0>(args);float mode = std::get<1>(args);
	
	glBlendEquationi((GLuint)buf, (GLenum)mode);

}

template <typename... Args>
static void _glBlendEquationSeparatei(std::tuple<Args...> args) {
	float buf = std::get<0>(args);float modeRGB = std::get<1>(args);float modeAlpha = std::get<2>(args);
	
	glBlendEquationSeparatei((GLuint)buf, (GLenum)modeRGB, (GLenum)modeAlpha);

}

template <typename... Args>
static void _glBlendFunci(std::tuple<Args...> args) {
	float buf = std::get<0>(args);float src = std::get<1>(args);float dst = std::get<2>(args);
	
	glBlendFunci((GLuint)buf, (GLenum)src, (GLenum)dst);

}

template <typename... Args>
static void _glBlendFuncSeparatei(std::tuple<Args...> args) {
	float buf = std::get<0>(args);float srcRGB = std::get<1>(args);float dstRGB = std::get<2>(args);float srcAlpha = std::get<3>(args);float dstAlpha = std::get<4>(args);
	
	glBlendFuncSeparatei((GLuint)buf, (GLenum)srcRGB, (GLenum)dstRGB, (GLenum)srcAlpha, (GLenum)dstAlpha);

}

template <typename... Args>
static int _glIsRenderbuffer(std::tuple<Args...> args) {
	float renderbuffer = std::get<0>(args);
	
	return (int)(glIsRenderbuffer((GLuint)renderbuffer));

}

template <typename... Args>
static void _glBindRenderbuffer(std::tuple<Args...> args) {
	float target = std::get<0>(args);float renderbuffer = std::get<1>(args);
	
	glBindRenderbuffer((GLenum)target, (GLuint)renderbuffer);

}

template <typename... Args>
static void _glDeleteRenderbuffers(std::tuple<Args...> args) {
	float n = std::get<0>(args);float renderbuffers = std::get<1>(args);
	auto renderbuffers_memory = static_cast<int>(renderbuffers);auto renderbuffers_ptr = (intptr_t)(renderbuffers_memory) == 0 ? nullptr : (const GLuint *)((intptr_t)(get_memory()) + (intptr_t)(renderbuffers_memory));
	
	glDeleteRenderbuffers((GLsizei)n, renderbuffers_ptr);

}

template <typename... Args>
static void _glGenRenderbuffers(std::tuple<Args...> args) {
	float n = std::get<0>(args);float renderbuffers = std::get<1>(args);
	auto renderbuffers_memory = static_cast<int>(renderbuffers);auto renderbuffers_ptr = (intptr_t)(renderbuffers_memory) == 0 ? nullptr : (GLuint *)((intptr_t)(get_memory()) + (intptr_t)(renderbuffers_memory));
	
	glGenRenderbuffers((GLsizei)n, renderbuffers_ptr);

}

template <typename... Args>
static void _glRenderbufferStorage(std::tuple<Args...> args) {
	float target = std::get<0>(args);float internalformat = std::get<1>(args);float width = std::get<2>(args);float height = std::get<3>(args);
	
	glRenderbufferStorage((GLenum)target, (GLenum)internalformat, (GLsizei)width, (GLsizei)height);

}

template <typename... Args>
static void _glGetRenderbufferParameteriv(std::tuple<Args...> args) {
	float target = std::get<0>(args);float pname = std::get<1>(args);float params = std::get<2>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLint *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetRenderbufferParameteriv((GLenum)target, (GLenum)pname, params_ptr);

}

template <typename... Args>
static int _glIsFramebuffer(std::tuple<Args...> args) {
	float framebuffer = std::get<0>(args);
	
	return (int)(glIsFramebuffer((GLuint)framebuffer));

}

template <typename... Args>
static void _glBindFramebuffer(std::tuple<Args...> args) {
	float target = std::get<0>(args);float framebuffer = std::get<1>(args);
	
	glBindFramebuffer((GLenum)target, (GLuint)framebuffer);

}

template <typename... Args>
static void _glDeleteFramebuffers(std::tuple<Args...> args) {
	float n = std::get<0>(args);float framebuffers = std::get<1>(args);
	auto framebuffers_memory = static_cast<int>(framebuffers);auto framebuffers_ptr = (intptr_t)(framebuffers_memory) == 0 ? nullptr : (const GLuint *)((intptr_t)(get_memory()) + (intptr_t)(framebuffers_memory));
	
	glDeleteFramebuffers((GLsizei)n, framebuffers_ptr);

}

template <typename... Args>
static void _glGenFramebuffers(std::tuple<Args...> args) {
	float n = std::get<0>(args);float framebuffers = std::get<1>(args);
	auto framebuffers_memory = static_cast<int>(framebuffers);auto framebuffers_ptr = (intptr_t)(framebuffers_memory) == 0 ? nullptr : (GLuint *)((intptr_t)(get_memory()) + (intptr_t)(framebuffers_memory));
	
	glGenFramebuffers((GLsizei)n, framebuffers_ptr);

}

template <typename... Args>
static int _glCheckFramebufferStatus(std::tuple<Args...> args) {
	float target = std::get<0>(args);
	
	return (int)(glCheckFramebufferStatus((GLenum)target));

}

template <typename... Args>
static void _glFramebufferTexture1D(std::tuple<Args...> args) {
	float target = std::get<0>(args);float attachment = std::get<1>(args);float textarget = std::get<2>(args);float texture = std::get<3>(args);float level = std::get<4>(args);
	
	glFramebufferTexture1D((GLenum)target, (GLenum)attachment, (GLenum)textarget, (GLuint)texture, (GLint)level);

}

template <typename... Args>
static void _glFramebufferTexture2D(std::tuple<Args...> args) {
	float target = std::get<0>(args);float attachment = std::get<1>(args);float textarget = std::get<2>(args);float texture = std::get<3>(args);float level = std::get<4>(args);
	
	glFramebufferTexture2D((GLenum)target, (GLenum)attachment, (GLenum)textarget, (GLuint)texture, (GLint)level);

}

template <typename... Args>
static void _glFramebufferTexture3D(std::tuple<Args...> args) {
	float target = std::get<0>(args);float attachment = std::get<1>(args);float textarget = std::get<2>(args);float texture = std::get<3>(args);float level = std::get<4>(args);float zoffset = std::get<5>(args);
	
	glFramebufferTexture3D((GLenum)target, (GLenum)attachment, (GLenum)textarget, (GLuint)texture, (GLint)level, (GLint)zoffset);

}

template <typename... Args>
static void _glFramebufferRenderbuffer(std::tuple<Args...> args) {
	float target = std::get<0>(args);float attachment = std::get<1>(args);float renderbuffertarget = std::get<2>(args);float renderbuffer = std::get<3>(args);
	
	glFramebufferRenderbuffer((GLenum)target, (GLenum)attachment, (GLenum)renderbuffertarget, (GLuint)renderbuffer);

}

template <typename... Args>
static void _glGetFramebufferAttachmentParameteriv(std::tuple<Args...> args) {
	float target = std::get<0>(args);float attachment = std::get<1>(args);float pname = std::get<2>(args);float params = std::get<3>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLint *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetFramebufferAttachmentParameteriv((GLenum)target, (GLenum)attachment, (GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glGenerateMipmap(std::tuple<Args...> args) {
	float target = std::get<0>(args);
	
	glGenerateMipmap((GLenum)target);

}

template <typename... Args>
static void _glBlitFramebuffer(std::tuple<Args...> args) {
	float srcX0 = std::get<0>(args);float srcY0 = std::get<1>(args);float srcX1 = std::get<2>(args);float srcY1 = std::get<3>(args);float dstX0 = std::get<4>(args);float dstY0 = std::get<5>(args);float dstX1 = std::get<6>(args);float dstY1 = std::get<7>(args);float mask = std::get<8>(args);float filter = std::get<9>(args);
	
	glBlitFramebuffer((GLint)srcX0, (GLint)srcY0, (GLint)srcX1, (GLint)srcY1, (GLint)dstX0, (GLint)dstY0, (GLint)dstX1, (GLint)dstY1, (GLbitfield)mask, (GLenum)filter);

}

template <typename... Args>
static void _glRenderbufferStorageMultisample(std::tuple<Args...> args) {
	float target = std::get<0>(args);float samples = std::get<1>(args);float internalformat = std::get<2>(args);float width = std::get<3>(args);float height = std::get<4>(args);
	
	glRenderbufferStorageMultisample((GLenum)target, (GLsizei)samples, (GLenum)internalformat, (GLsizei)width, (GLsizei)height);

}

template <typename... Args>
static void _glFramebufferTextureLayer(std::tuple<Args...> args) {
	float target = std::get<0>(args);float attachment = std::get<1>(args);float texture = std::get<2>(args);float level = std::get<3>(args);float layer = std::get<4>(args);
	
	glFramebufferTextureLayer((GLenum)target, (GLenum)attachment, (GLuint)texture, (GLint)level, (GLint)layer);

}

template <typename... Args>
static int _glMapBufferRange(std::tuple<Args...> args) {
float target = std::get<0>(args);float offset = std::get<1>(args);float length = std::get<2>(args);float access = std::get<3>(args);
	
	
	const char* result = reinterpret_cast<const char*>(glMapBufferRange(target, offset, length, access));
	std::string str(result);
	size_t data_length = str.length();
	void* memory_ptr = allocate(data_length + 1); // +1 for null terminator
	memcpy((void*)((intptr_t)get_memory() + (intptr_t)memory_ptr), str.c_str(), str.size());
	return reinterpret_cast<ptrdiff_t>(memory_ptr);

}

template <typename... Args>
static void _glFlushMappedBufferRange(std::tuple<Args...> args) {
	float target = std::get<0>(args);float offset = std::get<1>(args);float length = std::get<2>(args);
	
	glFlushMappedBufferRange((GLenum)target, (GLintptr)offset, (GLsizeiptr)length);

}

template <typename... Args>
static void _glBindVertexArray(std::tuple<Args...> args) {
	float array = std::get<0>(args);
	
	glBindVertexArray((GLuint)array);

}

template <typename... Args>
static void _glDeleteVertexArrays(std::tuple<Args...> args) {
	float n = std::get<0>(args);float arrays = std::get<1>(args);
	auto arrays_memory = static_cast<int>(arrays);auto arrays_ptr = (intptr_t)(arrays_memory) == 0 ? nullptr : (const GLuint *)((intptr_t)(get_memory()) + (intptr_t)(arrays_memory));
	
	glDeleteVertexArrays((GLsizei)n, arrays_ptr);

}

template <typename... Args>
static void _glGenVertexArrays(std::tuple<Args...> args) {
	float n = std::get<0>(args);float arrays = std::get<1>(args);
	auto arrays_memory = static_cast<int>(arrays);auto arrays_ptr = (intptr_t)(arrays_memory) == 0 ? nullptr : (GLuint *)((intptr_t)(get_memory()) + (intptr_t)(arrays_memory));
	
	glGenVertexArrays((GLsizei)n, arrays_ptr);

}

template <typename... Args>
static int _glIsVertexArray(std::tuple<Args...> args) {
	float array = std::get<0>(args);
	
	return (int)(glIsVertexArray((GLuint)array));

}

template <typename... Args>
static void _glGetUniformIndices(std::tuple<Args...> args) {
	float program = std::get<0>(args);float uniformCount = std::get<1>(args);float uniformNames = std::get<2>(args);float uniformIndices = std::get<3>(args);
	auto uniformNames_memory = static_cast<int>(uniformNames);auto uniformNames_data = (int*)((intptr_t)(get_memory()) + (intptr_t)(uniformNames_memory));auto uniformNames_temporal = (const GLchar* const *)((intptr_t)(get_memory()) + (intptr_t)(uniformNames_data[0]));auto uniformNames_ptr = (const GLchar* const *)&uniformNames_temporal;
	auto uniformIndices_memory = static_cast<int>(uniformIndices);auto uniformIndices_ptr = (intptr_t)(uniformIndices_memory) == 0 ? nullptr : (GLuint *)((intptr_t)(get_memory()) + (intptr_t)(uniformIndices_memory));
	
	glGetUniformIndices((GLuint)program, (GLsizei)uniformCount, uniformNames_ptr, uniformIndices_ptr);

}

template <typename... Args>
static void _glGetActiveUniformsiv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float uniformCount = std::get<1>(args);float uniformIndices = std::get<2>(args);float pname = std::get<3>(args);float params = std::get<4>(args);
	auto uniformIndices_memory = static_cast<int>(uniformIndices);auto uniformIndices_ptr = (intptr_t)(uniformIndices_memory) == 0 ? nullptr : (const GLuint *)((intptr_t)(get_memory()) + (intptr_t)(uniformIndices_memory));
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLint *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetActiveUniformsiv((GLuint)program, (GLsizei)uniformCount, uniformIndices_ptr, (GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glGetActiveUniformName(std::tuple<Args...> args) {
	float program = std::get<0>(args);float uniformIndex = std::get<1>(args);float bufSize = std::get<2>(args);float length = std::get<3>(args);float uniformName = std::get<4>(args);
	auto length_memory = static_cast<int>(length);auto length_ptr = (intptr_t)(length_memory) == 0 ? nullptr : (GLsizei *)((intptr_t)(get_memory()) + (intptr_t)(length_memory));
	auto uniformName_memory = static_cast<int>(uniformName);auto uniformName_ptr = (intptr_t)(uniformName_memory) == 0 ? nullptr : (GLchar *)((intptr_t)(get_memory()) + (intptr_t)(uniformName_memory));
	
	glGetActiveUniformName((GLuint)program, (GLuint)uniformIndex, (GLsizei)bufSize, length_ptr, uniformName_ptr);

}

template <typename... Args>
static int _glGetUniformBlockIndex(std::tuple<Args...> args) {
	float program = std::get<0>(args);float uniformBlockName = std::get<1>(args);
	auto uniformBlockName_memory = static_cast<int>(uniformBlockName);auto uniformBlockName_ptr = (intptr_t)(uniformBlockName_memory) == 0 ? nullptr : (const GLchar *)((intptr_t)(get_memory()) + (intptr_t)(uniformBlockName_memory));
	
	return (int)(glGetUniformBlockIndex((GLuint)program, uniformBlockName_ptr));

}

template <typename... Args>
static void _glGetActiveUniformBlockiv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float uniformBlockIndex = std::get<1>(args);float pname = std::get<2>(args);float params = std::get<3>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLint *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetActiveUniformBlockiv((GLuint)program, (GLuint)uniformBlockIndex, (GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glGetActiveUniformBlockName(std::tuple<Args...> args) {
	float program = std::get<0>(args);float uniformBlockIndex = std::get<1>(args);float bufSize = std::get<2>(args);float length = std::get<3>(args);float uniformBlockName = std::get<4>(args);
	auto length_memory = static_cast<int>(length);auto length_ptr = (intptr_t)(length_memory) == 0 ? nullptr : (GLsizei *)((intptr_t)(get_memory()) + (intptr_t)(length_memory));
	auto uniformBlockName_memory = static_cast<int>(uniformBlockName);auto uniformBlockName_ptr = (intptr_t)(uniformBlockName_memory) == 0 ? nullptr : (GLchar *)((intptr_t)(get_memory()) + (intptr_t)(uniformBlockName_memory));
	
	glGetActiveUniformBlockName((GLuint)program, (GLuint)uniformBlockIndex, (GLsizei)bufSize, length_ptr, uniformBlockName_ptr);

}

template <typename... Args>
static void _glUniformBlockBinding(std::tuple<Args...> args) {
	float program = std::get<0>(args);float uniformBlockIndex = std::get<1>(args);float uniformBlockBinding = std::get<2>(args);
	
	glUniformBlockBinding((GLuint)program, (GLuint)uniformBlockIndex, (GLuint)uniformBlockBinding);

}

template <typename... Args>
static void _glCopyBufferSubData(std::tuple<Args...> args) {
	float readTarget = std::get<0>(args);float writeTarget = std::get<1>(args);float readOffset = std::get<2>(args);float writeOffset = std::get<3>(args);float size = std::get<4>(args);
	
	glCopyBufferSubData((GLenum)readTarget, (GLenum)writeTarget, (GLintptr)readOffset, (GLintptr)writeOffset, (GLsizeiptr)size);

}

template <typename... Args>
static void _glDrawElementsBaseVertex(std::tuple<Args...> args) {
	float mode = std::get<0>(args);float count = std::get<1>(args);float type = std::get<2>(args);float indices = std::get<3>(args);float basevertex = std::get<4>(args);
	auto indices_memory = static_cast<int>(indices);auto indices_ptr = (intptr_t)(indices_memory) == 0 ? nullptr : (const GLvoid *)((intptr_t)(get_memory()) + (intptr_t)(indices_memory));
	
	glDrawElementsBaseVertex((GLenum)mode, (GLsizei)count, (GLenum)type, indices_ptr, (GLint)basevertex);

}

template <typename... Args>
static void _glDrawRangeElementsBaseVertex(std::tuple<Args...> args) {
	float mode = std::get<0>(args);float start = std::get<1>(args);float end = std::get<2>(args);float count = std::get<3>(args);float type = std::get<4>(args);float indices = std::get<5>(args);float basevertex = std::get<6>(args);
	auto indices_memory = static_cast<int>(indices);auto indices_ptr = (intptr_t)(indices_memory) == 0 ? nullptr : (const GLvoid *)((intptr_t)(get_memory()) + (intptr_t)(indices_memory));
	
	glDrawRangeElementsBaseVertex((GLenum)mode, (GLuint)start, (GLuint)end, (GLsizei)count, (GLenum)type, indices_ptr, (GLint)basevertex);

}

template <typename... Args>
static void _glDrawElementsInstancedBaseVertex(std::tuple<Args...> args) {
	float mode = std::get<0>(args);float count = std::get<1>(args);float type = std::get<2>(args);float indices = std::get<3>(args);float instancecount = std::get<4>(args);float basevertex = std::get<5>(args);
	auto indices_memory = static_cast<int>(indices);auto indices_ptr = (intptr_t)(indices_memory) == 0 ? nullptr : (const GLvoid *)((intptr_t)(get_memory()) + (intptr_t)(indices_memory));
	
	glDrawElementsInstancedBaseVertex((GLenum)mode, (GLsizei)count, (GLenum)type, indices_ptr, (GLsizei)instancecount, (GLint)basevertex);

}

template <typename... Args>
static void _glMultiDrawElementsBaseVertex(std::tuple<Args...> args) {
	float mode = std::get<0>(args);float count = std::get<1>(args);float type = std::get<2>(args);float indices = std::get<3>(args);float drawcount = std::get<4>(args);float basevertex = std::get<5>(args);
	auto count_memory = static_cast<int>(count);auto count_ptr = (intptr_t)(count_memory) == 0 ? nullptr : (const GLsizei *)((intptr_t)(get_memory()) + (intptr_t)(count_memory));
	auto indices_memory = static_cast<int>(indices);auto indices_data = (int*)((intptr_t)(get_memory()) + (intptr_t)(indices_memory));auto indices_temporal = (const GLvoid* const *)((intptr_t)(get_memory()) + (intptr_t)(indices_data[0]));auto indices_ptr = (const GLvoid* const *)&indices_temporal;
	auto basevertex_memory = static_cast<int>(basevertex);auto basevertex_ptr = (intptr_t)(basevertex_memory) == 0 ? nullptr : (const GLint *)((intptr_t)(get_memory()) + (intptr_t)(basevertex_memory));
	
	glMultiDrawElementsBaseVertex((GLenum)mode, count_ptr, (GLenum)type, indices_ptr, (GLsizei)drawcount, basevertex_ptr);

}

template <typename... Args>
static void _glProvokingVertex(std::tuple<Args...> args) {
	float mode = std::get<0>(args);
	
	glProvokingVertex((GLenum)mode);

}

template <typename... Args>
static void _glGetInteger64v(std::tuple<Args...> args) {
	float pname = std::get<0>(args);float params = std::get<1>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLint64 *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetInteger64v((GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glTexImage2DMultisample(std::tuple<Args...> args) {
	float target = std::get<0>(args);float samples = std::get<1>(args);float internalformat = std::get<2>(args);float width = std::get<3>(args);float height = std::get<4>(args);float fixedsamplelocations = std::get<5>(args);
	
	glTexImage2DMultisample((GLenum)target, (GLsizei)samples, (GLint)internalformat, (GLsizei)width, (GLsizei)height, (GLboolean)fixedsamplelocations);

}

template <typename... Args>
static void _glTexImage3DMultisample(std::tuple<Args...> args) {
	float target = std::get<0>(args);float samples = std::get<1>(args);float internalformat = std::get<2>(args);float width = std::get<3>(args);float height = std::get<4>(args);float depth = std::get<5>(args);float fixedsamplelocations = std::get<6>(args);
	
	glTexImage3DMultisample((GLenum)target, (GLsizei)samples, (GLint)internalformat, (GLsizei)width, (GLsizei)height, (GLsizei)depth, (GLboolean)fixedsamplelocations);

}

template <typename... Args>
static void _glGetMultisamplefv(std::tuple<Args...> args) {
	float pname = std::get<0>(args);float index = std::get<1>(args);float val = std::get<2>(args);
	auto val_memory = static_cast<int>(val);auto val_ptr = (intptr_t)(val_memory) == 0 ? nullptr : (GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(val_memory));
	
	glGetMultisamplefv((GLenum)pname, (GLuint)index, val_ptr);

}

template <typename... Args>
static void _glSampleMaski(std::tuple<Args...> args) {
	float index = std::get<0>(args);float mask = std::get<1>(args);
	
	glSampleMaski((GLuint)index, (GLbitfield)mask);

}

template <typename... Args>
static void _glBindFragDataLocationIndexed(std::tuple<Args...> args) {
	float program = std::get<0>(args);float colorNumber = std::get<1>(args);float index = std::get<2>(args);float name = std::get<3>(args);
	auto name_memory = static_cast<int>(name);auto name_ptr = (intptr_t)(name_memory) == 0 ? nullptr : (const GLchar *)((intptr_t)(get_memory()) + (intptr_t)(name_memory));
	
	glBindFragDataLocationIndexed((GLuint)program, (GLuint)colorNumber, (GLuint)index, name_ptr);

}

template <typename... Args>
static int _glGetFragDataIndex(std::tuple<Args...> args) {
	float program = std::get<0>(args);float name = std::get<1>(args);
	auto name_memory = static_cast<int>(name);auto name_ptr = (intptr_t)(name_memory) == 0 ? nullptr : (const GLchar *)((intptr_t)(get_memory()) + (intptr_t)(name_memory));
	
	return (int)(glGetFragDataIndex((GLuint)program, name_ptr));

}

template <typename... Args>
static void _glGenSamplers(std::tuple<Args...> args) {
	float count = std::get<0>(args);float samplers = std::get<1>(args);
	auto samplers_memory = static_cast<int>(samplers);auto samplers_ptr = (intptr_t)(samplers_memory) == 0 ? nullptr : (GLuint *)((intptr_t)(get_memory()) + (intptr_t)(samplers_memory));
	
	glGenSamplers((GLsizei)count, samplers_ptr);

}

template <typename... Args>
static void _glDeleteSamplers(std::tuple<Args...> args) {
	float count = std::get<0>(args);float samplers = std::get<1>(args);
	auto samplers_memory = static_cast<int>(samplers);auto samplers_ptr = (intptr_t)(samplers_memory) == 0 ? nullptr : (const GLuint *)((intptr_t)(get_memory()) + (intptr_t)(samplers_memory));
	
	glDeleteSamplers((GLsizei)count, samplers_ptr);

}

template <typename... Args>
static int _glIsSampler(std::tuple<Args...> args) {
	float sampler = std::get<0>(args);
	
	return (int)(glIsSampler((GLuint)sampler));

}

template <typename... Args>
static void _glBindSampler(std::tuple<Args...> args) {
	float unit = std::get<0>(args);float sampler = std::get<1>(args);
	
	glBindSampler((GLuint)unit, (GLuint)sampler);

}

template <typename... Args>
static void _glSamplerParameteri(std::tuple<Args...> args) {
	float sampler = std::get<0>(args);float pname = std::get<1>(args);float param = std::get<2>(args);
	
	glSamplerParameteri((GLuint)sampler, (GLenum)pname, (GLint)param);

}

template <typename... Args>
static void _glSamplerParameteriv(std::tuple<Args...> args) {
	float sampler = std::get<0>(args);float pname = std::get<1>(args);float param = std::get<2>(args);
	auto param_memory = static_cast<int>(param);auto param_ptr = (intptr_t)(param_memory) == 0 ? nullptr : (const GLint *)((intptr_t)(get_memory()) + (intptr_t)(param_memory));
	
	glSamplerParameteriv((GLuint)sampler, (GLenum)pname, param_ptr);

}

template <typename... Args>
static void _glSamplerParameterf(std::tuple<Args...> args) {
	float sampler = std::get<0>(args);float pname = std::get<1>(args);float param = std::get<2>(args);
	
	glSamplerParameterf((GLuint)sampler, (GLenum)pname, (GLfloat)param);

}

template <typename... Args>
static void _glSamplerParameterfv(std::tuple<Args...> args) {
	float sampler = std::get<0>(args);float pname = std::get<1>(args);float param = std::get<2>(args);
	auto param_memory = static_cast<int>(param);auto param_ptr = (intptr_t)(param_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(param_memory));
	
	glSamplerParameterfv((GLuint)sampler, (GLenum)pname, param_ptr);

}

template <typename... Args>
static void _glSamplerParameterIiv(std::tuple<Args...> args) {
	float sampler = std::get<0>(args);float pname = std::get<1>(args);float param = std::get<2>(args);
	auto param_memory = static_cast<int>(param);auto param_ptr = (intptr_t)(param_memory) == 0 ? nullptr : (const GLint *)((intptr_t)(get_memory()) + (intptr_t)(param_memory));
	
	glSamplerParameterIiv((GLuint)sampler, (GLenum)pname, param_ptr);

}

template <typename... Args>
static void _glSamplerParameterIuiv(std::tuple<Args...> args) {
	float sampler = std::get<0>(args);float pname = std::get<1>(args);float param = std::get<2>(args);
	auto param_memory = static_cast<int>(param);auto param_ptr = (intptr_t)(param_memory) == 0 ? nullptr : (const GLuint *)((intptr_t)(get_memory()) + (intptr_t)(param_memory));
	
	glSamplerParameterIuiv((GLuint)sampler, (GLenum)pname, param_ptr);

}

template <typename... Args>
static void _glGetSamplerParameteriv(std::tuple<Args...> args) {
	float sampler = std::get<0>(args);float pname = std::get<1>(args);float params = std::get<2>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLint *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetSamplerParameteriv((GLuint)sampler, (GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glGetSamplerParameterIiv(std::tuple<Args...> args) {
	float sampler = std::get<0>(args);float pname = std::get<1>(args);float params = std::get<2>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLint *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetSamplerParameterIiv((GLuint)sampler, (GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glGetSamplerParameterfv(std::tuple<Args...> args) {
	float sampler = std::get<0>(args);float pname = std::get<1>(args);float params = std::get<2>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetSamplerParameterfv((GLuint)sampler, (GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glGetSamplerParameterIuiv(std::tuple<Args...> args) {
	float sampler = std::get<0>(args);float pname = std::get<1>(args);float params = std::get<2>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLuint *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetSamplerParameterIuiv((GLuint)sampler, (GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glQueryCounter(std::tuple<Args...> args) {
	float id = std::get<0>(args);float target = std::get<1>(args);
	
	glQueryCounter((GLuint)id, (GLenum)target);

}

template <typename... Args>
static void _glGetQueryObjecti64v(std::tuple<Args...> args) {
	float id = std::get<0>(args);float pname = std::get<1>(args);float params = std::get<2>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLint64 *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetQueryObjecti64v((GLuint)id, (GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glGetQueryObjectui64v(std::tuple<Args...> args) {
	float id = std::get<0>(args);float pname = std::get<1>(args);float params = std::get<2>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLuint64 *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetQueryObjectui64v((GLuint)id, (GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glVertexAttribP1ui(std::tuple<Args...> args) {
	float index = std::get<0>(args);float type = std::get<1>(args);float normalized = std::get<2>(args);float value = std::get<3>(args);
	
	glVertexAttribP1ui((GLuint)index, (GLenum)type, (GLboolean)normalized, (GLuint)value);

}

template <typename... Args>
static void _glVertexAttribP1uiv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float type = std::get<1>(args);float normalized = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLuint *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glVertexAttribP1uiv((GLuint)index, (GLenum)type, (GLboolean)normalized, value_ptr);

}

template <typename... Args>
static void _glVertexAttribP2ui(std::tuple<Args...> args) {
	float index = std::get<0>(args);float type = std::get<1>(args);float normalized = std::get<2>(args);float value = std::get<3>(args);
	
	glVertexAttribP2ui((GLuint)index, (GLenum)type, (GLboolean)normalized, (GLuint)value);

}

template <typename... Args>
static void _glVertexAttribP2uiv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float type = std::get<1>(args);float normalized = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLuint *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glVertexAttribP2uiv((GLuint)index, (GLenum)type, (GLboolean)normalized, value_ptr);

}

template <typename... Args>
static void _glVertexAttribP3ui(std::tuple<Args...> args) {
	float index = std::get<0>(args);float type = std::get<1>(args);float normalized = std::get<2>(args);float value = std::get<3>(args);
	
	glVertexAttribP3ui((GLuint)index, (GLenum)type, (GLboolean)normalized, (GLuint)value);

}

template <typename... Args>
static void _glVertexAttribP3uiv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float type = std::get<1>(args);float normalized = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLuint *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glVertexAttribP3uiv((GLuint)index, (GLenum)type, (GLboolean)normalized, value_ptr);

}

template <typename... Args>
static void _glVertexAttribP4ui(std::tuple<Args...> args) {
	float index = std::get<0>(args);float type = std::get<1>(args);float normalized = std::get<2>(args);float value = std::get<3>(args);
	
	glVertexAttribP4ui((GLuint)index, (GLenum)type, (GLboolean)normalized, (GLuint)value);

}

template <typename... Args>
static void _glVertexAttribP4uiv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float type = std::get<1>(args);float normalized = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLuint *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glVertexAttribP4uiv((GLuint)index, (GLenum)type, (GLboolean)normalized, value_ptr);

}

template <typename... Args>
static void _glDrawArraysIndirect(std::tuple<Args...> args) {
	float mode = std::get<0>(args);float indirect = std::get<1>(args);
	auto indirect_memory = static_cast<int>(indirect);auto indirect_ptr = (intptr_t)(indirect_memory) == 0 ? nullptr : (const GLvoid *)((intptr_t)(get_memory()) + (intptr_t)(indirect_memory));
	
	glDrawArraysIndirect((GLenum)mode, indirect_ptr);

}

template <typename... Args>
static void _glDrawElementsIndirect(std::tuple<Args...> args) {
	float mode = std::get<0>(args);float type = std::get<1>(args);float indirect = std::get<2>(args);
	auto indirect_memory = static_cast<int>(indirect);auto indirect_ptr = (intptr_t)(indirect_memory) == 0 ? nullptr : (const GLvoid *)((intptr_t)(get_memory()) + (intptr_t)(indirect_memory));
	
	glDrawElementsIndirect((GLenum)mode, (GLenum)type, indirect_ptr);

}

template <typename... Args>
static void _glUniform1d(std::tuple<Args...> args) {
	float location = std::get<0>(args);float x = std::get<1>(args);
	
	glUniform1d((GLint)location, (GLdouble)x);

}

template <typename... Args>
static void _glUniform2d(std::tuple<Args...> args) {
	float location = std::get<0>(args);float x = std::get<1>(args);float y = std::get<2>(args);
	
	glUniform2d((GLint)location, (GLdouble)x, (GLdouble)y);

}

template <typename... Args>
static void _glUniform3d(std::tuple<Args...> args) {
	float location = std::get<0>(args);float x = std::get<1>(args);float y = std::get<2>(args);float z = std::get<3>(args);
	
	glUniform3d((GLint)location, (GLdouble)x, (GLdouble)y, (GLdouble)z);

}

template <typename... Args>
static void _glUniform4d(std::tuple<Args...> args) {
	float location = std::get<0>(args);float x = std::get<1>(args);float y = std::get<2>(args);float z = std::get<3>(args);float w = std::get<4>(args);
	
	glUniform4d((GLint)location, (GLdouble)x, (GLdouble)y, (GLdouble)z, (GLdouble)w);

}

template <typename... Args>
static void _glUniform1dv(std::tuple<Args...> args) {
	float location = std::get<0>(args);float count = std::get<1>(args);float value = std::get<2>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glUniform1dv((GLint)location, (GLsizei)count, value_ptr);

}

template <typename... Args>
static void _glUniform2dv(std::tuple<Args...> args) {
	float location = std::get<0>(args);float count = std::get<1>(args);float value = std::get<2>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glUniform2dv((GLint)location, (GLsizei)count, value_ptr);

}

template <typename... Args>
static void _glUniform3dv(std::tuple<Args...> args) {
	float location = std::get<0>(args);float count = std::get<1>(args);float value = std::get<2>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glUniform3dv((GLint)location, (GLsizei)count, value_ptr);

}

template <typename... Args>
static void _glUniform4dv(std::tuple<Args...> args) {
	float location = std::get<0>(args);float count = std::get<1>(args);float value = std::get<2>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glUniform4dv((GLint)location, (GLsizei)count, value_ptr);

}

template <typename... Args>
static void _glUniformMatrix2dv(std::tuple<Args...> args) {
	float location = std::get<0>(args);float count = std::get<1>(args);float transpose = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glUniformMatrix2dv((GLint)location, (GLsizei)count, (GLboolean)transpose, value_ptr);

}

template <typename... Args>
static void _glUniformMatrix3dv(std::tuple<Args...> args) {
	float location = std::get<0>(args);float count = std::get<1>(args);float transpose = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glUniformMatrix3dv((GLint)location, (GLsizei)count, (GLboolean)transpose, value_ptr);

}

template <typename... Args>
static void _glUniformMatrix4dv(std::tuple<Args...> args) {
	float location = std::get<0>(args);float count = std::get<1>(args);float transpose = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glUniformMatrix4dv((GLint)location, (GLsizei)count, (GLboolean)transpose, value_ptr);

}

template <typename... Args>
static void _glUniformMatrix2x3dv(std::tuple<Args...> args) {
	float location = std::get<0>(args);float count = std::get<1>(args);float transpose = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glUniformMatrix2x3dv((GLint)location, (GLsizei)count, (GLboolean)transpose, value_ptr);

}

template <typename... Args>
static void _glUniformMatrix2x4dv(std::tuple<Args...> args) {
	float location = std::get<0>(args);float count = std::get<1>(args);float transpose = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glUniformMatrix2x4dv((GLint)location, (GLsizei)count, (GLboolean)transpose, value_ptr);

}

template <typename... Args>
static void _glUniformMatrix3x2dv(std::tuple<Args...> args) {
	float location = std::get<0>(args);float count = std::get<1>(args);float transpose = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glUniformMatrix3x2dv((GLint)location, (GLsizei)count, (GLboolean)transpose, value_ptr);

}

template <typename... Args>
static void _glUniformMatrix3x4dv(std::tuple<Args...> args) {
	float location = std::get<0>(args);float count = std::get<1>(args);float transpose = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glUniformMatrix3x4dv((GLint)location, (GLsizei)count, (GLboolean)transpose, value_ptr);

}

template <typename... Args>
static void _glUniformMatrix4x2dv(std::tuple<Args...> args) {
	float location = std::get<0>(args);float count = std::get<1>(args);float transpose = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glUniformMatrix4x2dv((GLint)location, (GLsizei)count, (GLboolean)transpose, value_ptr);

}

template <typename... Args>
static void _glUniformMatrix4x3dv(std::tuple<Args...> args) {
	float location = std::get<0>(args);float count = std::get<1>(args);float transpose = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glUniformMatrix4x3dv((GLint)location, (GLsizei)count, (GLboolean)transpose, value_ptr);

}

template <typename... Args>
static void _glGetUniformdv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float params = std::get<2>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetUniformdv((GLuint)program, (GLint)location, params_ptr);

}

template <typename... Args>
static int _glGetSubroutineUniformLocation(std::tuple<Args...> args) {
	float program = std::get<0>(args);float shadertype = std::get<1>(args);float name = std::get<2>(args);
	auto name_memory = static_cast<int>(name);auto name_ptr = (intptr_t)(name_memory) == 0 ? nullptr : (const GLchar *)((intptr_t)(get_memory()) + (intptr_t)(name_memory));
	
	return (int)(glGetSubroutineUniformLocation((GLuint)program, (GLenum)shadertype, name_ptr));

}

template <typename... Args>
static int _glGetSubroutineIndex(std::tuple<Args...> args) {
	float program = std::get<0>(args);float shadertype = std::get<1>(args);float name = std::get<2>(args);
	auto name_memory = static_cast<int>(name);auto name_ptr = (intptr_t)(name_memory) == 0 ? nullptr : (const GLchar *)((intptr_t)(get_memory()) + (intptr_t)(name_memory));
	
	return (int)(glGetSubroutineIndex((GLuint)program, (GLenum)shadertype, name_ptr));

}

template <typename... Args>
static void _glGetActiveSubroutineUniformiv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float shadertype = std::get<1>(args);float index = std::get<2>(args);float pname = std::get<3>(args);float values = std::get<4>(args);
	auto values_memory = static_cast<int>(values);auto values_ptr = (intptr_t)(values_memory) == 0 ? nullptr : (GLint *)((intptr_t)(get_memory()) + (intptr_t)(values_memory));
	
	glGetActiveSubroutineUniformiv((GLuint)program, (GLenum)shadertype, (GLuint)index, (GLenum)pname, values_ptr);

}

template <typename... Args>
static void _glGetActiveSubroutineUniformName(std::tuple<Args...> args) {
	float program = std::get<0>(args);float shadertype = std::get<1>(args);float index = std::get<2>(args);float bufsize = std::get<3>(args);float length = std::get<4>(args);float name = std::get<5>(args);
	auto length_memory = static_cast<int>(length);auto length_ptr = (intptr_t)(length_memory) == 0 ? nullptr : (GLsizei *)((intptr_t)(get_memory()) + (intptr_t)(length_memory));
	auto name_memory = static_cast<int>(name);auto name_ptr = (intptr_t)(name_memory) == 0 ? nullptr : (GLchar *)((intptr_t)(get_memory()) + (intptr_t)(name_memory));
	
	glGetActiveSubroutineUniformName((GLuint)program, (GLenum)shadertype, (GLuint)index, (GLsizei)bufsize, length_ptr, name_ptr);

}

template <typename... Args>
static void _glGetActiveSubroutineName(std::tuple<Args...> args) {
	float program = std::get<0>(args);float shadertype = std::get<1>(args);float index = std::get<2>(args);float bufsize = std::get<3>(args);float length = std::get<4>(args);float name = std::get<5>(args);
	auto length_memory = static_cast<int>(length);auto length_ptr = (intptr_t)(length_memory) == 0 ? nullptr : (GLsizei *)((intptr_t)(get_memory()) + (intptr_t)(length_memory));
	auto name_memory = static_cast<int>(name);auto name_ptr = (intptr_t)(name_memory) == 0 ? nullptr : (GLchar *)((intptr_t)(get_memory()) + (intptr_t)(name_memory));
	
	glGetActiveSubroutineName((GLuint)program, (GLenum)shadertype, (GLuint)index, (GLsizei)bufsize, length_ptr, name_ptr);

}

template <typename... Args>
static void _glUniformSubroutinesuiv(std::tuple<Args...> args) {
	float shadertype = std::get<0>(args);float count = std::get<1>(args);float indices = std::get<2>(args);
	auto indices_memory = static_cast<int>(indices);auto indices_ptr = (intptr_t)(indices_memory) == 0 ? nullptr : (const GLuint *)((intptr_t)(get_memory()) + (intptr_t)(indices_memory));
	
	glUniformSubroutinesuiv((GLenum)shadertype, (GLsizei)count, indices_ptr);

}

template <typename... Args>
static void _glGetUniformSubroutineuiv(std::tuple<Args...> args) {
	float shadertype = std::get<0>(args);float location = std::get<1>(args);float params = std::get<2>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLuint *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetUniformSubroutineuiv((GLenum)shadertype, (GLint)location, params_ptr);

}

template <typename... Args>
static void _glGetProgramStageiv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float shadertype = std::get<1>(args);float pname = std::get<2>(args);float values = std::get<3>(args);
	auto values_memory = static_cast<int>(values);auto values_ptr = (intptr_t)(values_memory) == 0 ? nullptr : (GLint *)((intptr_t)(get_memory()) + (intptr_t)(values_memory));
	
	glGetProgramStageiv((GLuint)program, (GLenum)shadertype, (GLenum)pname, values_ptr);

}

template <typename... Args>
static void _glPatchParameteri(std::tuple<Args...> args) {
	float pname = std::get<0>(args);float value = std::get<1>(args);
	
	glPatchParameteri((GLenum)pname, (GLint)value);

}

template <typename... Args>
static void _glPatchParameterfv(std::tuple<Args...> args) {
	float pname = std::get<0>(args);float values = std::get<1>(args);
	auto values_memory = static_cast<int>(values);auto values_ptr = (intptr_t)(values_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(values_memory));
	
	glPatchParameterfv((GLenum)pname, values_ptr);

}

template <typename... Args>
static void _glBindTransformFeedback(std::tuple<Args...> args) {
	float target = std::get<0>(args);float id = std::get<1>(args);
	
	glBindTransformFeedback((GLenum)target, (GLuint)id);

}

template <typename... Args>
static void _glDeleteTransformFeedbacks(std::tuple<Args...> args) {
	float n = std::get<0>(args);float ids = std::get<1>(args);
	auto ids_memory = static_cast<int>(ids);auto ids_ptr = (intptr_t)(ids_memory) == 0 ? nullptr : (const GLuint *)((intptr_t)(get_memory()) + (intptr_t)(ids_memory));
	
	glDeleteTransformFeedbacks((GLsizei)n, ids_ptr);

}

template <typename... Args>
static void _glGenTransformFeedbacks(std::tuple<Args...> args) {
	float n = std::get<0>(args);float ids = std::get<1>(args);
	auto ids_memory = static_cast<int>(ids);auto ids_ptr = (intptr_t)(ids_memory) == 0 ? nullptr : (GLuint *)((intptr_t)(get_memory()) + (intptr_t)(ids_memory));
	
	glGenTransformFeedbacks((GLsizei)n, ids_ptr);

}

template <typename... Args>
static int _glIsTransformFeedback(std::tuple<Args...> args) {
	float id = std::get<0>(args);
	
	return (int)(glIsTransformFeedback((GLuint)id));

}

static void _glPauseTransformFeedback() {
	
	
	glPauseTransformFeedback();

}

static void _glResumeTransformFeedback() {
	
	
	glResumeTransformFeedback();

}

template <typename... Args>
static void _glDrawTransformFeedback(std::tuple<Args...> args) {
	float mode = std::get<0>(args);float id = std::get<1>(args);
	
	glDrawTransformFeedback((GLenum)mode, (GLuint)id);

}

template <typename... Args>
static void _glDrawTransformFeedbackStream(std::tuple<Args...> args) {
	float mode = std::get<0>(args);float id = std::get<1>(args);float stream = std::get<2>(args);
	
	glDrawTransformFeedbackStream((GLenum)mode, (GLuint)id, (GLuint)stream);

}

template <typename... Args>
static void _glBeginQueryIndexed(std::tuple<Args...> args) {
	float target = std::get<0>(args);float index = std::get<1>(args);float id = std::get<2>(args);
	
	glBeginQueryIndexed((GLenum)target, (GLuint)index, (GLuint)id);

}

template <typename... Args>
static void _glEndQueryIndexed(std::tuple<Args...> args) {
	float target = std::get<0>(args);float index = std::get<1>(args);
	
	glEndQueryIndexed((GLenum)target, (GLuint)index);

}

template <typename... Args>
static void _glGetQueryIndexediv(std::tuple<Args...> args) {
	float target = std::get<0>(args);float index = std::get<1>(args);float pname = std::get<2>(args);float params = std::get<3>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLint *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetQueryIndexediv((GLenum)target, (GLuint)index, (GLenum)pname, params_ptr);

}

static void _glReleaseShaderCompiler() {
	
	
	glReleaseShaderCompiler();

}

template <typename... Args>
static void _glShaderBinary(std::tuple<Args...> args) {
	float count = std::get<0>(args);float shaders = std::get<1>(args);float binaryformat = std::get<2>(args);float binary = std::get<3>(args);float length = std::get<4>(args);
	auto shaders_memory = static_cast<int>(shaders);auto shaders_ptr = (intptr_t)(shaders_memory) == 0 ? nullptr : (const GLuint *)((intptr_t)(get_memory()) + (intptr_t)(shaders_memory));
	auto binary_memory = static_cast<int>(binary);auto binary_ptr = (intptr_t)(binary_memory) == 0 ? nullptr : (const GLvoid *)((intptr_t)(get_memory()) + (intptr_t)(binary_memory));
	
	glShaderBinary((GLsizei)count, shaders_ptr, (GLenum)binaryformat, binary_ptr, (GLsizei)length);

}

template <typename... Args>
static void _glGetShaderPrecisionFormat(std::tuple<Args...> args) {
	float shadertype = std::get<0>(args);float precisiontype = std::get<1>(args);float range = std::get<2>(args);float precision = std::get<3>(args);
	auto range_memory = static_cast<int>(range);auto range_ptr = (intptr_t)(range_memory) == 0 ? nullptr : (GLint *)((intptr_t)(get_memory()) + (intptr_t)(range_memory));
	auto precision_memory = static_cast<int>(precision);auto precision_ptr = (intptr_t)(precision_memory) == 0 ? nullptr : (GLint *)((intptr_t)(get_memory()) + (intptr_t)(precision_memory));
	
	glGetShaderPrecisionFormat((GLenum)shadertype, (GLenum)precisiontype, range_ptr, precision_ptr);

}

template <typename... Args>
static void _glDepthRangef(std::tuple<Args...> args) {
	float n = std::get<0>(args);float f = std::get<1>(args);
	
	glDepthRangef((GLclampf)n, (GLclampf)f);

}

template <typename... Args>
static void _glClearDepthf(std::tuple<Args...> args) {
	float d = std::get<0>(args);
	
	glClearDepthf((GLclampf)d);

}

template <typename... Args>
static void _glGetProgramBinary(std::tuple<Args...> args) {
	float program = std::get<0>(args);float bufSize = std::get<1>(args);float length = std::get<2>(args);float binaryFormat = std::get<3>(args);float binary = std::get<4>(args);
	auto length_memory = static_cast<int>(length);auto length_ptr = (intptr_t)(length_memory) == 0 ? nullptr : (GLsizei *)((intptr_t)(get_memory()) + (intptr_t)(length_memory));
	auto binaryFormat_memory = static_cast<int>(binaryFormat);auto binaryFormat_ptr = (intptr_t)(binaryFormat_memory) == 0 ? nullptr : (GLenum *)((intptr_t)(get_memory()) + (intptr_t)(binaryFormat_memory));
	auto binary_memory = static_cast<int>(binary);auto binary_ptr = (intptr_t)(binary_memory) == 0 ? nullptr : (GLvoid *)((intptr_t)(get_memory()) + (intptr_t)(binary_memory));
	
	glGetProgramBinary((GLuint)program, (GLsizei)bufSize, length_ptr, binaryFormat_ptr, binary_ptr);

}

template <typename... Args>
static void _glProgramBinary(std::tuple<Args...> args) {
	float program = std::get<0>(args);float binaryFormat = std::get<1>(args);float binary = std::get<2>(args);float length = std::get<3>(args);
	auto binary_memory = static_cast<int>(binary);auto binary_ptr = (intptr_t)(binary_memory) == 0 ? nullptr : (const GLvoid *)((intptr_t)(get_memory()) + (intptr_t)(binary_memory));
	
	glProgramBinary((GLuint)program, (GLenum)binaryFormat, binary_ptr, (GLsizei)length);

}

template <typename... Args>
static void _glProgramParameteri(std::tuple<Args...> args) {
	float program = std::get<0>(args);float pname = std::get<1>(args);float value = std::get<2>(args);
	
	glProgramParameteri((GLuint)program, (GLenum)pname, (GLint)value);

}

template <typename... Args>
static void _glUseProgramStages(std::tuple<Args...> args) {
	float pipeline = std::get<0>(args);float stages = std::get<1>(args);float program = std::get<2>(args);
	
	glUseProgramStages((GLuint)pipeline, (GLbitfield)stages, (GLuint)program);

}

template <typename... Args>
static void _glActiveShaderProgram(std::tuple<Args...> args) {
	float pipeline = std::get<0>(args);float program = std::get<1>(args);
	
	glActiveShaderProgram((GLuint)pipeline, (GLuint)program);

}

template <typename... Args>
static int _glCreateShaderProgramv(std::tuple<Args...> args) {
	float type = std::get<0>(args);float count = std::get<1>(args);float strings = std::get<2>(args);
	auto strings_memory = static_cast<int>(strings);auto strings_data = (int*)((intptr_t)(get_memory()) + (intptr_t)(strings_memory));auto strings_temporal = (const GLchar* const *)((intptr_t)(get_memory()) + (intptr_t)(strings_data[0]));auto strings_ptr = (const GLchar* const *)&strings_temporal;
	
	return (int)(glCreateShaderProgramv((GLenum)type, (GLsizei)count, strings_ptr));

}

template <typename... Args>
static void _glBindProgramPipeline(std::tuple<Args...> args) {
	float pipeline = std::get<0>(args);
	
	glBindProgramPipeline((GLuint)pipeline);

}

template <typename... Args>
static void _glDeleteProgramPipelines(std::tuple<Args...> args) {
	float n = std::get<0>(args);float pipelines = std::get<1>(args);
	auto pipelines_memory = static_cast<int>(pipelines);auto pipelines_ptr = (intptr_t)(pipelines_memory) == 0 ? nullptr : (const GLuint *)((intptr_t)(get_memory()) + (intptr_t)(pipelines_memory));
	
	glDeleteProgramPipelines((GLsizei)n, pipelines_ptr);

}

template <typename... Args>
static void _glGenProgramPipelines(std::tuple<Args...> args) {
	float n = std::get<0>(args);float pipelines = std::get<1>(args);
	auto pipelines_memory = static_cast<int>(pipelines);auto pipelines_ptr = (intptr_t)(pipelines_memory) == 0 ? nullptr : (GLuint *)((intptr_t)(get_memory()) + (intptr_t)(pipelines_memory));
	
	glGenProgramPipelines((GLsizei)n, pipelines_ptr);

}

template <typename... Args>
static int _glIsProgramPipeline(std::tuple<Args...> args) {
	float pipeline = std::get<0>(args);
	
	return (int)(glIsProgramPipeline((GLuint)pipeline));

}

template <typename... Args>
static void _glGetProgramPipelineiv(std::tuple<Args...> args) {
	float pipeline = std::get<0>(args);float pname = std::get<1>(args);float params = std::get<2>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLint *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetProgramPipelineiv((GLuint)pipeline, (GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glProgramUniform1i(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float v0 = std::get<2>(args);
	
	glProgramUniform1i((GLuint)program, (GLint)location, (GLint)v0);

}

template <typename... Args>
static void _glProgramUniform1iv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float count = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLint *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glProgramUniform1iv((GLuint)program, (GLint)location, (GLsizei)count, value_ptr);

}

template <typename... Args>
static void _glProgramUniform1f(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float v0 = std::get<2>(args);
	
	glProgramUniform1f((GLuint)program, (GLint)location, (GLfloat)v0);

}

template <typename... Args>
static void _glProgramUniform1fv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float count = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glProgramUniform1fv((GLuint)program, (GLint)location, (GLsizei)count, value_ptr);

}

template <typename... Args>
static void _glProgramUniform1d(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float v0 = std::get<2>(args);
	
	glProgramUniform1d((GLuint)program, (GLint)location, (GLdouble)v0);

}

template <typename... Args>
static void _glProgramUniform1dv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float count = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glProgramUniform1dv((GLuint)program, (GLint)location, (GLsizei)count, value_ptr);

}

template <typename... Args>
static void _glProgramUniform1ui(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float v0 = std::get<2>(args);
	
	glProgramUniform1ui((GLuint)program, (GLint)location, (GLuint)v0);

}

template <typename... Args>
static void _glProgramUniform1uiv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float count = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLuint *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glProgramUniform1uiv((GLuint)program, (GLint)location, (GLsizei)count, value_ptr);

}

template <typename... Args>
static void _glProgramUniform2i(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float v0 = std::get<2>(args);float v1 = std::get<3>(args);
	
	glProgramUniform2i((GLuint)program, (GLint)location, (GLint)v0, (GLint)v1);

}

template <typename... Args>
static void _glProgramUniform2iv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float count = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLint *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glProgramUniform2iv((GLuint)program, (GLint)location, (GLsizei)count, value_ptr);

}

template <typename... Args>
static void _glProgramUniform2f(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float v0 = std::get<2>(args);float v1 = std::get<3>(args);
	
	glProgramUniform2f((GLuint)program, (GLint)location, (GLfloat)v0, (GLfloat)v1);

}

template <typename... Args>
static void _glProgramUniform2fv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float count = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glProgramUniform2fv((GLuint)program, (GLint)location, (GLsizei)count, value_ptr);

}

template <typename... Args>
static void _glProgramUniform2d(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float v0 = std::get<2>(args);float v1 = std::get<3>(args);
	
	glProgramUniform2d((GLuint)program, (GLint)location, (GLdouble)v0, (GLdouble)v1);

}

template <typename... Args>
static void _glProgramUniform2dv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float count = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glProgramUniform2dv((GLuint)program, (GLint)location, (GLsizei)count, value_ptr);

}

template <typename... Args>
static void _glProgramUniform2ui(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float v0 = std::get<2>(args);float v1 = std::get<3>(args);
	
	glProgramUniform2ui((GLuint)program, (GLint)location, (GLuint)v0, (GLuint)v1);

}

template <typename... Args>
static void _glProgramUniform2uiv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float count = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLuint *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glProgramUniform2uiv((GLuint)program, (GLint)location, (GLsizei)count, value_ptr);

}

template <typename... Args>
static void _glProgramUniform3i(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float v0 = std::get<2>(args);float v1 = std::get<3>(args);float v2 = std::get<4>(args);
	
	glProgramUniform3i((GLuint)program, (GLint)location, (GLint)v0, (GLint)v1, (GLint)v2);

}

template <typename... Args>
static void _glProgramUniform3iv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float count = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLint *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glProgramUniform3iv((GLuint)program, (GLint)location, (GLsizei)count, value_ptr);

}

template <typename... Args>
static void _glProgramUniform3f(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float v0 = std::get<2>(args);float v1 = std::get<3>(args);float v2 = std::get<4>(args);
	
	glProgramUniform3f((GLuint)program, (GLint)location, (GLfloat)v0, (GLfloat)v1, (GLfloat)v2);

}

template <typename... Args>
static void _glProgramUniform3fv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float count = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glProgramUniform3fv((GLuint)program, (GLint)location, (GLsizei)count, value_ptr);

}

template <typename... Args>
static void _glProgramUniform3d(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float v0 = std::get<2>(args);float v1 = std::get<3>(args);float v2 = std::get<4>(args);
	
	glProgramUniform3d((GLuint)program, (GLint)location, (GLdouble)v0, (GLdouble)v1, (GLdouble)v2);

}

template <typename... Args>
static void _glProgramUniform3dv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float count = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glProgramUniform3dv((GLuint)program, (GLint)location, (GLsizei)count, value_ptr);

}

template <typename... Args>
static void _glProgramUniform3ui(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float v0 = std::get<2>(args);float v1 = std::get<3>(args);float v2 = std::get<4>(args);
	
	glProgramUniform3ui((GLuint)program, (GLint)location, (GLuint)v0, (GLuint)v1, (GLuint)v2);

}

template <typename... Args>
static void _glProgramUniform3uiv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float count = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLuint *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glProgramUniform3uiv((GLuint)program, (GLint)location, (GLsizei)count, value_ptr);

}

template <typename... Args>
static void _glProgramUniform4i(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float v0 = std::get<2>(args);float v1 = std::get<3>(args);float v2 = std::get<4>(args);float v3 = std::get<5>(args);
	
	glProgramUniform4i((GLuint)program, (GLint)location, (GLint)v0, (GLint)v1, (GLint)v2, (GLint)v3);

}

template <typename... Args>
static void _glProgramUniform4iv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float count = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLint *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glProgramUniform4iv((GLuint)program, (GLint)location, (GLsizei)count, value_ptr);

}

template <typename... Args>
static void _glProgramUniform4f(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float v0 = std::get<2>(args);float v1 = std::get<3>(args);float v2 = std::get<4>(args);float v3 = std::get<5>(args);
	
	glProgramUniform4f((GLuint)program, (GLint)location, (GLfloat)v0, (GLfloat)v1, (GLfloat)v2, (GLfloat)v3);

}

template <typename... Args>
static void _glProgramUniform4fv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float count = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glProgramUniform4fv((GLuint)program, (GLint)location, (GLsizei)count, value_ptr);

}

template <typename... Args>
static void _glProgramUniform4d(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float v0 = std::get<2>(args);float v1 = std::get<3>(args);float v2 = std::get<4>(args);float v3 = std::get<5>(args);
	
	glProgramUniform4d((GLuint)program, (GLint)location, (GLdouble)v0, (GLdouble)v1, (GLdouble)v2, (GLdouble)v3);

}

template <typename... Args>
static void _glProgramUniform4dv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float count = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glProgramUniform4dv((GLuint)program, (GLint)location, (GLsizei)count, value_ptr);

}

template <typename... Args>
static void _glProgramUniform4ui(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float v0 = std::get<2>(args);float v1 = std::get<3>(args);float v2 = std::get<4>(args);float v3 = std::get<5>(args);
	
	glProgramUniform4ui((GLuint)program, (GLint)location, (GLuint)v0, (GLuint)v1, (GLuint)v2, (GLuint)v3);

}

template <typename... Args>
static void _glProgramUniform4uiv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float count = std::get<2>(args);float value = std::get<3>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLuint *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glProgramUniform4uiv((GLuint)program, (GLint)location, (GLsizei)count, value_ptr);

}

template <typename... Args>
static void _glProgramUniformMatrix2fv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float count = std::get<2>(args);float transpose = std::get<3>(args);float value = std::get<4>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glProgramUniformMatrix2fv((GLuint)program, (GLint)location, (GLsizei)count, (GLboolean)transpose, value_ptr);

}

template <typename... Args>
static void _glProgramUniformMatrix3fv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float count = std::get<2>(args);float transpose = std::get<3>(args);float value = std::get<4>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glProgramUniformMatrix3fv((GLuint)program, (GLint)location, (GLsizei)count, (GLboolean)transpose, value_ptr);

}

template <typename... Args>
static void _glProgramUniformMatrix4fv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float count = std::get<2>(args);float transpose = std::get<3>(args);float value = std::get<4>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glProgramUniformMatrix4fv((GLuint)program, (GLint)location, (GLsizei)count, (GLboolean)transpose, value_ptr);

}

template <typename... Args>
static void _glProgramUniformMatrix2dv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float count = std::get<2>(args);float transpose = std::get<3>(args);float value = std::get<4>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glProgramUniformMatrix2dv((GLuint)program, (GLint)location, (GLsizei)count, (GLboolean)transpose, value_ptr);

}

template <typename... Args>
static void _glProgramUniformMatrix3dv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float count = std::get<2>(args);float transpose = std::get<3>(args);float value = std::get<4>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glProgramUniformMatrix3dv((GLuint)program, (GLint)location, (GLsizei)count, (GLboolean)transpose, value_ptr);

}

template <typename... Args>
static void _glProgramUniformMatrix4dv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float count = std::get<2>(args);float transpose = std::get<3>(args);float value = std::get<4>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glProgramUniformMatrix4dv((GLuint)program, (GLint)location, (GLsizei)count, (GLboolean)transpose, value_ptr);

}

template <typename... Args>
static void _glProgramUniformMatrix2x3fv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float count = std::get<2>(args);float transpose = std::get<3>(args);float value = std::get<4>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glProgramUniformMatrix2x3fv((GLuint)program, (GLint)location, (GLsizei)count, (GLboolean)transpose, value_ptr);

}

template <typename... Args>
static void _glProgramUniformMatrix3x2fv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float count = std::get<2>(args);float transpose = std::get<3>(args);float value = std::get<4>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glProgramUniformMatrix3x2fv((GLuint)program, (GLint)location, (GLsizei)count, (GLboolean)transpose, value_ptr);

}

template <typename... Args>
static void _glProgramUniformMatrix2x4fv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float count = std::get<2>(args);float transpose = std::get<3>(args);float value = std::get<4>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glProgramUniformMatrix2x4fv((GLuint)program, (GLint)location, (GLsizei)count, (GLboolean)transpose, value_ptr);

}

template <typename... Args>
static void _glProgramUniformMatrix4x2fv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float count = std::get<2>(args);float transpose = std::get<3>(args);float value = std::get<4>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glProgramUniformMatrix4x2fv((GLuint)program, (GLint)location, (GLsizei)count, (GLboolean)transpose, value_ptr);

}

template <typename... Args>
static void _glProgramUniformMatrix3x4fv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float count = std::get<2>(args);float transpose = std::get<3>(args);float value = std::get<4>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glProgramUniformMatrix3x4fv((GLuint)program, (GLint)location, (GLsizei)count, (GLboolean)transpose, value_ptr);

}

template <typename... Args>
static void _glProgramUniformMatrix4x3fv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float count = std::get<2>(args);float transpose = std::get<3>(args);float value = std::get<4>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glProgramUniformMatrix4x3fv((GLuint)program, (GLint)location, (GLsizei)count, (GLboolean)transpose, value_ptr);

}

template <typename... Args>
static void _glProgramUniformMatrix2x3dv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float count = std::get<2>(args);float transpose = std::get<3>(args);float value = std::get<4>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glProgramUniformMatrix2x3dv((GLuint)program, (GLint)location, (GLsizei)count, (GLboolean)transpose, value_ptr);

}

template <typename... Args>
static void _glProgramUniformMatrix3x2dv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float count = std::get<2>(args);float transpose = std::get<3>(args);float value = std::get<4>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glProgramUniformMatrix3x2dv((GLuint)program, (GLint)location, (GLsizei)count, (GLboolean)transpose, value_ptr);

}

template <typename... Args>
static void _glProgramUniformMatrix2x4dv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float count = std::get<2>(args);float transpose = std::get<3>(args);float value = std::get<4>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glProgramUniformMatrix2x4dv((GLuint)program, (GLint)location, (GLsizei)count, (GLboolean)transpose, value_ptr);

}

template <typename... Args>
static void _glProgramUniformMatrix4x2dv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float count = std::get<2>(args);float transpose = std::get<3>(args);float value = std::get<4>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glProgramUniformMatrix4x2dv((GLuint)program, (GLint)location, (GLsizei)count, (GLboolean)transpose, value_ptr);

}

template <typename... Args>
static void _glProgramUniformMatrix3x4dv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float count = std::get<2>(args);float transpose = std::get<3>(args);float value = std::get<4>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glProgramUniformMatrix3x4dv((GLuint)program, (GLint)location, (GLsizei)count, (GLboolean)transpose, value_ptr);

}

template <typename... Args>
static void _glProgramUniformMatrix4x3dv(std::tuple<Args...> args) {
	float program = std::get<0>(args);float location = std::get<1>(args);float count = std::get<2>(args);float transpose = std::get<3>(args);float value = std::get<4>(args);
	auto value_memory = static_cast<int>(value);auto value_ptr = (intptr_t)(value_memory) == 0 ? nullptr : (const GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(value_memory));
	
	glProgramUniformMatrix4x3dv((GLuint)program, (GLint)location, (GLsizei)count, (GLboolean)transpose, value_ptr);

}

template <typename... Args>
static void _glValidateProgramPipeline(std::tuple<Args...> args) {
	float pipeline = std::get<0>(args);
	
	glValidateProgramPipeline((GLuint)pipeline);

}

template <typename... Args>
static void _glGetProgramPipelineInfoLog(std::tuple<Args...> args) {
	float pipeline = std::get<0>(args);float bufSize = std::get<1>(args);float length = std::get<2>(args);float infoLog = std::get<3>(args);
	auto length_memory = static_cast<int>(length);auto length_ptr = (intptr_t)(length_memory) == 0 ? nullptr : (GLsizei *)((intptr_t)(get_memory()) + (intptr_t)(length_memory));
	auto infoLog_memory = static_cast<int>(infoLog);auto infoLog_ptr = (intptr_t)(infoLog_memory) == 0 ? nullptr : (GLchar *)((intptr_t)(get_memory()) + (intptr_t)(infoLog_memory));
	
	glGetProgramPipelineInfoLog((GLuint)pipeline, (GLsizei)bufSize, length_ptr, infoLog_ptr);

}

template <typename... Args>
static void _glVertexAttribL1d(std::tuple<Args...> args) {
	float index = std::get<0>(args);float x = std::get<1>(args);
	
	glVertexAttribL1d((GLuint)index, (GLdouble)x);

}

template <typename... Args>
static void _glVertexAttribL2d(std::tuple<Args...> args) {
	float index = std::get<0>(args);float x = std::get<1>(args);float y = std::get<2>(args);
	
	glVertexAttribL2d((GLuint)index, (GLdouble)x, (GLdouble)y);

}

template <typename... Args>
static void _glVertexAttribL3d(std::tuple<Args...> args) {
	float index = std::get<0>(args);float x = std::get<1>(args);float y = std::get<2>(args);float z = std::get<3>(args);
	
	glVertexAttribL3d((GLuint)index, (GLdouble)x, (GLdouble)y, (GLdouble)z);

}

template <typename... Args>
static void _glVertexAttribL4d(std::tuple<Args...> args) {
	float index = std::get<0>(args);float x = std::get<1>(args);float y = std::get<2>(args);float z = std::get<3>(args);float w = std::get<4>(args);
	
	glVertexAttribL4d((GLuint)index, (GLdouble)x, (GLdouble)y, (GLdouble)z, (GLdouble)w);

}

template <typename... Args>
static void _glVertexAttribL1dv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttribL1dv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttribL2dv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttribL2dv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttribL3dv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttribL3dv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttribL4dv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glVertexAttribL4dv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glVertexAttribLPointer(std::tuple<Args...> args) {
	float index = std::get<0>(args);float size = std::get<1>(args);float type = std::get<2>(args);float stride = std::get<3>(args);float pointer = std::get<4>(args);
	auto pointer_memory = static_cast<int>(pointer);auto pointer_ptr = (intptr_t)(pointer_memory) == 0 ? nullptr : (const GLvoid *)((intptr_t)(get_memory()) + (intptr_t)(pointer_memory));
	
	glVertexAttribLPointer((GLuint)index, (GLint)size, (GLenum)type, (GLsizei)stride, pointer_ptr);

}

template <typename... Args>
static void _glGetVertexAttribLdv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float pname = std::get<1>(args);float params = std::get<2>(args);
	auto params_memory = static_cast<int>(params);auto params_ptr = (intptr_t)(params_memory) == 0 ? nullptr : (GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(params_memory));
	
	glGetVertexAttribLdv((GLuint)index, (GLenum)pname, params_ptr);

}

template <typename... Args>
static void _glViewportArrayv(std::tuple<Args...> args) {
	float first = std::get<0>(args);float count = std::get<1>(args);float v = std::get<2>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glViewportArrayv((GLuint)first, (GLsizei)count, v_ptr);

}

template <typename... Args>
static void _glViewportIndexedf(std::tuple<Args...> args) {
	float index = std::get<0>(args);float x = std::get<1>(args);float y = std::get<2>(args);float w = std::get<3>(args);float h = std::get<4>(args);
	
	glViewportIndexedf((GLuint)index, (GLfloat)x, (GLfloat)y, (GLfloat)w, (GLfloat)h);

}

template <typename... Args>
static void _glViewportIndexedfv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glViewportIndexedfv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glScissorArrayv(std::tuple<Args...> args) {
	float first = std::get<0>(args);float count = std::get<1>(args);float v = std::get<2>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLint *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glScissorArrayv((GLuint)first, (GLsizei)count, v_ptr);

}

template <typename... Args>
static void _glScissorIndexed(std::tuple<Args...> args) {
	float index = std::get<0>(args);float left = std::get<1>(args);float bottom = std::get<2>(args);float width = std::get<3>(args);float height = std::get<4>(args);
	
	glScissorIndexed((GLuint)index, (GLint)left, (GLint)bottom, (GLsizei)width, (GLsizei)height);

}

template <typename... Args>
static void _glScissorIndexedv(std::tuple<Args...> args) {
	float index = std::get<0>(args);float v = std::get<1>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLint *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glScissorIndexedv((GLuint)index, v_ptr);

}

template <typename... Args>
static void _glDepthRangeArrayv(std::tuple<Args...> args) {
	float first = std::get<0>(args);float count = std::get<1>(args);float v = std::get<2>(args);
	auto v_memory = static_cast<int>(v);auto v_ptr = (intptr_t)(v_memory) == 0 ? nullptr : (const GLclampd *)((intptr_t)(get_memory()) + (intptr_t)(v_memory));
	
	glDepthRangeArrayv((GLuint)first, (GLsizei)count, v_ptr);

}

template <typename... Args>
static void _glDepthRangeIndexed(std::tuple<Args...> args) {
	float index = std::get<0>(args);float n = std::get<1>(args);float f = std::get<2>(args);
	
	glDepthRangeIndexed((GLuint)index, (GLclampd)n, (GLclampd)f);

}

template <typename... Args>
static void _glGetFloati_v(std::tuple<Args...> args) {
	float target = std::get<0>(args);float index = std::get<1>(args);float data = std::get<2>(args);
	auto data_memory = static_cast<int>(data);auto data_ptr = (intptr_t)(data_memory) == 0 ? nullptr : (GLfloat *)((intptr_t)(get_memory()) + (intptr_t)(data_memory));
	
	glGetFloati_v((GLenum)target, (GLuint)index, data_ptr);

}

template <typename... Args>
static void _glGetDoublei_v(std::tuple<Args...> args) {
	float target = std::get<0>(args);float index = std::get<1>(args);float data = std::get<2>(args);
	auto data_memory = static_cast<int>(data);auto data_ptr = (intptr_t)(data_memory) == 0 ? nullptr : (GLdouble *)((intptr_t)(get_memory()) + (intptr_t)(data_memory));
	
	glGetDoublei_v((GLenum)target, (GLuint)index, data_ptr);

}

#include <wasmtime.hh>
#include <map>
#include <string>
#include <vector>
#include <iostream>

template <typename... Args>
auto call_variadic(std::string function_name, std::tuple<Args...> args){{

if (function_name.compare("glCullFace") == 0){
    _glCullFace(args);
}

if (function_name.compare("glFrontFace") == 0){
    _glFrontFace(args);
}

if (function_name.compare("glHint") == 0){
    _glHint(args);
}

if (function_name.compare("glLineWidth") == 0){
    _glLineWidth(args);
}

if (function_name.compare("glPointSize") == 0){
    _glPointSize(args);
}

if (function_name.compare("glPolygonMode") == 0){
    _glPolygonMode(args);
}

if (function_name.compare("glScissor") == 0){
    _glScissor(args);
}

if (function_name.compare("glTexParameterf") == 0){
    _glTexParameterf(args);
}

if (function_name.compare("glTexParameterfv") == 0){
    _glTexParameterfv(args);
}

if (function_name.compare("glTexParameteri") == 0){
    _glTexParameteri(args);
}

if (function_name.compare("glTexParameteriv") == 0){
    _glTexParameteriv(args);
}

if (function_name.compare("glTexImage1D") == 0){
    _glTexImage1D(args);
}

if (function_name.compare("glTexImage2D") == 0){
    _glTexImage2D(args);
}

if (function_name.compare("glDrawBuffer") == 0){
    _glDrawBuffer(args);
}

if (function_name.compare("glClear") == 0){
    _glClear(args);
}

if (function_name.compare("glClearColor") == 0){
    _glClearColor(args);
}

if (function_name.compare("glClearStencil") == 0){
    _glClearStencil(args);
}

if (function_name.compare("glClearDepth") == 0){
    _glClearDepth(args);
}

if (function_name.compare("glStencilMask") == 0){
    _glStencilMask(args);
}

if (function_name.compare("glColorMask") == 0){
    _glColorMask(args);
}

if (function_name.compare("glDepthMask") == 0){
    _glDepthMask(args);
}

if (function_name.compare("glDisable") == 0){
    _glDisable(args);
}

if (function_name.compare("glEnable") == 0){
    _glEnable(args);
}

if (function_name.compare("glFinish") == 0){
    _glFinish();
}

if (function_name.compare("glFlush") == 0){
    _glFlush();
}

if (function_name.compare("glBlendFunc") == 0){
    _glBlendFunc(args);
}

if (function_name.compare("glLogicOp") == 0){
    _glLogicOp(args);
}

if (function_name.compare("glStencilFunc") == 0){
    _glStencilFunc(args);
}

if (function_name.compare("glStencilOp") == 0){
    _glStencilOp(args);
}

if (function_name.compare("glDepthFunc") == 0){
    _glDepthFunc(args);
}

if (function_name.compare("glPixelStoref") == 0){
    _glPixelStoref(args);
}

if (function_name.compare("glPixelStorei") == 0){
    _glPixelStorei(args);
}

if (function_name.compare("glReadBuffer") == 0){
    _glReadBuffer(args);
}

if (function_name.compare("glReadPixels") == 0){
    _glReadPixels(args);
}

if (function_name.compare("glGetBooleanv") == 0){
    _glGetBooleanv(args);
}

if (function_name.compare("glGetDoublev") == 0){
    _glGetDoublev(args);
}

if (function_name.compare("glGetError") == 0){
    return _glGetError();
}

if (function_name.compare("glGetFloatv") == 0){
    _glGetFloatv(args);
}

if (function_name.compare("glGetIntegerv") == 0){
    _glGetIntegerv(args);
}

if (function_name.compare("glGetString") == 0){
    return _glGetString(args);
}

if (function_name.compare("glGetTexImage") == 0){
    _glGetTexImage(args);
}

if (function_name.compare("glGetTexParameterfv") == 0){
    _glGetTexParameterfv(args);
}

if (function_name.compare("glGetTexParameteriv") == 0){
    _glGetTexParameteriv(args);
}

if (function_name.compare("glGetTexLevelParameterfv") == 0){
    _glGetTexLevelParameterfv(args);
}

if (function_name.compare("glGetTexLevelParameteriv") == 0){
    _glGetTexLevelParameteriv(args);
}

if (function_name.compare("glIsEnabled") == 0){
    return _glIsEnabled(args);
}

if (function_name.compare("glDepthRange") == 0){
    _glDepthRange(args);
}

if (function_name.compare("glViewport") == 0){
    _glViewport(args);
}

if (function_name.compare("glDrawArrays") == 0){
    _glDrawArrays(args);
}

if (function_name.compare("glDrawElements") == 0){
    _glDrawElements(args);
}

if (function_name.compare("glPolygonOffset") == 0){
    _glPolygonOffset(args);
}

if (function_name.compare("glCopyTexImage1D") == 0){
    _glCopyTexImage1D(args);
}

if (function_name.compare("glCopyTexImage2D") == 0){
    _glCopyTexImage2D(args);
}

if (function_name.compare("glCopyTexSubImage1D") == 0){
    _glCopyTexSubImage1D(args);
}

if (function_name.compare("glCopyTexSubImage2D") == 0){
    _glCopyTexSubImage2D(args);
}

if (function_name.compare("glTexSubImage1D") == 0){
    _glTexSubImage1D(args);
}

if (function_name.compare("glTexSubImage2D") == 0){
    _glTexSubImage2D(args);
}

if (function_name.compare("glBindTexture") == 0){
    _glBindTexture(args);
}

if (function_name.compare("glDeleteTextures") == 0){
    _glDeleteTextures(args);
}

if (function_name.compare("glGenTextures") == 0){
    _glGenTextures(args);
}

if (function_name.compare("glIsTexture") == 0){
    return _glIsTexture(args);
}

if (function_name.compare("glBlendColor") == 0){
    _glBlendColor(args);
}

if (function_name.compare("glBlendEquation") == 0){
    _glBlendEquation(args);
}

if (function_name.compare("glDrawRangeElements") == 0){
    _glDrawRangeElements(args);
}

if (function_name.compare("glTexImage3D") == 0){
    _glTexImage3D(args);
}

if (function_name.compare("glTexSubImage3D") == 0){
    _glTexSubImage3D(args);
}

if (function_name.compare("glCopyTexSubImage3D") == 0){
    _glCopyTexSubImage3D(args);
}

if (function_name.compare("glActiveTexture") == 0){
    _glActiveTexture(args);
}

if (function_name.compare("glSampleCoverage") == 0){
    _glSampleCoverage(args);
}

if (function_name.compare("glCompressedTexImage3D") == 0){
    _glCompressedTexImage3D(args);
}

if (function_name.compare("glCompressedTexImage2D") == 0){
    _glCompressedTexImage2D(args);
}

if (function_name.compare("glCompressedTexImage1D") == 0){
    _glCompressedTexImage1D(args);
}

if (function_name.compare("glCompressedTexSubImage3D") == 0){
    _glCompressedTexSubImage3D(args);
}

if (function_name.compare("glCompressedTexSubImage2D") == 0){
    _glCompressedTexSubImage2D(args);
}

if (function_name.compare("glCompressedTexSubImage1D") == 0){
    _glCompressedTexSubImage1D(args);
}

if (function_name.compare("glGetCompressedTexImage") == 0){
    _glGetCompressedTexImage(args);
}

if (function_name.compare("glBlendFuncSeparate") == 0){
    _glBlendFuncSeparate(args);
}

if (function_name.compare("glMultiDrawArrays") == 0){
    _glMultiDrawArrays(args);
}

if (function_name.compare("glMultiDrawElements") == 0){
    _glMultiDrawElements(args);
}

if (function_name.compare("glPointParameterf") == 0){
    _glPointParameterf(args);
}

if (function_name.compare("glPointParameterfv") == 0){
    _glPointParameterfv(args);
}

if (function_name.compare("glPointParameteri") == 0){
    _glPointParameteri(args);
}

if (function_name.compare("glPointParameteriv") == 0){
    _glPointParameteriv(args);
}

if (function_name.compare("glGenQueries") == 0){
    _glGenQueries(args);
}

if (function_name.compare("glDeleteQueries") == 0){
    _glDeleteQueries(args);
}

if (function_name.compare("glIsQuery") == 0){
    return _glIsQuery(args);
}

if (function_name.compare("glBeginQuery") == 0){
    _glBeginQuery(args);
}

if (function_name.compare("glEndQuery") == 0){
    _glEndQuery(args);
}

if (function_name.compare("glGetQueryiv") == 0){
    _glGetQueryiv(args);
}

if (function_name.compare("glGetQueryObjectiv") == 0){
    _glGetQueryObjectiv(args);
}

if (function_name.compare("glGetQueryObjectuiv") == 0){
    _glGetQueryObjectuiv(args);
}

if (function_name.compare("glBindBuffer") == 0){
    _glBindBuffer(args);
}

if (function_name.compare("glDeleteBuffers") == 0){
    _glDeleteBuffers(args);
}

if (function_name.compare("glGenBuffers") == 0){
    _glGenBuffers(args);
}

if (function_name.compare("glIsBuffer") == 0){
    return _glIsBuffer(args);
}

if (function_name.compare("glBufferData") == 0){
    _glBufferData(args);
}

if (function_name.compare("glBufferSubData") == 0){
    _glBufferSubData(args);
}

if (function_name.compare("glGetBufferSubData") == 0){
    _glGetBufferSubData(args);
}

if (function_name.compare("glMapBuffer") == 0){
    return _glMapBuffer(args);
}

if (function_name.compare("glUnmapBuffer") == 0){
    return _glUnmapBuffer(args);
}

if (function_name.compare("glGetBufferParameteriv") == 0){
    _glGetBufferParameteriv(args);
}

if (function_name.compare("glGetBufferPointerv") == 0){
    _glGetBufferPointerv(args);
}

if (function_name.compare("glBlendEquationSeparate") == 0){
    _glBlendEquationSeparate(args);
}

if (function_name.compare("glDrawBuffers") == 0){
    _glDrawBuffers(args);
}

if (function_name.compare("glStencilOpSeparate") == 0){
    _glStencilOpSeparate(args);
}

if (function_name.compare("glStencilFuncSeparate") == 0){
    _glStencilFuncSeparate(args);
}

if (function_name.compare("glStencilMaskSeparate") == 0){
    _glStencilMaskSeparate(args);
}

if (function_name.compare("glAttachShader") == 0){
    _glAttachShader(args);
}

if (function_name.compare("glBindAttribLocation") == 0){
    _glBindAttribLocation(args);
}

if (function_name.compare("glCompileShader") == 0){
    _glCompileShader(args);
}

if (function_name.compare("glCreateProgram") == 0){
    return _glCreateProgram();
}

if (function_name.compare("glCreateShader") == 0){
    return _glCreateShader(args);
}

if (function_name.compare("glDeleteProgram") == 0){
    _glDeleteProgram(args);
}

if (function_name.compare("glDeleteShader") == 0){
    _glDeleteShader(args);
}

if (function_name.compare("glDetachShader") == 0){
    _glDetachShader(args);
}

if (function_name.compare("glDisableVertexAttribArray") == 0){
    _glDisableVertexAttribArray(args);
}

if (function_name.compare("glEnableVertexAttribArray") == 0){
    _glEnableVertexAttribArray(args);
}

if (function_name.compare("glGetActiveAttrib") == 0){
    _glGetActiveAttrib(args);
}

if (function_name.compare("glGetActiveUniform") == 0){
    _glGetActiveUniform(args);
}

if (function_name.compare("glGetAttachedShaders") == 0){
    _glGetAttachedShaders(args);
}

if (function_name.compare("glGetAttribLocation") == 0){
    return _glGetAttribLocation(args);
}

if (function_name.compare("glGetProgramiv") == 0){
    _glGetProgramiv(args);
}

if (function_name.compare("glGetProgramInfoLog") == 0){
    _glGetProgramInfoLog(args);
}

if (function_name.compare("glGetShaderiv") == 0){
    _glGetShaderiv(args);
}

if (function_name.compare("glGetShaderInfoLog") == 0){
    _glGetShaderInfoLog(args);
}

if (function_name.compare("glGetShaderSource") == 0){
    _glGetShaderSource(args);
}

if (function_name.compare("glGetUniformLocation") == 0){
    return _glGetUniformLocation(args);
}

if (function_name.compare("glGetUniformfv") == 0){
    _glGetUniformfv(args);
}

if (function_name.compare("glGetUniformiv") == 0){
    _glGetUniformiv(args);
}

if (function_name.compare("glGetVertexAttribdv") == 0){
    _glGetVertexAttribdv(args);
}

if (function_name.compare("glGetVertexAttribfv") == 0){
    _glGetVertexAttribfv(args);
}

if (function_name.compare("glGetVertexAttribiv") == 0){
    _glGetVertexAttribiv(args);
}

if (function_name.compare("glGetVertexAttribPointerv") == 0){
    _glGetVertexAttribPointerv(args);
}

if (function_name.compare("glIsProgram") == 0){
    return _glIsProgram(args);
}

if (function_name.compare("glIsShader") == 0){
    return _glIsShader(args);
}

if (function_name.compare("glLinkProgram") == 0){
    _glLinkProgram(args);
}

if (function_name.compare("glShaderSource") == 0){
    _glShaderSource(args);
}

if (function_name.compare("glUseProgram") == 0){
    _glUseProgram(args);
}

if (function_name.compare("glUniform1f") == 0){
    _glUniform1f(args);
}

if (function_name.compare("glUniform2f") == 0){
    _glUniform2f(args);
}

if (function_name.compare("glUniform3f") == 0){
    _glUniform3f(args);
}

if (function_name.compare("glUniform4f") == 0){
    _glUniform4f(args);
}

if (function_name.compare("glUniform1i") == 0){
    _glUniform1i(args);
}

if (function_name.compare("glUniform2i") == 0){
    _glUniform2i(args);
}

if (function_name.compare("glUniform3i") == 0){
    _glUniform3i(args);
}

if (function_name.compare("glUniform4i") == 0){
    _glUniform4i(args);
}

if (function_name.compare("glUniform1fv") == 0){
    _glUniform1fv(args);
}

if (function_name.compare("glUniform2fv") == 0){
    _glUniform2fv(args);
}

if (function_name.compare("glUniform3fv") == 0){
    _glUniform3fv(args);
}

if (function_name.compare("glUniform4fv") == 0){
    _glUniform4fv(args);
}

if (function_name.compare("glUniform1iv") == 0){
    _glUniform1iv(args);
}

if (function_name.compare("glUniform2iv") == 0){
    _glUniform2iv(args);
}

if (function_name.compare("glUniform3iv") == 0){
    _glUniform3iv(args);
}

if (function_name.compare("glUniform4iv") == 0){
    _glUniform4iv(args);
}

if (function_name.compare("glUniformMatrix2fv") == 0){
    _glUniformMatrix2fv(args);
}

if (function_name.compare("glUniformMatrix3fv") == 0){
    _glUniformMatrix3fv(args);
}

if (function_name.compare("glUniformMatrix4fv") == 0){
    _glUniformMatrix4fv(args);
}

if (function_name.compare("glValidateProgram") == 0){
    _glValidateProgram(args);
}

if (function_name.compare("glVertexAttrib1d") == 0){
    _glVertexAttrib1d(args);
}

if (function_name.compare("glVertexAttrib1dv") == 0){
    _glVertexAttrib1dv(args);
}

if (function_name.compare("glVertexAttrib1f") == 0){
    _glVertexAttrib1f(args);
}

if (function_name.compare("glVertexAttrib1fv") == 0){
    _glVertexAttrib1fv(args);
}

if (function_name.compare("glVertexAttrib1s") == 0){
    _glVertexAttrib1s(args);
}

if (function_name.compare("glVertexAttrib1sv") == 0){
    _glVertexAttrib1sv(args);
}

if (function_name.compare("glVertexAttrib2d") == 0){
    _glVertexAttrib2d(args);
}

if (function_name.compare("glVertexAttrib2dv") == 0){
    _glVertexAttrib2dv(args);
}

if (function_name.compare("glVertexAttrib2f") == 0){
    _glVertexAttrib2f(args);
}

if (function_name.compare("glVertexAttrib2fv") == 0){
    _glVertexAttrib2fv(args);
}

if (function_name.compare("glVertexAttrib2s") == 0){
    _glVertexAttrib2s(args);
}

if (function_name.compare("glVertexAttrib2sv") == 0){
    _glVertexAttrib2sv(args);
}

if (function_name.compare("glVertexAttrib3d") == 0){
    _glVertexAttrib3d(args);
}

if (function_name.compare("glVertexAttrib3dv") == 0){
    _glVertexAttrib3dv(args);
}

if (function_name.compare("glVertexAttrib3f") == 0){
    _glVertexAttrib3f(args);
}

if (function_name.compare("glVertexAttrib3fv") == 0){
    _glVertexAttrib3fv(args);
}

if (function_name.compare("glVertexAttrib3s") == 0){
    _glVertexAttrib3s(args);
}

if (function_name.compare("glVertexAttrib3sv") == 0){
    _glVertexAttrib3sv(args);
}

if (function_name.compare("glVertexAttrib4Nbv") == 0){
    _glVertexAttrib4Nbv(args);
}

if (function_name.compare("glVertexAttrib4Niv") == 0){
    _glVertexAttrib4Niv(args);
}

if (function_name.compare("glVertexAttrib4Nsv") == 0){
    _glVertexAttrib4Nsv(args);
}

if (function_name.compare("glVertexAttrib4Nub") == 0){
    _glVertexAttrib4Nub(args);
}

if (function_name.compare("glVertexAttrib4Nubv") == 0){
    _glVertexAttrib4Nubv(args);
}

if (function_name.compare("glVertexAttrib4Nuiv") == 0){
    _glVertexAttrib4Nuiv(args);
}

if (function_name.compare("glVertexAttrib4Nusv") == 0){
    _glVertexAttrib4Nusv(args);
}

if (function_name.compare("glVertexAttrib4bv") == 0){
    _glVertexAttrib4bv(args);
}

if (function_name.compare("glVertexAttrib4d") == 0){
    _glVertexAttrib4d(args);
}

if (function_name.compare("glVertexAttrib4dv") == 0){
    _glVertexAttrib4dv(args);
}

if (function_name.compare("glVertexAttrib4f") == 0){
    _glVertexAttrib4f(args);
}

if (function_name.compare("glVertexAttrib4fv") == 0){
    _glVertexAttrib4fv(args);
}

if (function_name.compare("glVertexAttrib4iv") == 0){
    _glVertexAttrib4iv(args);
}

if (function_name.compare("glVertexAttrib4s") == 0){
    _glVertexAttrib4s(args);
}

if (function_name.compare("glVertexAttrib4sv") == 0){
    _glVertexAttrib4sv(args);
}

if (function_name.compare("glVertexAttrib4ubv") == 0){
    _glVertexAttrib4ubv(args);
}

if (function_name.compare("glVertexAttrib4uiv") == 0){
    _glVertexAttrib4uiv(args);
}

if (function_name.compare("glVertexAttrib4usv") == 0){
    _glVertexAttrib4usv(args);
}

if (function_name.compare("glVertexAttribPointer") == 0){
    _glVertexAttribPointer(args);
}

if (function_name.compare("glUniformMatrix2x3fv") == 0){
    _glUniformMatrix2x3fv(args);
}

if (function_name.compare("glUniformMatrix3x2fv") == 0){
    _glUniformMatrix3x2fv(args);
}

if (function_name.compare("glUniformMatrix2x4fv") == 0){
    _glUniformMatrix2x4fv(args);
}

if (function_name.compare("glUniformMatrix4x2fv") == 0){
    _glUniformMatrix4x2fv(args);
}

if (function_name.compare("glUniformMatrix3x4fv") == 0){
    _glUniformMatrix3x4fv(args);
}

if (function_name.compare("glUniformMatrix4x3fv") == 0){
    _glUniformMatrix4x3fv(args);
}

if (function_name.compare("glColorMaski") == 0){
    _glColorMaski(args);
}

if (function_name.compare("glGetBooleani_v") == 0){
    _glGetBooleani_v(args);
}

if (function_name.compare("glGetIntegeri_v") == 0){
    _glGetIntegeri_v(args);
}

if (function_name.compare("glEnablei") == 0){
    _glEnablei(args);
}

if (function_name.compare("glDisablei") == 0){
    _glDisablei(args);
}

if (function_name.compare("glIsEnabledi") == 0){
    return _glIsEnabledi(args);
}

if (function_name.compare("glBeginTransformFeedback") == 0){
    _glBeginTransformFeedback(args);
}

if (function_name.compare("glEndTransformFeedback") == 0){
    _glEndTransformFeedback();
}

if (function_name.compare("glBindBufferRange") == 0){
    _glBindBufferRange(args);
}

if (function_name.compare("glBindBufferBase") == 0){
    _glBindBufferBase(args);
}

if (function_name.compare("glTransformFeedbackVaryings") == 0){
    _glTransformFeedbackVaryings(args);
}

if (function_name.compare("glGetTransformFeedbackVarying") == 0){
    _glGetTransformFeedbackVarying(args);
}

if (function_name.compare("glClampColor") == 0){
    _glClampColor(args);
}

if (function_name.compare("glBeginConditionalRender") == 0){
    _glBeginConditionalRender(args);
}

if (function_name.compare("glEndConditionalRender") == 0){
    _glEndConditionalRender();
}

if (function_name.compare("glVertexAttribIPointer") == 0){
    _glVertexAttribIPointer(args);
}

if (function_name.compare("glGetVertexAttribIiv") == 0){
    _glGetVertexAttribIiv(args);
}

if (function_name.compare("glGetVertexAttribIuiv") == 0){
    _glGetVertexAttribIuiv(args);
}

if (function_name.compare("glVertexAttribI1i") == 0){
    _glVertexAttribI1i(args);
}

if (function_name.compare("glVertexAttribI2i") == 0){
    _glVertexAttribI2i(args);
}

if (function_name.compare("glVertexAttribI3i") == 0){
    _glVertexAttribI3i(args);
}

if (function_name.compare("glVertexAttribI4i") == 0){
    _glVertexAttribI4i(args);
}

if (function_name.compare("glVertexAttribI1ui") == 0){
    _glVertexAttribI1ui(args);
}

if (function_name.compare("glVertexAttribI2ui") == 0){
    _glVertexAttribI2ui(args);
}

if (function_name.compare("glVertexAttribI3ui") == 0){
    _glVertexAttribI3ui(args);
}

if (function_name.compare("glVertexAttribI4ui") == 0){
    _glVertexAttribI4ui(args);
}

if (function_name.compare("glVertexAttribI1iv") == 0){
    _glVertexAttribI1iv(args);
}

if (function_name.compare("glVertexAttribI2iv") == 0){
    _glVertexAttribI2iv(args);
}

if (function_name.compare("glVertexAttribI3iv") == 0){
    _glVertexAttribI3iv(args);
}

if (function_name.compare("glVertexAttribI4iv") == 0){
    _glVertexAttribI4iv(args);
}

if (function_name.compare("glVertexAttribI1uiv") == 0){
    _glVertexAttribI1uiv(args);
}

if (function_name.compare("glVertexAttribI2uiv") == 0){
    _glVertexAttribI2uiv(args);
}

if (function_name.compare("glVertexAttribI3uiv") == 0){
    _glVertexAttribI3uiv(args);
}

if (function_name.compare("glVertexAttribI4uiv") == 0){
    _glVertexAttribI4uiv(args);
}

if (function_name.compare("glVertexAttribI4bv") == 0){
    _glVertexAttribI4bv(args);
}

if (function_name.compare("glVertexAttribI4sv") == 0){
    _glVertexAttribI4sv(args);
}

if (function_name.compare("glVertexAttribI4ubv") == 0){
    _glVertexAttribI4ubv(args);
}

if (function_name.compare("glVertexAttribI4usv") == 0){
    _glVertexAttribI4usv(args);
}

if (function_name.compare("glGetUniformuiv") == 0){
    _glGetUniformuiv(args);
}

if (function_name.compare("glBindFragDataLocation") == 0){
    _glBindFragDataLocation(args);
}

if (function_name.compare("glGetFragDataLocation") == 0){
    return _glGetFragDataLocation(args);
}

if (function_name.compare("glUniform1ui") == 0){
    _glUniform1ui(args);
}

if (function_name.compare("glUniform2ui") == 0){
    _glUniform2ui(args);
}

if (function_name.compare("glUniform3ui") == 0){
    _glUniform3ui(args);
}

if (function_name.compare("glUniform4ui") == 0){
    _glUniform4ui(args);
}

if (function_name.compare("glUniform1uiv") == 0){
    _glUniform1uiv(args);
}

if (function_name.compare("glUniform2uiv") == 0){
    _glUniform2uiv(args);
}

if (function_name.compare("glUniform3uiv") == 0){
    _glUniform3uiv(args);
}

if (function_name.compare("glUniform4uiv") == 0){
    _glUniform4uiv(args);
}

if (function_name.compare("glTexParameterIiv") == 0){
    _glTexParameterIiv(args);
}

if (function_name.compare("glTexParameterIuiv") == 0){
    _glTexParameterIuiv(args);
}

if (function_name.compare("glGetTexParameterIiv") == 0){
    _glGetTexParameterIiv(args);
}

if (function_name.compare("glGetTexParameterIuiv") == 0){
    _glGetTexParameterIuiv(args);
}

if (function_name.compare("glClearBufferiv") == 0){
    _glClearBufferiv(args);
}

if (function_name.compare("glClearBufferuiv") == 0){
    _glClearBufferuiv(args);
}

if (function_name.compare("glClearBufferfv") == 0){
    _glClearBufferfv(args);
}

if (function_name.compare("glClearBufferfi") == 0){
    _glClearBufferfi(args);
}

if (function_name.compare("glGetStringi") == 0){
    return _glGetStringi(args);
}

if (function_name.compare("glDrawArraysInstanced") == 0){
    _glDrawArraysInstanced(args);
}

if (function_name.compare("glDrawElementsInstanced") == 0){
    _glDrawElementsInstanced(args);
}

if (function_name.compare("glTexBuffer") == 0){
    _glTexBuffer(args);
}

if (function_name.compare("glPrimitiveRestartIndex") == 0){
    _glPrimitiveRestartIndex(args);
}

if (function_name.compare("glGetInteger64i_v") == 0){
    _glGetInteger64i_v(args);
}

if (function_name.compare("glGetBufferParameteri64v") == 0){
    _glGetBufferParameteri64v(args);
}

if (function_name.compare("glFramebufferTexture") == 0){
    _glFramebufferTexture(args);
}

if (function_name.compare("glVertexAttribDivisor") == 0){
    _glVertexAttribDivisor(args);
}

if (function_name.compare("glMinSampleShading") == 0){
    _glMinSampleShading(args);
}

if (function_name.compare("glBlendEquationi") == 0){
    _glBlendEquationi(args);
}

if (function_name.compare("glBlendEquationSeparatei") == 0){
    _glBlendEquationSeparatei(args);
}

if (function_name.compare("glBlendFunci") == 0){
    _glBlendFunci(args);
}

if (function_name.compare("glBlendFuncSeparatei") == 0){
    _glBlendFuncSeparatei(args);
}

if (function_name.compare("glIsRenderbuffer") == 0){
    return _glIsRenderbuffer(args);
}

if (function_name.compare("glBindRenderbuffer") == 0){
    _glBindRenderbuffer(args);
}

if (function_name.compare("glDeleteRenderbuffers") == 0){
    _glDeleteRenderbuffers(args);
}

if (function_name.compare("glGenRenderbuffers") == 0){
    _glGenRenderbuffers(args);
}

if (function_name.compare("glRenderbufferStorage") == 0){
    _glRenderbufferStorage(args);
}

if (function_name.compare("glGetRenderbufferParameteriv") == 0){
    _glGetRenderbufferParameteriv(args);
}

if (function_name.compare("glIsFramebuffer") == 0){
    return _glIsFramebuffer(args);
}

if (function_name.compare("glBindFramebuffer") == 0){
    _glBindFramebuffer(args);
}

if (function_name.compare("glDeleteFramebuffers") == 0){
    _glDeleteFramebuffers(args);
}

if (function_name.compare("glGenFramebuffers") == 0){
    _glGenFramebuffers(args);
}

if (function_name.compare("glCheckFramebufferStatus") == 0){
    return _glCheckFramebufferStatus(args);
}

if (function_name.compare("glFramebufferTexture1D") == 0){
    _glFramebufferTexture1D(args);
}

if (function_name.compare("glFramebufferTexture2D") == 0){
    _glFramebufferTexture2D(args);
}

if (function_name.compare("glFramebufferTexture3D") == 0){
    _glFramebufferTexture3D(args);
}

if (function_name.compare("glFramebufferRenderbuffer") == 0){
    _glFramebufferRenderbuffer(args);
}

if (function_name.compare("glGetFramebufferAttachmentParameteriv") == 0){
    _glGetFramebufferAttachmentParameteriv(args);
}

if (function_name.compare("glGenerateMipmap") == 0){
    _glGenerateMipmap(args);
}

if (function_name.compare("glBlitFramebuffer") == 0){
    _glBlitFramebuffer(args);
}

if (function_name.compare("glRenderbufferStorageMultisample") == 0){
    _glRenderbufferStorageMultisample(args);
}

if (function_name.compare("glFramebufferTextureLayer") == 0){
    _glFramebufferTextureLayer(args);
}

if (function_name.compare("glMapBufferRange") == 0){
    return _glMapBufferRange(args);
}

if (function_name.compare("glFlushMappedBufferRange") == 0){
    _glFlushMappedBufferRange(args);
}

if (function_name.compare("glBindVertexArray") == 0){
    _glBindVertexArray(args);
}

if (function_name.compare("glDeleteVertexArrays") == 0){
    _glDeleteVertexArrays(args);
}

if (function_name.compare("glGenVertexArrays") == 0){
    _glGenVertexArrays(args);
}

if (function_name.compare("glIsVertexArray") == 0){
    return _glIsVertexArray(args);
}

if (function_name.compare("glGetUniformIndices") == 0){
    _glGetUniformIndices(args);
}

if (function_name.compare("glGetActiveUniformsiv") == 0){
    _glGetActiveUniformsiv(args);
}

if (function_name.compare("glGetActiveUniformName") == 0){
    _glGetActiveUniformName(args);
}

if (function_name.compare("glGetUniformBlockIndex") == 0){
    return _glGetUniformBlockIndex(args);
}

if (function_name.compare("glGetActiveUniformBlockiv") == 0){
    _glGetActiveUniformBlockiv(args);
}

if (function_name.compare("glGetActiveUniformBlockName") == 0){
    _glGetActiveUniformBlockName(args);
}

if (function_name.compare("glUniformBlockBinding") == 0){
    _glUniformBlockBinding(args);
}

if (function_name.compare("glCopyBufferSubData") == 0){
    _glCopyBufferSubData(args);
}

if (function_name.compare("glDrawElementsBaseVertex") == 0){
    _glDrawElementsBaseVertex(args);
}

if (function_name.compare("glDrawRangeElementsBaseVertex") == 0){
    _glDrawRangeElementsBaseVertex(args);
}

if (function_name.compare("glDrawElementsInstancedBaseVertex") == 0){
    _glDrawElementsInstancedBaseVertex(args);
}

if (function_name.compare("glMultiDrawElementsBaseVertex") == 0){
    _glMultiDrawElementsBaseVertex(args);
}

if (function_name.compare("glProvokingVertex") == 0){
    _glProvokingVertex(args);
}

if (function_name.compare("glGetInteger64v") == 0){
    _glGetInteger64v(args);
}

if (function_name.compare("glTexImage2DMultisample") == 0){
    _glTexImage2DMultisample(args);
}

if (function_name.compare("glTexImage3DMultisample") == 0){
    _glTexImage3DMultisample(args);
}

if (function_name.compare("glGetMultisamplefv") == 0){
    _glGetMultisamplefv(args);
}

if (function_name.compare("glSampleMaski") == 0){
    _glSampleMaski(args);
}

if (function_name.compare("glBindFragDataLocationIndexed") == 0){
    _glBindFragDataLocationIndexed(args);
}

if (function_name.compare("glGetFragDataIndex") == 0){
    return _glGetFragDataIndex(args);
}

if (function_name.compare("glGenSamplers") == 0){
    _glGenSamplers(args);
}

if (function_name.compare("glDeleteSamplers") == 0){
    _glDeleteSamplers(args);
}

if (function_name.compare("glIsSampler") == 0){
    return _glIsSampler(args);
}

if (function_name.compare("glBindSampler") == 0){
    _glBindSampler(args);
}

if (function_name.compare("glSamplerParameteri") == 0){
    _glSamplerParameteri(args);
}

if (function_name.compare("glSamplerParameteriv") == 0){
    _glSamplerParameteriv(args);
}

if (function_name.compare("glSamplerParameterf") == 0){
    _glSamplerParameterf(args);
}

if (function_name.compare("glSamplerParameterfv") == 0){
    _glSamplerParameterfv(args);
}

if (function_name.compare("glSamplerParameterIiv") == 0){
    _glSamplerParameterIiv(args);
}

if (function_name.compare("glSamplerParameterIuiv") == 0){
    _glSamplerParameterIuiv(args);
}

if (function_name.compare("glGetSamplerParameteriv") == 0){
    _glGetSamplerParameteriv(args);
}

if (function_name.compare("glGetSamplerParameterIiv") == 0){
    _glGetSamplerParameterIiv(args);
}

if (function_name.compare("glGetSamplerParameterfv") == 0){
    _glGetSamplerParameterfv(args);
}

if (function_name.compare("glGetSamplerParameterIuiv") == 0){
    _glGetSamplerParameterIuiv(args);
}

if (function_name.compare("glQueryCounter") == 0){
    _glQueryCounter(args);
}

if (function_name.compare("glGetQueryObjecti64v") == 0){
    _glGetQueryObjecti64v(args);
}

if (function_name.compare("glGetQueryObjectui64v") == 0){
    _glGetQueryObjectui64v(args);
}

if (function_name.compare("glVertexAttribP1ui") == 0){
    _glVertexAttribP1ui(args);
}

if (function_name.compare("glVertexAttribP1uiv") == 0){
    _glVertexAttribP1uiv(args);
}

if (function_name.compare("glVertexAttribP2ui") == 0){
    _glVertexAttribP2ui(args);
}

if (function_name.compare("glVertexAttribP2uiv") == 0){
    _glVertexAttribP2uiv(args);
}

if (function_name.compare("glVertexAttribP3ui") == 0){
    _glVertexAttribP3ui(args);
}

if (function_name.compare("glVertexAttribP3uiv") == 0){
    _glVertexAttribP3uiv(args);
}

if (function_name.compare("glVertexAttribP4ui") == 0){
    _glVertexAttribP4ui(args);
}

if (function_name.compare("glVertexAttribP4uiv") == 0){
    _glVertexAttribP4uiv(args);
}

if (function_name.compare("glDrawArraysIndirect") == 0){
    _glDrawArraysIndirect(args);
}

if (function_name.compare("glDrawElementsIndirect") == 0){
    _glDrawElementsIndirect(args);
}

if (function_name.compare("glUniform1d") == 0){
    _glUniform1d(args);
}

if (function_name.compare("glUniform2d") == 0){
    _glUniform2d(args);
}

if (function_name.compare("glUniform3d") == 0){
    _glUniform3d(args);
}

if (function_name.compare("glUniform4d") == 0){
    _glUniform4d(args);
}

if (function_name.compare("glUniform1dv") == 0){
    _glUniform1dv(args);
}

if (function_name.compare("glUniform2dv") == 0){
    _glUniform2dv(args);
}

if (function_name.compare("glUniform3dv") == 0){
    _glUniform3dv(args);
}

if (function_name.compare("glUniform4dv") == 0){
    _glUniform4dv(args);
}

if (function_name.compare("glUniformMatrix2dv") == 0){
    _glUniformMatrix2dv(args);
}

if (function_name.compare("glUniformMatrix3dv") == 0){
    _glUniformMatrix3dv(args);
}

if (function_name.compare("glUniformMatrix4dv") == 0){
    _glUniformMatrix4dv(args);
}

if (function_name.compare("glUniformMatrix2x3dv") == 0){
    _glUniformMatrix2x3dv(args);
}

if (function_name.compare("glUniformMatrix2x4dv") == 0){
    _glUniformMatrix2x4dv(args);
}

if (function_name.compare("glUniformMatrix3x2dv") == 0){
    _glUniformMatrix3x2dv(args);
}

if (function_name.compare("glUniformMatrix3x4dv") == 0){
    _glUniformMatrix3x4dv(args);
}

if (function_name.compare("glUniformMatrix4x2dv") == 0){
    _glUniformMatrix4x2dv(args);
}

if (function_name.compare("glUniformMatrix4x3dv") == 0){
    _glUniformMatrix4x3dv(args);
}

if (function_name.compare("glGetUniformdv") == 0){
    _glGetUniformdv(args);
}

if (function_name.compare("glGetSubroutineUniformLocation") == 0){
    return _glGetSubroutineUniformLocation(args);
}

if (function_name.compare("glGetSubroutineIndex") == 0){
    return _glGetSubroutineIndex(args);
}

if (function_name.compare("glGetActiveSubroutineUniformiv") == 0){
    _glGetActiveSubroutineUniformiv(args);
}

if (function_name.compare("glGetActiveSubroutineUniformName") == 0){
    _glGetActiveSubroutineUniformName(args);
}

if (function_name.compare("glGetActiveSubroutineName") == 0){
    _glGetActiveSubroutineName(args);
}

if (function_name.compare("glUniformSubroutinesuiv") == 0){
    _glUniformSubroutinesuiv(args);
}

if (function_name.compare("glGetUniformSubroutineuiv") == 0){
    _glGetUniformSubroutineuiv(args);
}

if (function_name.compare("glGetProgramStageiv") == 0){
    _glGetProgramStageiv(args);
}

if (function_name.compare("glPatchParameteri") == 0){
    _glPatchParameteri(args);
}

if (function_name.compare("glPatchParameterfv") == 0){
    _glPatchParameterfv(args);
}

if (function_name.compare("glBindTransformFeedback") == 0){
    _glBindTransformFeedback(args);
}

if (function_name.compare("glDeleteTransformFeedbacks") == 0){
    _glDeleteTransformFeedbacks(args);
}

if (function_name.compare("glGenTransformFeedbacks") == 0){
    _glGenTransformFeedbacks(args);
}

if (function_name.compare("glIsTransformFeedback") == 0){
    return _glIsTransformFeedback(args);
}

if (function_name.compare("glPauseTransformFeedback") == 0){
    _glPauseTransformFeedback();
}

if (function_name.compare("glResumeTransformFeedback") == 0){
    _glResumeTransformFeedback();
}

if (function_name.compare("glDrawTransformFeedback") == 0){
    _glDrawTransformFeedback(args);
}

if (function_name.compare("glDrawTransformFeedbackStream") == 0){
    _glDrawTransformFeedbackStream(args);
}

if (function_name.compare("glBeginQueryIndexed") == 0){
    _glBeginQueryIndexed(args);
}

if (function_name.compare("glEndQueryIndexed") == 0){
    _glEndQueryIndexed(args);
}

if (function_name.compare("glGetQueryIndexediv") == 0){
    _glGetQueryIndexediv(args);
}

if (function_name.compare("glReleaseShaderCompiler") == 0){
    _glReleaseShaderCompiler();
}

if (function_name.compare("glShaderBinary") == 0){
    _glShaderBinary(args);
}

if (function_name.compare("glGetShaderPrecisionFormat") == 0){
    _glGetShaderPrecisionFormat(args);
}

if (function_name.compare("glDepthRangef") == 0){
    _glDepthRangef(args);
}

if (function_name.compare("glClearDepthf") == 0){
    _glClearDepthf(args);
}

if (function_name.compare("glGetProgramBinary") == 0){
    _glGetProgramBinary(args);
}

if (function_name.compare("glProgramBinary") == 0){
    _glProgramBinary(args);
}

if (function_name.compare("glProgramParameteri") == 0){
    _glProgramParameteri(args);
}

if (function_name.compare("glUseProgramStages") == 0){
    _glUseProgramStages(args);
}

if (function_name.compare("glActiveShaderProgram") == 0){
    _glActiveShaderProgram(args);
}

if (function_name.compare("glCreateShaderProgramv") == 0){
    return _glCreateShaderProgramv(args);
}

if (function_name.compare("glBindProgramPipeline") == 0){
    _glBindProgramPipeline(args);
}

if (function_name.compare("glDeleteProgramPipelines") == 0){
    _glDeleteProgramPipelines(args);
}

if (function_name.compare("glGenProgramPipelines") == 0){
    _glGenProgramPipelines(args);
}

if (function_name.compare("glIsProgramPipeline") == 0){
    return _glIsProgramPipeline(args);
}

if (function_name.compare("glGetProgramPipelineiv") == 0){
    _glGetProgramPipelineiv(args);
}

if (function_name.compare("glProgramUniform1i") == 0){
    _glProgramUniform1i(args);
}

if (function_name.compare("glProgramUniform1iv") == 0){
    _glProgramUniform1iv(args);
}

if (function_name.compare("glProgramUniform1f") == 0){
    _glProgramUniform1f(args);
}

if (function_name.compare("glProgramUniform1fv") == 0){
    _glProgramUniform1fv(args);
}

if (function_name.compare("glProgramUniform1d") == 0){
    _glProgramUniform1d(args);
}

if (function_name.compare("glProgramUniform1dv") == 0){
    _glProgramUniform1dv(args);
}

if (function_name.compare("glProgramUniform1ui") == 0){
    _glProgramUniform1ui(args);
}

if (function_name.compare("glProgramUniform1uiv") == 0){
    _glProgramUniform1uiv(args);
}

if (function_name.compare("glProgramUniform2i") == 0){
    _glProgramUniform2i(args);
}

if (function_name.compare("glProgramUniform2iv") == 0){
    _glProgramUniform2iv(args);
}

if (function_name.compare("glProgramUniform2f") == 0){
    _glProgramUniform2f(args);
}

if (function_name.compare("glProgramUniform2fv") == 0){
    _glProgramUniform2fv(args);
}

if (function_name.compare("glProgramUniform2d") == 0){
    _glProgramUniform2d(args);
}

if (function_name.compare("glProgramUniform2dv") == 0){
    _glProgramUniform2dv(args);
}

if (function_name.compare("glProgramUniform2ui") == 0){
    _glProgramUniform2ui(args);
}

if (function_name.compare("glProgramUniform2uiv") == 0){
    _glProgramUniform2uiv(args);
}

if (function_name.compare("glProgramUniform3i") == 0){
    _glProgramUniform3i(args);
}

if (function_name.compare("glProgramUniform3iv") == 0){
    _glProgramUniform3iv(args);
}

if (function_name.compare("glProgramUniform3f") == 0){
    _glProgramUniform3f(args);
}

if (function_name.compare("glProgramUniform3fv") == 0){
    _glProgramUniform3fv(args);
}

if (function_name.compare("glProgramUniform3d") == 0){
    _glProgramUniform3d(args);
}

if (function_name.compare("glProgramUniform3dv") == 0){
    _glProgramUniform3dv(args);
}

if (function_name.compare("glProgramUniform3ui") == 0){
    _glProgramUniform3ui(args);
}

if (function_name.compare("glProgramUniform3uiv") == 0){
    _glProgramUniform3uiv(args);
}

if (function_name.compare("glProgramUniform4i") == 0){
    _glProgramUniform4i(args);
}

if (function_name.compare("glProgramUniform4iv") == 0){
    _glProgramUniform4iv(args);
}

if (function_name.compare("glProgramUniform4f") == 0){
    _glProgramUniform4f(args);
}

if (function_name.compare("glProgramUniform4fv") == 0){
    _glProgramUniform4fv(args);
}

if (function_name.compare("glProgramUniform4d") == 0){
    _glProgramUniform4d(args);
}

if (function_name.compare("glProgramUniform4dv") == 0){
    _glProgramUniform4dv(args);
}

if (function_name.compare("glProgramUniform4ui") == 0){
    _glProgramUniform4ui(args);
}

if (function_name.compare("glProgramUniform4uiv") == 0){
    _glProgramUniform4uiv(args);
}

if (function_name.compare("glProgramUniformMatrix2fv") == 0){
    _glProgramUniformMatrix2fv(args);
}

if (function_name.compare("glProgramUniformMatrix3fv") == 0){
    _glProgramUniformMatrix3fv(args);
}

if (function_name.compare("glProgramUniformMatrix4fv") == 0){
    _glProgramUniformMatrix4fv(args);
}

if (function_name.compare("glProgramUniformMatrix2dv") == 0){
    _glProgramUniformMatrix2dv(args);
}

if (function_name.compare("glProgramUniformMatrix3dv") == 0){
    _glProgramUniformMatrix3dv(args);
}

if (function_name.compare("glProgramUniformMatrix4dv") == 0){
    _glProgramUniformMatrix4dv(args);
}

if (function_name.compare("glProgramUniformMatrix2x3fv") == 0){
    _glProgramUniformMatrix2x3fv(args);
}

if (function_name.compare("glProgramUniformMatrix3x2fv") == 0){
    _glProgramUniformMatrix3x2fv(args);
}

if (function_name.compare("glProgramUniformMatrix2x4fv") == 0){
    _glProgramUniformMatrix2x4fv(args);
}

if (function_name.compare("glProgramUniformMatrix4x2fv") == 0){
    _glProgramUniformMatrix4x2fv(args);
}

if (function_name.compare("glProgramUniformMatrix3x4fv") == 0){
    _glProgramUniformMatrix3x4fv(args);
}

if (function_name.compare("glProgramUniformMatrix4x3fv") == 0){
    _glProgramUniformMatrix4x3fv(args);
}

if (function_name.compare("glProgramUniformMatrix2x3dv") == 0){
    _glProgramUniformMatrix2x3dv(args);
}

if (function_name.compare("glProgramUniformMatrix3x2dv") == 0){
    _glProgramUniformMatrix3x2dv(args);
}

if (function_name.compare("glProgramUniformMatrix2x4dv") == 0){
    _glProgramUniformMatrix2x4dv(args);
}

if (function_name.compare("glProgramUniformMatrix4x2dv") == 0){
    _glProgramUniformMatrix4x2dv(args);
}

if (function_name.compare("glProgramUniformMatrix3x4dv") == 0){
    _glProgramUniformMatrix3x4dv(args);
}

if (function_name.compare("glProgramUniformMatrix4x3dv") == 0){
    _glProgramUniformMatrix4x3dv(args);
}

if (function_name.compare("glValidateProgramPipeline") == 0){
    _glValidateProgramPipeline(args);
}

if (function_name.compare("glGetProgramPipelineInfoLog") == 0){
    _glGetProgramPipelineInfoLog(args);
}

if (function_name.compare("glVertexAttribL1d") == 0){
    _glVertexAttribL1d(args);
}

if (function_name.compare("glVertexAttribL2d") == 0){
    _glVertexAttribL2d(args);
}

if (function_name.compare("glVertexAttribL3d") == 0){
    _glVertexAttribL3d(args);
}

if (function_name.compare("glVertexAttribL4d") == 0){
    _glVertexAttribL4d(args);
}

if (function_name.compare("glVertexAttribL1dv") == 0){
    _glVertexAttribL1dv(args);
}

if (function_name.compare("glVertexAttribL2dv") == 0){
    _glVertexAttribL2dv(args);
}

if (function_name.compare("glVertexAttribL3dv") == 0){
    _glVertexAttribL3dv(args);
}

if (function_name.compare("glVertexAttribL4dv") == 0){
    _glVertexAttribL4dv(args);
}

if (function_name.compare("glVertexAttribLPointer") == 0){
    _glVertexAttribLPointer(args);
}

if (function_name.compare("glGetVertexAttribLdv") == 0){
    _glGetVertexAttribLdv(args);
}

if (function_name.compare("glViewportArrayv") == 0){
    _glViewportArrayv(args);
}

if (function_name.compare("glViewportIndexedf") == 0){
    _glViewportIndexedf(args);
}

if (function_name.compare("glViewportIndexedfv") == 0){
    _glViewportIndexedfv(args);
}

if (function_name.compare("glScissorArrayv") == 0){
    _glScissorArrayv(args);
}

if (function_name.compare("glScissorIndexed") == 0){
    _glScissorIndexed(args);
}

if (function_name.compare("glScissorIndexedv") == 0){
    _glScissorIndexedv(args);
}

if (function_name.compare("glDepthRangeArrayv") == 0){
    _glDepthRangeArrayv(args);
}

if (function_name.compare("glDepthRangeIndexed") == 0){
    _glDepthRangeIndexed(args);
}

if (function_name.compare("glGetFloati_v") == 0){
    _glGetFloati_v(args);
}

if (function_name.compare("glGetDoublei_v") == 0){
    _glGetDoublei_v(args);
}

}}

auto& get_function_types_map(){
        
static std::map<std::string, std::pair<std::vector<wasmtime::ValType>, int>> function_types_map = {
{"glCullFace", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glFrontFace", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glHint", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glLineWidth", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glPointSize", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glPolygonMode", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glScissor", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glTexParameterf", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glTexParameterfv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glTexParameteri", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glTexParameteriv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glTexImage1D", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glTexImage2D", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glDrawBuffer", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glClear", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glClearColor", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glClearStencil", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glClearDepth", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glStencilMask", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glColorMask", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glDepthMask", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glDisable", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glEnable", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glFinish", std::make_pair<std::vector<wasmtime::ValType>, int>({}, static_cast<int>(-1)) },
{"glFlush", std::make_pair<std::vector<wasmtime::ValType>, int>({}, static_cast<int>(-1)) },
{"glBlendFunc", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glLogicOp", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glStencilFunc", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glStencilOp", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glDepthFunc", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glPixelStoref", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glPixelStorei", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glReadBuffer", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glReadPixels", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetBooleanv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetDoublev", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetError", std::make_pair<std::vector<wasmtime::ValType>, int>({}, static_cast<int>(wasmtime::ValType(wasmtime::ValKind::I32)->kind())) },
{"glGetFloatv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetIntegerv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetString", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(wasmtime::ValType(wasmtime::ValKind::I32)->kind())) },
{"glGetTexImage", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetTexParameterfv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetTexParameteriv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetTexLevelParameterfv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetTexLevelParameteriv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glIsEnabled", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(wasmtime::ValType(wasmtime::ValKind::I32)->kind())) },
{"glDepthRange", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glViewport", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glDrawArrays", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glDrawElements", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glPolygonOffset", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glCopyTexImage1D", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glCopyTexImage2D", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glCopyTexSubImage1D", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glCopyTexSubImage2D", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glTexSubImage1D", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glTexSubImage2D", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glBindTexture", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glDeleteTextures", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGenTextures", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glIsTexture", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(wasmtime::ValType(wasmtime::ValKind::I32)->kind())) },
{"glBlendColor", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glBlendEquation", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glDrawRangeElements", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glTexImage3D", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glTexSubImage3D", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glCopyTexSubImage3D", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glActiveTexture", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glSampleCoverage", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glCompressedTexImage3D", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glCompressedTexImage2D", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glCompressedTexImage1D", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glCompressedTexSubImage3D", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glCompressedTexSubImage2D", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glCompressedTexSubImage1D", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetCompressedTexImage", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glBlendFuncSeparate", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glMultiDrawArrays", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glMultiDrawElements", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glPointParameterf", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glPointParameterfv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glPointParameteri", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glPointParameteriv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGenQueries", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glDeleteQueries", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glIsQuery", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(wasmtime::ValType(wasmtime::ValKind::I32)->kind())) },
{"glBeginQuery", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glEndQuery", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetQueryiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetQueryObjectiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetQueryObjectuiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glBindBuffer", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glDeleteBuffers", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGenBuffers", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glIsBuffer", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(wasmtime::ValType(wasmtime::ValKind::I32)->kind())) },
{"glBufferData", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glBufferSubData", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetBufferSubData", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glMapBuffer", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(wasmtime::ValType(wasmtime::ValKind::I32)->kind())) },
{"glUnmapBuffer", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(wasmtime::ValType(wasmtime::ValKind::I32)->kind())) },
{"glGetBufferParameteriv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetBufferPointerv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glBlendEquationSeparate", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glDrawBuffers", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glStencilOpSeparate", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glStencilFuncSeparate", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glStencilMaskSeparate", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glAttachShader", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glBindAttribLocation", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glCompileShader", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glCreateProgram", std::make_pair<std::vector<wasmtime::ValType>, int>({}, static_cast<int>(wasmtime::ValType(wasmtime::ValKind::I32)->kind())) },
{"glCreateShader", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(wasmtime::ValType(wasmtime::ValKind::I32)->kind())) },
{"glDeleteProgram", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glDeleteShader", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glDetachShader", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glDisableVertexAttribArray", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glEnableVertexAttribArray", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetActiveAttrib", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetActiveUniform", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetAttachedShaders", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetAttribLocation", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(wasmtime::ValType(wasmtime::ValKind::I32)->kind())) },
{"glGetProgramiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetProgramInfoLog", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetShaderiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetShaderInfoLog", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetShaderSource", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetUniformLocation", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(wasmtime::ValType(wasmtime::ValKind::I32)->kind())) },
{"glGetUniformfv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetUniformiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetVertexAttribdv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetVertexAttribfv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetVertexAttribiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetVertexAttribPointerv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glIsProgram", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(wasmtime::ValType(wasmtime::ValKind::I32)->kind())) },
{"glIsShader", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(wasmtime::ValType(wasmtime::ValKind::I32)->kind())) },
{"glLinkProgram", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glShaderSource", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUseProgram", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniform1f", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glUniform2f", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glUniform3f", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glUniform4f", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glUniform1i", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniform2i", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniform3i", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniform4i", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniform1fv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniform2fv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniform3fv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniform4fv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniform1iv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniform2iv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniform3iv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniform4iv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniformMatrix2fv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniformMatrix3fv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniformMatrix4fv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glValidateProgram", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttrib1d", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glVertexAttrib1dv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttrib1f", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glVertexAttrib1fv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttrib1s", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttrib1sv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttrib2d", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glVertexAttrib2dv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttrib2f", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glVertexAttrib2fv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttrib2s", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttrib2sv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttrib3d", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glVertexAttrib3dv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttrib3f", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glVertexAttrib3fv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttrib3s", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttrib3sv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttrib4Nbv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttrib4Niv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttrib4Nsv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttrib4Nub", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttrib4Nubv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttrib4Nuiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttrib4Nusv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttrib4bv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttrib4d", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glVertexAttrib4dv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttrib4f", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glVertexAttrib4fv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttrib4iv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttrib4s", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttrib4sv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttrib4ubv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttrib4uiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttrib4usv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttribPointer", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniformMatrix2x3fv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniformMatrix3x2fv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniformMatrix2x4fv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniformMatrix4x2fv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniformMatrix3x4fv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniformMatrix4x3fv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glColorMaski", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetBooleani_v", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetIntegeri_v", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glEnablei", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glDisablei", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glIsEnabledi", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(wasmtime::ValType(wasmtime::ValKind::I32)->kind())) },
{"glBeginTransformFeedback", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glEndTransformFeedback", std::make_pair<std::vector<wasmtime::ValType>, int>({}, static_cast<int>(-1)) },
{"glBindBufferRange", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glBindBufferBase", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glTransformFeedbackVaryings", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetTransformFeedbackVarying", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glClampColor", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glBeginConditionalRender", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glEndConditionalRender", std::make_pair<std::vector<wasmtime::ValType>, int>({}, static_cast<int>(-1)) },
{"glVertexAttribIPointer", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetVertexAttribIiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetVertexAttribIuiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttribI1i", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttribI2i", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttribI3i", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttribI4i", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttribI1ui", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttribI2ui", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttribI3ui", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttribI4ui", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttribI1iv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttribI2iv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttribI3iv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttribI4iv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttribI1uiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttribI2uiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttribI3uiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttribI4uiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttribI4bv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttribI4sv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttribI4ubv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttribI4usv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetUniformuiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glBindFragDataLocation", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetFragDataLocation", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(wasmtime::ValType(wasmtime::ValKind::I32)->kind())) },
{"glUniform1ui", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniform2ui", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniform3ui", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniform4ui", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniform1uiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniform2uiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniform3uiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniform4uiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glTexParameterIiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glTexParameterIuiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetTexParameterIiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetTexParameterIuiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glClearBufferiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glClearBufferuiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glClearBufferfv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glClearBufferfi", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetStringi", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(wasmtime::ValType(wasmtime::ValKind::I32)->kind())) },
{"glDrawArraysInstanced", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glDrawElementsInstanced", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glTexBuffer", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glPrimitiveRestartIndex", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetInteger64i_v", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetBufferParameteri64v", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glFramebufferTexture", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttribDivisor", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glMinSampleShading", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glBlendEquationi", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glBlendEquationSeparatei", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glBlendFunci", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glBlendFuncSeparatei", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glIsRenderbuffer", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(wasmtime::ValType(wasmtime::ValKind::I32)->kind())) },
{"glBindRenderbuffer", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glDeleteRenderbuffers", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGenRenderbuffers", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glRenderbufferStorage", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetRenderbufferParameteriv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glIsFramebuffer", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(wasmtime::ValType(wasmtime::ValKind::I32)->kind())) },
{"glBindFramebuffer", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glDeleteFramebuffers", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGenFramebuffers", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glCheckFramebufferStatus", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(wasmtime::ValType(wasmtime::ValKind::I32)->kind())) },
{"glFramebufferTexture1D", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glFramebufferTexture2D", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glFramebufferTexture3D", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glFramebufferRenderbuffer", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetFramebufferAttachmentParameteriv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGenerateMipmap", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glBlitFramebuffer", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glRenderbufferStorageMultisample", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glFramebufferTextureLayer", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glMapBufferRange", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(wasmtime::ValType(wasmtime::ValKind::I32)->kind())) },
{"glFlushMappedBufferRange", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glBindVertexArray", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glDeleteVertexArrays", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGenVertexArrays", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glIsVertexArray", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(wasmtime::ValType(wasmtime::ValKind::I32)->kind())) },
{"glGetUniformIndices", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetActiveUniformsiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetActiveUniformName", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetUniformBlockIndex", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(wasmtime::ValType(wasmtime::ValKind::I32)->kind())) },
{"glGetActiveUniformBlockiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetActiveUniformBlockName", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniformBlockBinding", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glCopyBufferSubData", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glDrawElementsBaseVertex", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glDrawRangeElementsBaseVertex", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glDrawElementsInstancedBaseVertex", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glMultiDrawElementsBaseVertex", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProvokingVertex", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetInteger64v", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glTexImage2DMultisample", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glTexImage3DMultisample", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetMultisamplefv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glSampleMaski", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glBindFragDataLocationIndexed", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetFragDataIndex", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(wasmtime::ValType(wasmtime::ValKind::I32)->kind())) },
{"glGenSamplers", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glDeleteSamplers", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glIsSampler", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(wasmtime::ValType(wasmtime::ValKind::I32)->kind())) },
{"glBindSampler", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glSamplerParameteri", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glSamplerParameteriv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glSamplerParameterf", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glSamplerParameterfv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glSamplerParameterIiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glSamplerParameterIuiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetSamplerParameteriv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetSamplerParameterIiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetSamplerParameterfv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetSamplerParameterIuiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glQueryCounter", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetQueryObjecti64v", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetQueryObjectui64v", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttribP1ui", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttribP1uiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttribP2ui", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttribP2uiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttribP3ui", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttribP3uiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttribP4ui", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttribP4uiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glDrawArraysIndirect", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glDrawElementsIndirect", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniform1d", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glUniform2d", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glUniform3d", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glUniform4d", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glUniform1dv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniform2dv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniform3dv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniform4dv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniformMatrix2dv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniformMatrix3dv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniformMatrix4dv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniformMatrix2x3dv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniformMatrix2x4dv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniformMatrix3x2dv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniformMatrix3x4dv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniformMatrix4x2dv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniformMatrix4x3dv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetUniformdv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetSubroutineUniformLocation", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(wasmtime::ValType(wasmtime::ValKind::I32)->kind())) },
{"glGetSubroutineIndex", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(wasmtime::ValType(wasmtime::ValKind::I32)->kind())) },
{"glGetActiveSubroutineUniformiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetActiveSubroutineUniformName", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetActiveSubroutineName", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUniformSubroutinesuiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetUniformSubroutineuiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetProgramStageiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glPatchParameteri", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glPatchParameterfv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glBindTransformFeedback", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glDeleteTransformFeedbacks", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGenTransformFeedbacks", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glIsTransformFeedback", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(wasmtime::ValType(wasmtime::ValKind::I32)->kind())) },
{"glPauseTransformFeedback", std::make_pair<std::vector<wasmtime::ValType>, int>({}, static_cast<int>(-1)) },
{"glResumeTransformFeedback", std::make_pair<std::vector<wasmtime::ValType>, int>({}, static_cast<int>(-1)) },
{"glDrawTransformFeedback", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glDrawTransformFeedbackStream", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glBeginQueryIndexed", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glEndQueryIndexed", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetQueryIndexediv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glReleaseShaderCompiler", std::make_pair<std::vector<wasmtime::ValType>, int>({}, static_cast<int>(-1)) },
{"glShaderBinary", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetShaderPrecisionFormat", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glDepthRangef", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glClearDepthf", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glGetProgramBinary", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramBinary", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramParameteri", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glUseProgramStages", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glActiveShaderProgram", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glCreateShaderProgramv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(wasmtime::ValType(wasmtime::ValKind::I32)->kind())) },
{"glBindProgramPipeline", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glDeleteProgramPipelines", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGenProgramPipelines", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glIsProgramPipeline", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(wasmtime::ValType(wasmtime::ValKind::I32)->kind())) },
{"glGetProgramPipelineiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniform1i", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniform1iv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniform1f", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glProgramUniform1fv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniform1d", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glProgramUniform1dv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniform1ui", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniform1uiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniform2i", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniform2iv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniform2f", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glProgramUniform2fv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniform2d", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glProgramUniform2dv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniform2ui", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniform2uiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniform3i", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniform3iv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniform3f", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glProgramUniform3fv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniform3d", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glProgramUniform3dv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniform3ui", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniform3uiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniform4i", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniform4iv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniform4f", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glProgramUniform4fv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniform4d", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glProgramUniform4dv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniform4ui", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniform4uiv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniformMatrix2fv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniformMatrix3fv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniformMatrix4fv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniformMatrix2dv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniformMatrix3dv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniformMatrix4dv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniformMatrix2x3fv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniformMatrix3x2fv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniformMatrix2x4fv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniformMatrix4x2fv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniformMatrix3x4fv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniformMatrix4x3fv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniformMatrix2x3dv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniformMatrix3x2dv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniformMatrix2x4dv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniformMatrix4x2dv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniformMatrix3x4dv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glProgramUniformMatrix4x3dv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glValidateProgramPipeline", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetProgramPipelineInfoLog", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttribL1d", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glVertexAttribL2d", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glVertexAttribL3d", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glVertexAttribL4d", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glVertexAttribL1dv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttribL2dv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttribL3dv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttribL4dv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glVertexAttribLPointer", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetVertexAttribLdv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glViewportArrayv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glViewportIndexedf", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glViewportIndexedfv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glScissorArrayv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glScissorIndexed", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glScissorIndexedv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glDepthRangeArrayv", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glDepthRangeIndexed", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::F32), wasmtime::ValType(wasmtime::ValKind::F32)}, static_cast<int>(-1)) },
{"glGetFloati_v", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) },
{"glGetDoublei_v", std::make_pair<std::vector<wasmtime::ValType>, int>({wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32), wasmtime::ValType(wasmtime::ValKind::I32)}, static_cast<int>(-1)) }
};
        
return function_types_map;
        
}
        
        
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

