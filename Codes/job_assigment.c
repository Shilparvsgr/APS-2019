#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include <limits.h>

//counts the number of set bits
int count_set(int n){
    int j,count=0;

        for(j=0;j<3;j++){
            if(n&(1<<j))
                count++;
        }

    return count;

}
int min(int a,int b){
    if(a<=b)
        return a;
    else
        return b;
}

int assign(int cost[3][3],int N){
    int set_size=pow(2,N),i,j,mask,x;
    int dp[set_size];
    dp[0]=0; //initialize first array element to zero
    for(i=1;i<set_size;i++){
        dp[i]=INT_MAX; // initialize all other index to infinity

    }
    for(mask=0;mask<set_size;mask++){
        //call function to count number of set bits
        x=count_set(mask);
        for(j=0;j<N;j++){
            //check if the j'th bit is set
            if((mask&(1<<j))==0)
            {
                dp[mask|(1<<j)]=min(dp[(mask|(1<<j))],dp[mask]+cost[x][j]);
            }
        }
    }


    //return the last element which holds least cost value
    return dp[set_size-1];
}
int main()
{
    //the output for this should be 7
    int cost[3][3]={{8,2,5},{3,2,7},{4,1,2}};
    int c=assign(cost,3);
    printf("%d",c);
    return 0;
}
