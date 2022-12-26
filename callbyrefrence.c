#include<stdio.h>
void refrence(int *a,int *b)
{
    int temp;
    printf("Numbers before swapping : %d %d\n",*a,*b);
    temp = *a;
    *a = *b;
    *b = temp;
    printf("Numbers after swapping : %d %d\n",*a,*b);
}
void main()
{
    int a=10;
    int b=20;
    refrence(&a,&b);
}