#pragma once

#include <stdint.h>

typedef struct {
    long* stack;
    long* current_func;
} cyber_jmp_buf;

static void cyber_longjmp(cyber_jmp_buf* env, long value) {
    env->stack--;
    env->current_func = (long*)*env->stack;
    *(env->stack - 1) = value;
}

static int cyber_setjmp(cyber_jmp_buf* env) {
    long value = 0;
    *(env->stack) = (long)env->current_func;
    env->stack++;
    return value;
}
