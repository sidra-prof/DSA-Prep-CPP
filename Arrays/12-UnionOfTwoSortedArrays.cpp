/*
----------------------------------------
Problem : Union of Two Sorted Arrays
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

vector<int> Union(vector<int>& arr1, vector<int>& arr2);

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

    vector<int> ans = Union(arr1, arr2);

    cout << "\nUnion of Two Arrays:\n";

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}

vector<int> Union(vector<int>& arr1, vector<int>& arr2)
{
    vector<int> ans;

    int i = 0;
    int j = 0;

    // Compare elements of both arrays
    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] < arr2[j])
        {
            // Avoid duplicate insertion
            if (ans.empty() || ans.back() != arr1[i])
                ans.push_back(arr1[i]);

            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            if (ans.empty() || ans.back() != arr2[j])
                ans.push_back(arr2[j]);

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

    // Remaining elements of first array
    while (i < arr1.size())
    {
        if (ans.empty() || ans.back() != arr1[i])
            ans.push_back(arr1[i]);

        i++;
    }

    // Remaining elements of second array
    while (j < arr2.size())
    {
        if (ans.empty() || ans.back() != arr2[j])
            ans.push_back(arr2[j]);

        j++;
    }

    return ans;
}

   
