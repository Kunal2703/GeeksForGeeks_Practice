#include<iostream>
using namespace std;

int insertElement(int arr[], int n, int capacity, int position, int x)
{
    if(n == capacity)
    {
        return n;
    }

    int index = position - 1;
    for(int i = n-1; i >= index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] =  x;

    return (n+1);

}

int main()
{
    int arr[5],  capacity = 5, n = 3;

    arr[0] = 5; 
    arr[1] = 10;
    arr[2] = 20;

    cout << "Before Insertion"<<endl;
    for(int i = 0; i < n ; i++)
    {
        cout << arr[i] << endl;

    }
    int x = 7, position = 2;

    n = insertElement(arr, n, capacity, position, x);

    cout << "After Insertion" << endl;

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}