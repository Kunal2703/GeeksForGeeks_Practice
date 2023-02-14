//n = 6
//arr[] = {1 2 3 4 5 6}
//index = 0
//Output: 1

#include<iostream>
using namespace std;

int getByIndex(int arr[], int n, int index)
{
    if(index > n-1)
    {
        return -1;
    }
    else
    {
        return arr[index];
    }
}

int main()
{
    //int arr[] = {1, 2, 3, 4, 5, 6};
    //int index = 5;
    //int n = 6;

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the Elements of the array: "<< endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int index = 0;
    cout << "Enter the Index: ";
    cin >> index;



    cout << "Array: " ;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Element present at Index: " << getByIndex(arr,n,index) << endl;
    
}
