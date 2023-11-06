// CPP program to render a triangle using Shaders

extern "C"{
#include "tgc.h"
}

#include "raylib.h"

#include <glad/glad.h>

#include "gl2_import.h"

#include <cmath>
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

    init();
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "raylib [audio] example - sound loading and playing");

    InitAudioDevice();      // Initialize audio device

    Sound fxWav = LoadSound("resources/sound.wav");         // Load WAV audio file
    Sound fxOgg = LoadSound("resources/target.ogg");        // Load OGG audio file

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!window_should_close())    // Detect window close button or ESC key
    {
		poll_events();

        // Update
        //----------------------------------------------------------------------------------
        if (IsKeyPressed(KEY_SPACE)) PlaySound(fxWav);      // Play WAV sound
        if (IsKeyPressed(KEY_ENTER)) PlaySound(fxOgg);      // Play OGG sound
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawText("Press SPACE to PLAY the WAV sound!", 200, 180, 20, LIGHTGRAY);
            DrawText("Press ENTER to PLAY the OGG sound!", 200, 220, 20, LIGHTGRAY);

        EndDrawing();
        //----------------------------------------------------------------------------------

		request_animation_frame();

    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    UnloadSound(fxWav);     // Unload sound data
    UnloadSound(fxOgg);     // Unload sound data

    CloseAudioDevice();     // Close audio device

    CloseWindow();          // Close window and OpenGL context
    //--------------------------------------------------------------------------------------



	finish();
	return 0;
}