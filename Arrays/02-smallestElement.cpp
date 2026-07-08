/*
----------------------------------------
Problem : Smallest Element in an Array
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
using namespace std;

int main(){
    int size;
    int SmallestElement( vector<int> &arr);
    cout<<"Enter the size of an Array: \n";
    cin >>size;
    vector<int>array(size);
    cout<<"Enter the Elements of an Array :\n";
    for (int i=0;i<array.size();i++){
        cin>>array[i];
    }
    //smallest
    cout<<"\nSmallest Element in the Array is : "<<SmallestElement(array);
    return 0;
}
int SmallestElement( vector<int> &arr){
    int smallest=arr[0];
    for(int i=1;i<arr.size();i++){
        if (arr[i]<smallest){
            smallest=arr[i];
        }
    }
    return smallest;
}