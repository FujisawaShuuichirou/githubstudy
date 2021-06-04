#include <stdio.h>
//#include "mbed.h"

int i,x,y = 1;

int main()
{
    while(1)
    {
        x = y;

        if(x == 1)
            printf("%d\n",x);

        int c = 0;

        for(i = 2;i < x;i++)
            {

                if(x % i != 0)
                {
                    c++;
                    if(c == x - 2)
                        printf("%d\n",x);
                }
                
                //wait(1);
            }
            
            y++;

    }
}