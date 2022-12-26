#include<stdio.h>
#define MAx 5
void array(int a[],int k)
{
    int i,j;
    int arr[MAx] = {0};
    for(i=0;i<MAx;i++)
    {
        for(j=0;j<=i;j++)
        {
            arr[k] += a[j];
        }
        k++;
    }

    for(i=0;i<MAx;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void main()
{
    int a[] = {10,20,30,40,50};
    array(a,0);
}