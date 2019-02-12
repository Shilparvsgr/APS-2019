#include<stdio.h>

/*
     ascii     binary
 A    65       1000001
 a    97       1100001
 "OR"ing with the difference of these i,e., 32 lower case can be obtained*/
int main()
{
    char c;
    printf("Enter any upper case character to be converted to lower\n");
    scanf("%c",&c);
    c=c|32;        //Or with 32 to get a lower case letter
    printf("%c",c);
    return 0;
}
