/*
----------------------------------------
Problem : Reverse an Array
Difficulty : Easy
Approach : Two Pointer Technique
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
void ReverseArray(vector<int> &arr);

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

    // Reverse the array
    ReverseArray(array);

    // Print the reversed array
    cout << "\nReversed Array is:\n";

    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}

// Function Definition
void ReverseArray(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start < end)
    {
        // Swap elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move pointers
        start++;
        end--;
    }
}