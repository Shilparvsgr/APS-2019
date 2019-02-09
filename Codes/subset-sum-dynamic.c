#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum;
    printf("Enter the number of integers to be used to obtain the sum");
    scanf("%d",&n);
    int a[n+1];
    int i,j;
    printf("Enter the numbers to find subset sum");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the sum to be obtained");
    scanf("%d",&sum);
    int result[sum+1];
    for(i=0;i<=sum;i++){
        result[i]=0;
    }
    result[0] = 1;
    for(j=0;j<n;j++){
    for(i = a[j]; i <= sum; i++)

        result[i] = result[i] + result[i-a[j]];
}


    printf("Number of subsets is %d ",result[sum]);
    return 0;
}
