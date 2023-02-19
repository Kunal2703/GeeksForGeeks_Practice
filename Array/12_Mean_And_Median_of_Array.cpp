// Mean And Median of Array

//N = 5
//a[] = {1, 2, 19, 28, 5}
//Output: 11 5
//Explanation: For array of 5 elements, mean is (1 + 2 + 19  + 28  + 5)/5 = 11.
//Median is 5 (middle element after sorting)

#include<iostream>
using namespace std;

int mean(int arr[], int size)
{
    int sum = 0;
    int mean;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
        mean = sum / size;
    }
    return mean;
}

int median(int arr[], int size)
{

    sort(arr, arr + size);

    int median;
    if(size % 2 != 0)
    {
        return arr[size/2];
    }
    else
    {
        int mid;
        int sum = arr[mid] + arr[mid+1/2];
            return float(sum/2);
    }
}

int main()
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

    cout << "Mean of the array is: "<< mean(arr, size) <<endl;
    cout << "Median of the array is: " << median(arr, size) <<endl;
}