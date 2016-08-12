
#include<stdio.h>

int count(int arr[], int n, int k)
{
    int count = 0,i,j;
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
            if (arr[i] - arr[j] == k || arr[j] - arr[i] == k )
                  count++;
    }
    return count;
}

int main()
{
    int n, k, arr[] =  {7,6,23,19,10,11,9,3,15};
    n = sizeof(arr)/sizeof(arr[0]);
    k = 3;
    printf("Count of pairs with given diff is %d",count(arr, n, k));
    return 0;
}
