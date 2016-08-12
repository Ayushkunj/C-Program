#include<stdio.h>

void rotate(int arr[], int d, int n)
{

    int i, j, temp;
    for (i = 0; i < d; i++)
    {
        temp = arr[0];
        for (j = 0; j < n-1; j++)
            arr[j] = arr[j+1];
        arr[j] = temp;
    }
}

void printArray(int arr[], int size)
{
  int i;
  for(i = 0; i < size; i++)
    printf("%d ", arr[i]);
}


int main()
{
   int arr[] = {1, 2, 3, 4, 5, 6, 7};
   printArray(arr, 7);
   printf("\n");
   rotate(arr, 3, 7);
   printArray(arr, 7);
   return 0;
}
