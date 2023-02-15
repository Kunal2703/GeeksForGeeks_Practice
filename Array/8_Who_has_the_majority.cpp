// Who has the majority?

//N = 11
//arr[] = {1,1,2,2,3,3,4,4,4,4,5}
//x = 4, y = 5
//Output: 4
//Explanation:frequency of 4 is 4. frequency of 5 is 1.

#include<iostream>
using namespace std;

int majorityWins(int arr[], int size, int x, int y)
{
    int count_x =  0;       // count of x initalized with 0.
    int count_y = 0;        // count of y initalized with 0

    for(int i = 0; i < size; i++)
    {
        if(arr[i] == x)
        {
            count_x++;      //count all x present on array
        }
        else if(arr[i] == y)
        {
            count_y++;      //count all y present on array
        }
    }

    if(count_x > count_y)
    {
        return x;           //if the count value of x is greater than the count value of y, return the value of x
    }
    else if(count_y > count_x)
    {
        return y;           //if the count value of y is greater than the count value of y, return the value of y
    }
    else
    {
        return min(x,y);    //if the value or frequency of both the element is equal, return smaller element between
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the element of the array: " << endl;

    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int x;
    cout << "Enter the value of x: ";
    cin >> x;

    int y;
    cout << "Enter the value of y: ";
    cin >> y;

    cout<< "The element with higher frequency: " << majorityWins(arr, size, x, y) <<endl;
}