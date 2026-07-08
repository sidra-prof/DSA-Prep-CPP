/*
----------------------------------------
Problem : Move Zeroes to End
Difficulty : Easy
Approach : Two Pointer Technique
Time Complexity : O(n)
Space Complexity : O(1)
Author : Sidra
Date : 07-07-2026
----------------------------------------
*/
#include<iostream>
#include<vector>

using namespace std;
void MovedZeroes(vector<int> &arr);
int main(){
    //
    int n;
    cout<<"Enter the size of an Array :\n";
    cin>> n;
    vector<int>array(n);
    cout<<"Enter the Elements of an Array: \n";
    for (int i=0;i<array.size();i++){
        cin>>array[i];
    }

    MovedZeroes(array);

    cout << "\nAfter Formatting the Array is:\n";

    for(int i = 0; i < array.size(); i++)
   { 
        cout << array[i] << " ";
   }
}

void MovedZeroes(vector<int>& arr){
    int j=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
        
    }
}