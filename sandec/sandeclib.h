/*
 * sandeclib / sanio pulcod encoder module
 *
 * Copyright (c) 2026, Oleg Matviichuk (ma7hway at gmail dot com)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 or later
 * <http://gnu.org/licenses/gpl.html>.
 *
 * Alternatively, this software may be distributed under the terms of Simplified BSD
 * License.
 *
 * Copyright 2025, Oleg Matviichuk. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification, are
 * permitted provided that the following conditions are met:
 *
 *    1. Redistributions of source code must retain the above copyright notice, this list of
 *       conditions and the following disclaimer.
 *
 *    2. Redistributions in binary form must reproduce the above copyright notice, this list
 *       of conditions and the following disclaimer in the documentation and/or other materials
 *       provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER
 * OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * The views and conclusions contained in the software and documentation are those of the
 * authors and should not be interpreted as representing official policies, either expressed
 * or implied, of Oleg Matviichuk.
 */

#ifndef SANDECLIB_H
#define SANDECLIB_H

#include <stdint.h>

/* pulcode modes */
#define PULCOD_MODE_1 1
#define PULCOD_MODE_2 2

/* initialize decoder */
int nas_ced_pulcod2_init(int freq, int pulcod_size);

/* sandec decoder */
int nas_ced(uint8_t *in, int16_t *out, int mode, int bit_size);

/* manually form a wav file header */
int wave_header(uint8_t out[], int data_size, int freq);

#endif /* SANDECLIB_H */
