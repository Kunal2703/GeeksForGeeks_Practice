#include<iostream>
using namespace std;

int getLargest(int arr[], int n)
{

    //-------- time complexity is O(n^2)-----------
    /*

    for(int i = 0; i < n; i++)
    {
        bool flag =  true;
        for(int j = 0; j < n; j++)
        {
            if(arr[j] > arr[i])
            {
                flag = false;
                break;
            }
        }
        
        if(flag == true)
        {
            return i;
        }
    }
    return -1;
    */


   //--------Time complexity is O(n)-------

    //arr[] = {5,8,20,10}
    // res = 0                      //Initalize with the first element, which is index 0.
    // i =1 : res = 1               //i  = 1, compare with previous value of result. And when the element is greate. So update the value of result. 
    // i = 2 : res = 2              // i = 2; 20 > 8, update the value of result.
    // i = 3 : res = 2              // i = 3; 10 < 20, not update, because the previous value of result is greater than the current value of result.

   int result = 0;                  
   for(int i =  1; i < n; i++)      //start from index 1
   {

        if(arr[i] > arr[result])
        {
            result = i;
        }
   }
   return result;
}

int main()
{
    int arr[] = {3, 2, 7, 4, 1};
    cout << "Greatest Element at Index: " << getLargest(arr, 5) << endl;

    return 0;
}