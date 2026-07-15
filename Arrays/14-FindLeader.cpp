/*
----------------------------------------
Problem : Leaders in an Array
Difficulty : Medium
Approach : Traverse from Right
Time Complexity : O(n)
Space Complexity : O(n)
Author : Sidra
Date : 15-07-2026
----------------------------------------
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> findLeaders(vector<int>& arr);

int main()
{
    int size;

    cout << "Enter the size of an Array: ";
    cin >> size;

    vector<int> array(size);

    cout << "Enter the Elements of an Array:\n";

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    vector<int> leaders = findLeaders(array);

    cout << "\nLeader Elements are:\n";

    for (int i = 0; i < leaders.size(); i++)
    {
        cout << leaders[i] << " ";
    }

    return 0;
}

vector<int> findLeaders(vector<int>& arr)
{
    vector<int> leaders;

    // Last element is always a leader
    int maxRight = arr[arr.size() - 1];
    leaders.push_back(maxRight);

    // Traverse from right to left
    for (int i = arr.size() - 2; i >= 0; i--)
    {
        if (arr[i] > maxRight)
        {
            maxRight = arr[i];
            leaders.push_back(arr[i]);
        }
    }

    // Reverse because we collected leaders from right to left
    reverse(leaders.begin(), leaders.end());

    return leaders;
}