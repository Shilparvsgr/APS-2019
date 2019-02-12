#include<stdio.h>

/*
     ascii     binary
 A    65       1000001
 a    97       1100001
 "AND"ing  with the negation of difference of these i,e., 32 upper case can be obtained*/
int main()
{
    char c;
    printf("Enter any lower case character to be converted to upper\n");
    scanf("%c",&c);
    c=c&~32;        //AND with negation of 32 to get a upper case letter
    printf("%c",c);
    return 0;
}
