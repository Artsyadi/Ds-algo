#include<stdio.h>
int binary(int a[],int target,int low,int high)
{
    while(low<=high)
    {
        int middle = (low+high)/2;
        if(a[middle] < target)
        {
            low = middle+1;
        }
        else if(a[middle] > target)
        {
            high = middle-1;
        }
        else 
        {
            return middle;
        }
    }
}
void main()
{
    int target;
    int a[] = {12,23,45,68,54,70,32,82};
    int n = sizeof(a)/sizeof(a[0]);
    printf("\nEnter the terget element :");
    scanf("%d",&target);
    printf("\nTarget found at index : %d\n",binary(a,target,0,n-1));
}