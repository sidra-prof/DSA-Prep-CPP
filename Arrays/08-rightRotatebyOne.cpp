/*
----------------------------------------
Problem : Right Rotate an Array by One
Difficulty : Easy
Approach : Linear Traversal
Time Complexity : O(n)
Space Complexity : O(1)
Author : Sidra
Date : 09-07-2026
----------------------------------------
*/
#include<iostream>
#include<vector>

using namespace std;

void RightRotate(vector<int>& arr);
int main(){
    int size;
    cout<<"Enter the size of an Array :\n";
    cin >>size;
    vector<int>array(size);
    cout<<"Enter the Elements of an Array :\n";
    for (int i=0;i<array.size();i++){
        cin >>array[i];
    }

    RightRotate(array);
    cout<<"Array after Right Rotate :\n";
    for (int i=0;i<array.size();i++){
        cout<<array[i]<<" ";
    }
    return 0;
};

void RightRotate(vector<int>& arr){
    int last=arr[arr.size()-1];
   for(int i = arr.size() - 1; i > 0; i--)
{   //move element to right
    arr[i] = arr[i - 1];
}
    //put last element at the first position
    arr[0]=last;
};