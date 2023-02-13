// Find Immediate Greater Than X

//N = 5
//arr[] = {4 67 13 12 15}
//X = 16
//Output: 67

// Explanation: For a given value 16, there is only one value 67 that greater than it and so it is the answer.

#include<iostream>
using namespace std;

int intermediateGreatest(int arr[], int size, int x)
{
    sort(arr, arr + size);
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > x)
        {
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[size];
    cout <<"Enter the Elements of the array: "<<endl;

    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int x;
    cout << "Enter the value of X: ";
    cin >> x;

    cout << "The element in the array which is Greatest than X and closest to X: " << intermediateGreatest(arr, size, x)<<endl;
}