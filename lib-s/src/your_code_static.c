#include "../include/your_code_static.h"
#include <stdio.h>

int add(int a, int b)
{
    printf("\tStatic Library Add\n");
    return a + b;
}

int multiple(int a)
{
    printf("\tStatic Library multiple\n");
    return add(a, a);
}
