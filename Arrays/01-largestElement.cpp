/*
----------------------------------------
Problem : Largest Element in an Array
Difficulty : Easy
Approach : Linear Traversal
Time Complexity : O(n)
Space Complexity : O(1)
Author : Sidra
Date : 02-07-2026
----------------------------------------
*/

#include<vector>
#include<iostream>
using namespace std;
int Largest(vector<int> &arr){
    int largest=arr[0];
    for (int i=1;i<arr.size();i++){
        if (largest<arr[i]){
            largest=arr[i];
        }
    }
    return largest;
}

int main(){
    int size;
    cout<<"Enter the size of an Array : \n";
    cin>> size;
    vector<int>arr(size);
    cout<<"Enter the Elements of an Array: \n";
    for (int i=0;i<arr.size();i++)
{
        cin>>arr[i];;
}
    cout<<"Array is \n";
    for(int i = 0; i < arr.size(); i++)
{  
    cout << arr[i] << " ";
}   
    cout << "\nLargest element in the array is: " << Largest(arr) << endl;
    return 0;
}
