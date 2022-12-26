#include<stdio.h>
#define MAX 5
int array1(int a[])
{
    int i,count=0;
    for(i=0;i<MAX-1;i++)
    {
        if(a[i]<a[i+1])
        {
            count++;
        }
    }
    return count;
}
int array2(int a[])
{
    int i,num=0;
    for(i=0;i<MAX-1;i++)
    {
        if(a[i]>a[i+1])
        {
            num++;
        }
    }
    return num;
}
void main()
{
    int a[] = {1,2,3,4,5};
    int x = array1(a);
    int y = array2(a);
    if(x==MAX-1 || y==MAX-1)
    {
        printf("\nTrue\n");
    }
    else
    {
        printf("\nFalse\n");
    }
}