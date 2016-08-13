#include<stdio.h>

int main()
{
    int a[10],n,i,j;
    int out[10];
    printf("Enter no of elements : ");
    scanf("%d",&n);
    printf("\nEnter array elements  :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        out[i]=1;
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j)
                out[i]= out[i]*a[j];
        }
    }
    printf("\nOutput Array \n");
    for(i=0;i<n;i++)
        printf("%d\t",out[i]);

    return 0;
}
