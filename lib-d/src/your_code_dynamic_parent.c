#include "../include/your_code_dynamic_parent.h"
#include "../include/your_code_dynamic.h"
#include <stdio.h>

int Parent_add(int a, int b)
{
    printf("\tDynamic Library Parent_Add\n");
    return add(a, b);
}

int Parent_multiple(int a)
{
    printf("\tDynamic Library Parent_multiple\n");
    return multiple(a);
}
