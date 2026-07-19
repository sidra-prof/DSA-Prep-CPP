/*
----------------------------------------
Problem : Maximum Sum of Subarray (Kadane's Algorithm)
Difficulty : Medium
Approach : Kadane's Algorithm (Linear Traversal)
Time Complexity : O(n)
Space Complexity : O(1)
Author : Sidra
Date : 18-07-2026
----------------------------------------
*/

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

// Function Prototype
int MaximumSubarraySum(vector<int>& arr);

int main()
{
    int size;

    cout << "Enter the size of an Array: ";
    cin >> size;

    vector<int> arr(size);

    cout << "Enter the Elements of an Array:\n";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "\nMaximum Sum of Subarray is: "
         << MaximumSubarraySum(arr);

    return 0;
}

// Function Definition
int MaximumSubarraySum(vector<int>& arr)
{
    int currSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        currSum += arr[i];

        if (currSum > maxSum)
        {
            maxSum = currSum;
        }

        if (currSum < 0)
        {
            currSum = 0;
        }
    }

    return maxSum;
}
