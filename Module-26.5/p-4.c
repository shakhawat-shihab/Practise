#include<stdio.h>
float area(int *r){
    int val=*r;
//    printf("Area = %f",3.1415*val*val);
    return 3.14156*val*val;
}
int main()
{
    int r;
    scanf("%d",&r);
    printf("Area = %f",area(&r));
    return 0;
}

