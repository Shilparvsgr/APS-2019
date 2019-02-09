#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/*Bit manipulation to obtain subsets of a,b,c */
int main()
{
    char str[]={'a','b','c'};
    int size=3;
    int i,j;
    unsigned int set_size=pow(2,size);

    for(i=0;i<set_size;i++)
        {
        for(j=0;j<size;j++)
        {

                if(i&(1<<j))
                {

                printf("%c",str[j]);
                }
        }
        printf("\n");
    }
    return 0;
}
