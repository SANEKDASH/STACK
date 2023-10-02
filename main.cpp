#include <stdio.h>
#include <math.h>

#include "stack.h"
#include "debug.h"


int main()
{
    INIT_LOG;

    Stack stk = {};
    StackInit(&stk);

    for (size_t i = 0; i < 10; i++)
    {
        Push(&stk,10);
    }

    int a = 0;

    for (size_t i = 0; i < 10; i++)
    {
        Pop(&stk,&a);
    }

    StackDtor(&stk);

    Push(&stk, 10);

    CLOSE_LOG;
    return 0;
}
