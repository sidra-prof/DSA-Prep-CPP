/*
----------------------------------------
Problem : Remove Duplicates from a Sorted Array
Difficulty : Easy
Approach : Two Pointer Technique
Time Complexity : O(n)
Space Complexity : O(1)
Author : Sidra
Date : 12-07-2026
----------------------------------------
*/

#include <iostream>
#include <vector>

using namespace std;

// Function Prototype
int RemoveDuplicates(vector<int>& arr);

int main()
{
    int size;

    cout << "Enter the size of an Array: ";
    cin >> size;

    vector<int> array(size);

    cout << "Enter the Elements of the Array:\n";

    for (int i = 0; i < array.size(); i++)
    {
        cin >> array[i];
    }

    int newSize = RemoveDuplicates(array);

    cout << "\nArray after removing duplicates:\n";

    for (int i = 0; i < newSize; i++)
    {
        cout << array[i] << " ";
    }

    cout << "\nNew Size = " << newSize;

    return 0;
}

// Function Definition
int RemoveDuplicates(vector<int>& arr)
{
    if (arr.empty())
        return 0;

    int j = 0;

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] != arr[j])
        {
            j++;
            arr[j] = arr[i];
        }
    }

    return j + 1;
}