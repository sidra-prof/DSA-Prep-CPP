/*
----------------------------------------
Problem : Second Largest Element in an Array
Difficulty : Easy
Approach : Linear Traversal
Time Complexity : O(n)
Space Complexity : O(1)
Author : Sidra
Date : 03-07-2026
----------------------------------------
*/
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int size;
    int SecondLargest(vector<int> &arr);
    cout<<"Enter the size of an Array:\n";
    cin>>size;
    vector<int>array(size);
    cout<<"Enter the Element of the Array\n";
    for (int i=0;i<array.size();i++){
         cin>>array[i];
    }
    int result=SecondLargest(array);
    if (result==INT_MIN){
        cout<<"\nSecond largest does not Exists :";
    }
    cout<<"\nThe Second Largest Number is :"<<SecondLargest(array);
}
int SecondLargest(vector<int>& arr){
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}
