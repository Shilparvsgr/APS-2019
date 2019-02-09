#include <stdio.h>
#include <stdlib.h>
int max(int a, int b)
{
    return (a > b)? a : b;
}
int main()
{
    int n,W,j,i,w;
    ///Get the number of items, weights and values

    printf("Enter the number of items");
    scanf("%d",&n);

    int weight[n+1],value[n+1];

    printf("Enter the weights");
    for(j=0;j<n;j++){
        scanf("%d",&weight[j]);
    }

    printf("\nEnter the values");
    for(j=0;j<n;j++){
        scanf("%d",&value[j]);
    }

    ///Get the weight to be obtained
    printf("enter the weight to be obtained");
    scanf("%d",&W);
     int K[n+1][W+1];

   /// Build table K[][] using dynamic programming
   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (weight[i-1] <= w)
                 K[i][w] = max(value[i-1] + K[i-1][w-weight[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }
   ///print the highest value formed to get weight W
   printf("%d",K[n][W]);


    return 0;
}
