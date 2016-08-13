#include<stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main()
{
    int num,r,arr[10];
    int count=0,k,i,j,l;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Enter the value of K : ");
    scanf("%d",&k);
    l=num;
    while(num)
    {
        r=num%10;
        arr[count]=r;
        num=num/10;
        count++;
    }

    for (i = 0; i < count-1; i++)
        for (j = 0; j < count-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
    num=0;
    for(i=0;i<count-k;i++)
    {
        num = num*10+arr[i];
    }

    printf("Least number after removal of %d digits form the number %d : %d", k,l,num);

    return 0;
}
