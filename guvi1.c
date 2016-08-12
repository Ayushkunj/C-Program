#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[10];
    int n,i;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("\nEnter array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==i)
        {
            printf("\n%d is equal to its index %d",arr[i],i);
        }
    }
    return 0;
}
