// ??????????????????????

// Remove duplicates from a sorted array
//n = 7
// arr [] = {10,20,20,30,30,30}
//O/P = {10,20,30}

#include<iostream>
using namespace std;

int removeDuplicates(int arr[], int size)
{
    int temp[size];
    temp[0] = arr[0];

    int result = 1;

    for(int i = 1; i < size; i++)
    {
        if(temp[result-1] != arr[i])
        {
            temp[result] = arr[i];
            result++;
        }
    }

    for(int i = 0; i < result; i++)
    {
        arr[i] = temp[i];
    }
    return result;
}



int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array" << endl;
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    } 

    size = removeDuplicates(arr, size);
    cout << "Array after remove the duplicate element:  ";

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}





