// CPP program to render a triangle using Shaders

extern "C"{
	#include "tgc.h"
}


#include <glad/glad.h>

#include "gl2_import.h"

#include <iostream>

static tgc_t gc;

__attribute__((export_name("allocate")))
void* c_allocate(size_t size){
	return tgc_alloc(&gc, size);
}

void init()
{
	int stackDummy = 0;
    tgc_start(&gc, &stackDummy);
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
    bool waka = true;
    int cacu = 20;

    int caco = cacu;

    printf("%i", (int)waka);

    init();
    while(!window_should_close()){
        poll_events();
        //display();
        request_animation_frame();
    }
    finish();
	return 0;

    
}