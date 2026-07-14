/*
----------------------------------------
Problem : Intersection of Two Sorted Arrays
Difficulty : Easy
Approach : Two Pointer Technique
Time Complexity : O(n + m)
Space Complexity : O(n + m)
Author : Sidra
Date : 13-07-2026
----------------------------------------
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> Intersection(vector<int>& arr1, vector<int>& arr2);

int main()
{
    int size1, size2;

    cout << "Enter the size of First Array: ";
    cin >> size1;

    vector<int> arr1(size1);

    cout << "Enter the Elements of First Array:\n";
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter the size of Second Array: ";
    cin >> size2;

    vector<int> arr2(size2);

    cout << "Enter the Elements of Second Array:\n";
    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }

    vector<int> ans = Intersection(arr1, arr2);

    cout << "\nIntersection of Two Arrays:\n";

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}


vector<int> Intersection(vector<int>&arr1,vector<int>&arr2){
    vector<int> ans;
    int i=0;
    int j=0;
       while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] < arr2[j])
        {
            // Avoid duplicate insertion
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            // Both elements are equal
            if (ans.empty() || ans.back() != arr1[i])
                ans.push_back(arr1[i]);

            i++;
            j++;
        }
    }
    return ans;
}