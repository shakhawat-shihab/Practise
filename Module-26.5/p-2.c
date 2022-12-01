#include<stdio.h>

//7
//1 4 3 2 12 5 2

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int bubbleSort(int arr[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>=arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
//                swap(&arr[j],&arr[j+1]);
            }
        }
        printf("iteration %d ==> ",i);
        for(int i=0; i<n; i++)
        {
            printf("%d ",arr[i]);
        }
         printf("\n");
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
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
    bubbleSort(arr,n);

    return 0;
}

