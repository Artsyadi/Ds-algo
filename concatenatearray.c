#include<stdio.h>
#define MAX 5
void array(int a[],int n)
{
    int b[2*MAX];
    for(int i=0;i<MAX;i++)
    {
        b[i] = a[i];
        b[i+n] = a[i];
    }
    for(int i=0;i<2*MAX;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
}
void main()
{
    int a[MAX] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    array(a,n);
}