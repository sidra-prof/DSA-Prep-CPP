/*
----------------------------------------
Problem : Check if an Array is Sorted
Difficulty : Easy
Approach : Linear Traversal
Time Complexity : O(n)
Space Complexity : O(1)
Author : Sidra
Date : 05-07-2026
----------------------------------------
*/

#include <iostream>
#include <vector>

using namespace std;

// Function Prototype
bool isSorted(vector<int>& arr);

int main()
{
    int size;

    cout << "Enter the size of an Array: ";
    cin >> size;

    vector<int> array(size);

    cout << "Enter the Elements of an Array:\n";

    for (int i = 0; i < array.size(); i++)
    {
        cin >> array[i];
    }

    if (isSorted(array))
    {
        cout << "\nArray is Sorted.";
    }
    else
    {
        cout << "\nArray is Not Sorted.";
    }

    return 0;
}

// Function Definition
bool isSorted(vector<int>& arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }

    return true;
}