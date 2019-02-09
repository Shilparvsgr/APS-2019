#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Longest common subsequence using dynamic programming*/

int main()
{
    char str[100],str2[100],table[100][100];
    int i,j;

    printf("Enter two strings");
    scanf("%s\n%s",str,str2);

    //set bits in first column and 1st row as 0
    for(j=0;j<=strlen(str2);j++)
    {
        table[0][j]=0;
    }

    for(i=0;i<=strlen(str);i++)
    {
        table[i][0]=0;
    }

    //construct a 2D array and get the length of LCS
    for(i=0;i<strlen(str);i++)
        {

        for(j=0;j<strlen(str2);j++)
            {

            if(str[i]==str2[j]){

                table[i+1][j+1]=table[i][j]+1;
            }
            else
                {

                if(table[i][j+1]>=table[i+1][j])
                    {
                    table[i+1][j+1]=table[i][j+1];

                    }
                else
                {
                    table[i+1][j+1]=table[i+1][j];
                }
            }
        }
    }

    printf("%d",table[strlen(str)][strlen(str2)]);
    return 0;
}
