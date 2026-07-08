/*
----------------------------------------
Problem : Left Rotate an Array by One
Difficulty : Easy
Approach : Linear Traversal
Time Complexity : O(n)
Space Complexity : O(1)
Author : Sidra
Date : 08-07-2026
----------------------------------------
*/
#include<iostream>
#include<vector>
using namespace std;

//Function Declaration 
void LeftRotate(vector<int>& arr);

int main(){
    int size;
    cout<<"Enter the size of an Array \n";
    cin>>size;
    vector<int>array(size);
    cout<<"Enter the Elements of the Array \n";
    for(int i=0;i<array.size();i++){
        cin>>array[i];
    }
    //function call 

    LeftRotate(array);
    // print Rotated array

    cout<<"\nArray after Left Rotate: \n";
     for(int i=0;i<array.size();i++){
        cout<<array[i]<<" ";
    }
    return 0;

}

// Function Defination

void LeftRotate(vector<int> &arr){
    int first=arr[0];
    for(int i=0;i<arr.size()-1;i++){
        // Shift Elements to the left
        arr[i]=arr[i+1];
    }
    // Put first Element to the end
    arr[arr.size()-1]=first;
}
   