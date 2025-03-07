/* logging.h
 *
 * Copyright (c) 2025, Eric Curtin <ericcurtin17 at gmail dot com>
 *
 */

#pragma once

#include <stdarg.h>
#include <stdio.h>

enum logl { n = 0, d = 10, i = 20, w = 30, e = 40, c = 50 };

static logl logl = w;

static void cleanup_va_list(va_list * args) { va_end(*args); }

__attribute__((format(printf, 1, 2))) static int printe(const char * fmt, ...) {
    va_list args __attribute__((cleanup(cleanup_va_list)));
    va_start(args, fmt);

    return fprintf(stderr, fmt, args);
}

__attribute__((format(printf, 1, 2))) static int logd(const char * fmt, ...) {
    if (logl > d) return 0;

    va_list args __attribute__((cleanup(cleanup_va_list)));
    va_start(args, fmt);

    return printe(fmt, args);
}

__attribute__((format(printf, 1, 2))) static int logi(const char * fmt, ...) {
    if (logl > i) return 0;

    va_list args __attribute__((cleanup(cleanup_va_list)));
    va_start(args, fmt);

    return printe(fmt, args);
}

__attribute__((format(printf, 1, 2))) static int logw(const char * fmt, ...) {
    if (logl > w) return 0;

    va_list args __attribute__((cleanup(cleanup_va_list)));
    va_start(args, fmt);

    return printe(fmt, args);
}

__attribute__((format(printf, 1, 2))) static int loge(const char * fmt, ...) {
    if (logl > e) return 0;

    va_list args __attribute__((cleanup(cleanup_va_list)));
    va_start(args, fmt);

    return printe(fmt, args);
}

__attribute__((format(printf, 1, 2))) static int logc(const char * fmt, ...) {
    if (logl > c) return 0;

    va_list args __attribute__((cleanup(cleanup_va_list)));
    va_start(args, fmt);

    return printe(fmt, args);
}
