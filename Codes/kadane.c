#include<stdio.h>
int kadane(int n,int a[100]){

   int max=0,tmax=0,i;

// get the maximum sub array sum
   for(i=0;i<n;i++){
    tmax=tmax+a[i];
    if(tmax<0)
        tmax=0;
    if(max<tmax)
        max=tmax;
   }
   
   //if array contains all negative numbers return the maximum among those 
   if(max==0){
      max=a[0];
    for(i=1;i<n;i++){
        if(a[i]>max)
            max=a[i];
    }
   }
    return max;
    }
int main()
{
   int n,a[100],i,sum;
   //get the number of array elements
    scanf("%d",&n);

    //enter the array elements
   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
   sum=kadane(n,a);
   printf("Largest sub array sum is %d",sum);
   return 0;
}
