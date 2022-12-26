#include<stdio.h>
int ceiling(int a[],int num,int low,int high)
{
    while(low<=high)
    {
        int middle = (low+high)/2;
        if(a[middle] < num)
        {
            low = middle+1;
        }
        else if(a[middle] > num)
        {
            high = middle-1;
        }
        else
        {
            return middle;
        }
    }
    return low;
}
void main()
{
    int num;
    int a[] = {12,23,32,45,54,68,70,82};
    int n = sizeof(a)/sizeof(a[0]);
    printf("\nEnter the element :");
    scanf("%d",&num);
    int var = ceiling(a,num,0,n-1);
    if(num == a[var])
    {
        printf("\nElement found at index : %d\n",var);
    }
    else
    {
        printf("\nCeil of the number %d  is : %d\n",num,a[var]);
        printf("Ceil found at index : %d\n",var);
    }
}