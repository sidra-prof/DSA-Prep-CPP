/*
----------------------------------------
Problem : Check if the Array is Palindrome or not
Difficulty : Easy
Approach : Linear Traversal
Time Complexity : O(n)
Space Complexity : O(1)
Author : Sidra
Date : 11-07-2026
----------------------------------------
*/
#include<iostream>
#include<vector>

using namespace std;
bool Palindrome(vector<int>& arr);
int main(){
    int size;
    cout<<"Enter the size of an Array: \n";
    cin>>size;
    vector<int>array(size);
    cout<<"Enter the Elements of an Array:\n";
    for(int i=0;i<array.size();i++){
        cin>>array[i];
    }
    // Check palindrome
    if(Palindrome(array)){
        cout<<"Palindrome\n";
    }else{
        cout<<"Not a Palindrome\n";
    }
    return 0;
}

bool Palindrome(vector<int>&arr){
    for(int i=0,j=arr.size()-1;i<j;i++,j--){
        if(arr[i]!=arr[j]){
            return false;
        }
    }
    return true;

}