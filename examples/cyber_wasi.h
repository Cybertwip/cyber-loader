#pragma once

#define CYBER_MAX_KEY_PRESSED_QUEUE 16
#define CYBER_KEY_PRESS 0
#define CYBER_KEY_RELEASE 1

static void (*cyber_keydown_callback_ptr)(int, int, int) = 0;

static void cyber_wasi_set_keydown_callback(void (*wasi_key_callback)(int, int, int)){
    cyber_keydown_callback_ptr = wasi_key_callback;
}

__attribute__((export_name("cyber_wasi_keydown_callback")))
void cyber_wasi_keydown_callback(int key, int action, int mode) {
    if(cyber_keydown_callback_ptr){
        cyber_keydown_callback_ptr(key, action, mode);
    }
}