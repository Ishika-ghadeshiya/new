#include<stdio.h>
int sum(int*a,int*b)
{
    return *a+*b;
}
int avg(int*a,int*b)
{
    return (*a+*b)/2.0;
}
void main()
{
    int a=5,b=7;
    printf("The sum of a and b is %d\n",sum(&a,&b));
     printf("The avg of a and b is %d\n",avg(&a,&b));
}
