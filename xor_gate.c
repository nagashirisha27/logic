#include "functions.h"

int xor_gate(int a,int b)
{
    int out;
    if (a == 0 && b == 0)
        out = 0;
    else if (a == 0 && b == 1)
        out = 1;
    else if (a == 1 && b == 0)
        out = 1;
    else
        out = 0;
    return out;
}