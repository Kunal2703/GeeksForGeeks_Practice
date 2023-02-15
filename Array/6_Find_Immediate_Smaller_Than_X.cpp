//Find Immediate Smaller Than X

//size = 5
//arr[] = {4 67 13 12 15}
//X = 16
//Output: 15

//Explanation: For a given value 16, there are four values which are smaller than it. 
//But 15 is the number which is smaller and closest to it with minimum difference of 1.

#include<iostream>
using namespace std;

int intermediateSmaller(int arr[], int size, int x)
{
    sort(arr, arr + size);

    int ans = -1;

    for(int i = 0; i < size; i++)
    {
        if(x > arr[i])
        {
            ans = arr[i];
        }
    }
    return ans;
}

int main ()
{
    int size;
    cout << "Enter the Size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the Elements of the array: "<< endl;
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int x;
    cout << "Enter the value of X: ";
    cin >> x;
    cout <<"The element in the array which is smaller than X and closest to X: "<< intermediateSmaller(arr, size, x) << endl;
}
