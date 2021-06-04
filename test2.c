#include <stdio.h>

int i,x = 1;

int main()
{
    while(1)
    {
        for(i = 1;i <= x;i++)
        {
            x++;
            printf("%d回目の繰り返しです。\n",i);
            //wait(1);
        }
        //break;
    }

}

