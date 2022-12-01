#include<stdio.h>
void calculate_avg(int *a,int *b, float *avg){
    *avg=(*a+*b)/2.0;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    float avg;
    calculate_avg(&a,&b,&avg);
    printf("Average: %f",avg);
    return 0;
}

