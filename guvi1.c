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
    
    printf("\nEntered array  :\n ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==i)
        {
            printf("\nThe number %d is equal to its index %d",arr[i],i);
        }
    }
    return 0;
}
