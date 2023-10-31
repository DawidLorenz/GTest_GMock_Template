#include "../include/your_code_static_parent.h"
#include "../include/your_code_static.h"
#include <stdio.h>

int Parent_add(int a, int b)
{
    printf("\tStatic Library Parent_Add\n");
    return add(a, b);
}

int Parent_multiple(int a)
{
    printf("\tStatic Library Parent_multiple\n");
    return multiple(a);
}
