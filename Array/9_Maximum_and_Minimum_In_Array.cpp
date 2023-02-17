// Maximum and Minimum In Array

//N = 4
//arr[] = {5 4 2 1}
//Output: 5 1


#include<iostream>
using namespace std;

int maxElement(int arr[], int size)
{
    sort(arr,arr+size);
    return arr[size-1];
}

int minElement(int arr[], int size)
{
    sort(arr,arr+size);
    return arr[0];
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout <<"Enter the elements of the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout <<"Maximum element in array is: " << maxElement(arr, size)<< endl;
    cout <<"Minimum element in array is: " << minElement(arr, size)<< endl;

}
