#ifndef CALC_CORRECT_H
#define CALC_CORRECT_H
#pragma once

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
