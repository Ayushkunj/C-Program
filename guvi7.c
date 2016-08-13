#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[10][10],n,r[10],c[10];
    int i,j,k=0,l=0,p,q;

    printf("Enter no. of rows : ");
    scanf("%d",&n);
    printf("\nEnter elements of array : \n");
    for(i=0;i<n;i++)
    {

        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==0)
            {
                r[k++]=i;
                c[l++]=j;
            }
        }
    }
    printf("\nInputed Array  : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d\t",arr[i][j]);
        printf("\n");
    }
    i=0;
    j=0;
    for(i=0;i<k;i++)
    {
        q=r[i];
        for(p=0;p<n;p++)
                arr[q][p]=0;
    }
    for(j=0;j<l;j++)
    {
        q=c[j];
        for(p=0;p<n;p++)
                arr[p][q]=0;
    }


    printf("\nResultant Array  : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d\t",arr[i][j]);
        printf("\n");
    }
    return 0;
}
