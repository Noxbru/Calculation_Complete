#ifndef CALC_CORRECT_H
#define CALC_CORRECT_H
#pragma once
    
/*
 * Copyright (C) 2016 Bruno Jiménez
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
 * OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include <locale.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <wchar.h>

void calculation_correct(bool correct)
{
    wchar_t buffer[64] = {0};
    wchar_t buffer2[64] = {0};
    unsigned int i, length;

    setlocale(LC_CTYPE,"");

    wcscat(buffer2, L" Calculations ");

    if(correct) wcscat(buffer2, L"Correct ");
    else        wcscat(buffer2, L"Incorrect ");
    
    length = wcslen(buffer2);

    buffer[0] = L'\u250F';
    for(i = 1; i < length + 1; i++)
        buffer[i] = L'\u2501';
    buffer[i] = L'\u2513';
    buffer[i+1] = L'\0';

    wprintf(L"%S\n", buffer);
    wprintf(L"\u2503%S\u2503\n", buffer2);

    buffer[0] = L'\u2517';
    buffer[i] = L'\u251B';
    wprintf(L"%S\n", buffer);
}

#endif /* end of include guard: CALC_CORRECT_H */
