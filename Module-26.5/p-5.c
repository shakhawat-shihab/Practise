#include<stdio.h>

//7
//1 4 3 2 12 5 2

int makeSum(int *arr,int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]%10==0){
             sum+=arr[i];
//              printf(" %d \n",arr[i]);
        }

    }
    return sum;
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=makeSum(arr,n);
    printf("SUM = %d",sum);
    return 0;
}


