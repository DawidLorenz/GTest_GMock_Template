#include "../include/your_code_dynamic.h"
#include <stdio.h>

int add(int a, int b)
{
    printf("\tDynamic Library Add\n");
    return a + b;
}

int multiple(int a)
{
    printf("\tDynamic Library multiple\n");
    return add(a, a);
}
