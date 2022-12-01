#include<stdio.h>

//7
//1 4 3 2 12 5 2

int printArr(int *arr,int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d, ",arr[i]);
    }
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
    printArr(arr,n);
    return 0;
}

