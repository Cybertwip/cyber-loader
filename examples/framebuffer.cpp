// CPP program to render a triangle using Shaders

extern "C"{
#include "tgc.h"
}

#include <glad/glad.h>

#include "gl2_import.h"

#include <cmath>
#include <iostream>

static tgc_t gc;

__attribute__((export_name("allocate")))
void* c_allocate(size_t size){
	return tgc_alloc(&gc, size);
}

struct initVars{
    int vbo = 0;
    int vao = 0;
    GLuint shader_programme = 0;
    const char* vertex_shader =
            "#version 330 core\n"
            "layout (location = 0) in vec3 vp;"
            "void main() {"
            "  gl_Position = vec4(vp, 1.0);"
            "}";

    const char* fragment_shader =
            "#version 330 core\n"
            "out vec4 frag_colour;"
            "void main() {"
            "  frag_colour = vec4(1.0, 0.0, 0.0, 1.0);"
            "}";

    float points[9] = {
            -0.5f, -0.5f, 0.0f,
            0.5f, -0.5f, 0.0f,
            0.0f, 0.5f, 0.0f,
    };


};

void init(initVars& vars)
{
	int stackDummy = 0;
	tgc_start(&gc, &stackDummy);

    gladLoadGL();
    vars.vbo = 0;
    vars.vao = 0;
    vars.shader_programme = 0;

	
	GLuint vs = glCreateShader(GL_VERTEX_SHADER);
	glShaderSource(vs, 1, &vars.vertex_shader, NULL);
	glCompileShader(vs);
	GLuint fs = glCreateShader(GL_FRAGMENT_SHADER);
	glShaderSource(fs, 1, &vars.fragment_shader, NULL);
	glCompileShader(fs);

    vars.shader_programme = glCreateProgram();

	glAttachShader(vars.shader_programme, fs);
	glAttachShader(vars.shader_programme, vs);
	glLinkProgram(vars.shader_programme);

	glGenBuffers(1, &vars.vbo);

    glBindBuffer(GL_ARRAY_BUFFER, vars.vbo);
    glBufferData(GL_ARRAY_BUFFER, 9 * sizeof(float), vars.points, GL_STATIC_DRAW);
	
	glGenVertexArrays(1, &vars.vao);

	glBindVertexArray(vars.vao);

	glEnableVertexAttribArray(0);

	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), nullptr);

}

// // Function that does the drawing
void display(initVars& vars)
{
	glClearColor(1, 1, 1, 1);

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glUseProgram(vars.shader_programme);
	glBindVertexArray(vars.vao);

	glDrawArrays(GL_TRIANGLES, 0, 3);
}

void finish(){
	tgc_stop(&gc);
}

__attribute__((import_name("window_should_close")))
extern bool window_should_close();

__attribute__((import_name("poll_events")))
extern void poll_events();

__attribute__((import_name("request_animation_frame")))
extern void request_animation_frame();

int main(){

	bool testVar = true;
    initVars vars;
    printf("%i", (int)testVar);


    if(testVar){
    	init(vars);
	}
    while(!window_should_close()){
        poll_events();
        display(vars);

        request_animation_frame();
    }
	return 0;
}