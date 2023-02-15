// Check if an Array is Sorted
#include<iostream>
using namespace std;

bool isSorted(int arr[], int size)
{

    //Method - 1
    /*
    //The  time complexity is O(n^2)

    for(int i = 0; i < size; i++)       //traverse in array
    {
        for(int j = 0; j < size; j++)     //And inside array, we move right side of the every elements. For example,i=0; goes right side of every element of the index 0.
        {
            if(arr[j] < arr[i])
            {
                return false;
            }
        }
    }
    return true;
    */


   //Method - 2

   // Time complexity is O(n).

   for(int i = 0; i < size; i++)
   {
        if(arr[i] < arr[i-1])
        {
            return false;
        }
   }
   return true;
}

int main()
{
    int size;
    cout <<"Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the Elements of the array" << endl;
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Check array is sorted or not: " << isSorted(arr, size) << endl;
}
