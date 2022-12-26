#include<stdio.h>
int character(char a[],int n,char ch,int low,int high)
{
    while(low<=high)
    {
        int middle = (low+high)/2;
        if(a[middle] < ch)
        {
            low = middle+1;
        }
        else if(a[middle] > ch)
        {
            high = middle-1;
        }
        else
        {
            return middle;
        }
    }
    return (low % n);
}
void main()
{
    char ch;
    char a[] = {'a','d','g','j','l','p','s','v','y'};
    int n = sizeof(a)/sizeof(a[0]);
    printf("\nEnter the character :");
    scanf("%c",&ch);
    int var = character(a,n,ch,0,n-1);
    if(ch == a[var])
    {
        printf("\nCharacter found at index : %d\n",var);
    }
    else
    {
        printf("\nCeil of the character %c  is : %c\n",ch,a[var]);
        printf("Ceil found at index : %d\n",var);
    }
}