#include <stdio.h>
#include <stdlib.h>
/*Program to obtain Longest Common Subsequence*/
int main()
{
    int n,i,j,max=0;

    printf("Enter the number of integers");
    scanf("%d",&n);

    int a[n+1],b[n+1];

    printf("Enter the integers");

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    /*using dynamic programming
      use another array to keep track of subsequence
      initialize all of its elements to 1*/
    for(i=0;i<n;i++){
        b[i]=1;
    }

    for(i=1;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]<a[i]&&b[i]<b[j]+1)
            {
                b[i]=b[j]+1;
                if(b[i]>max)
                    max=b[i];
            }

        }

    }

    printf("%d",max);

    return 0;
}
