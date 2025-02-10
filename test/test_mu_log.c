/**
 * @file test_mu_json.c
 *
 * MIT License
 *
 * Copyright (c) 2025 R. D. Poor <rdpoor # gmail.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "fff.h"
#include "mu_log.h"
#include "unity.h"
#include <stdbool.h>
#include <stdio.h>

DEFINE_FFF_GLOBALS;

void setUp(void) {
    // Reset all faked functions
}

void tearDown(void) {
    // nothing yet
}

int main(void) {
    mu_log_init(MU_LOG_LEVEL_INFO, log_print);

    UNITY_BEGIN();

    // RUN_TEST(test_of_the_day);

    return UNITY_END();
}
