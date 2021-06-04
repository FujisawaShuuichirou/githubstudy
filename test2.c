#include <stdio.h>

int i = 1;

int main()
{
    while(1);
    {
        for(;i <= 10;i++)
        {
            printf("%d回目の繰り返しです。\n",i);
        }

        if (i >= 100)
            break;
    }

}

