//Reverse The Array
//n = 5
//arr[] = {1 1 2 2 3}
//Output: 3 2 2 1 1

#include<iostream>

using namespace std;

int reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size-1;

    while(end >= start)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    return -1;
}

int main()
{
    int size;
    cout <<"Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: "<<endl;

    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    reverseArray(arr, size);

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

}
