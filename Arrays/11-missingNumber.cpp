/*
----------------------------------------
Problem : Find the missing number in a Arry from 1 to N
Difficulty : Easy
Approach : 
Time Complexity : O(n)
Space Complexity : O(1)
Author : Sidra
Date : 12-07-2026
----------------------------------------
*/
#include<iostream>
#include<vector>
using namespace std;
int missingNumber(vector<int>&arr);
int main(){
    int size;
    cout<<"Enter the size of an Array:\n";
    cin>>size;
    vector<int>array(size);
    cout<<"Enter the Element of the Array\n";
    for (int i=0;i<array.size();i++){
         cin>>array[i];
    }
    cout<<"\nThe Missing Number From an Array is : "<<missingNumber(array);
}

int missingNumber(vector<int>& arr)
{
    int n = arr.size() + 1;
    int total = n * (n + 1) / 2;
    int sum = 0;

    for(int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }

    return total - sum;
}