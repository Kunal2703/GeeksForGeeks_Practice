//Sum of Array Elements

//n = 3
//arr[] = {3 2 1}
//Output: 6

#include<iostream>

using namespace std;

int arraySum(int arr[], int size)
{
    int sum  = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int  main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the element of the array: "<< endl;
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Sum of the array is: "<< arraySum(arr, size) << endl;
}