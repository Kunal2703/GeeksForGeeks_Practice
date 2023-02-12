#include<stdio.h>
int insertElement(int arr[], int n, int capacity, int posotion, int x)
{
    if(n == capacity)                    //array is already full, no more space is left.
        return n;

    int index = posotion - 1;

    for(int i = n-1; i>= index; i--)        // starting from the last index and go till the index
    {
        arr[i+1] = arr[i];                     // and then move one position head 
    }

    arr[index] = x;                             //put the element at given index

    return (n+1);
}

int main()
{
    int arr[5], capacity = 5, n = 3;

    arr[0] = 5;
    arr[1] = 10;
    arr[2] = 20;

    printf("Before Insertion\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int x = 7, position = 2;

    n = insertElement(arr, n, capacity, position, x);
    printf("After Insertion\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}