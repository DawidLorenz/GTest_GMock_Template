#ifndef YOUR_CODE_FFF_HPP
#define YOUR_CODE_FFF_HPP

#ifdef __cplusplus
extern "C"
{
#endif

#include "your_code_dynamic.h"
#include "fff.h"

int add(int a, int b) __attribute__((weak));
int multiply(int a) __attribute__((weak));

FAKE_VALUE_FUNC(int, add, int, int);
FAKE_VALUE_FUNC(int, multiply, int);


#ifdef __cplusplus
}
#endif

#endif // YOUR_CODE_FFF_HPP