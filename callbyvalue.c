#include<stdio.h>
void swap(int a,int b)
{
    printf("Numbers before swapping : %d %d\n",a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("Numbers after swapping : %d %d\n",a,b);
}
void main()
{
    swap(33,45);
}