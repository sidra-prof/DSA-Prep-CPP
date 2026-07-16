/*
----------------------------------------
Problem : Maximum Consecutive Ones in an Array
Difficulty : Easy
Approach : Linear Traversal
Time Complexity : O(n)
Space Complexity : O(1)
Author : Sidra
Date : 16-07-2026
----------------------------------------
*/

#include <iostream>
#include <vector>

using namespace std;

// Function Prototype
int MaximumConsecutiveOnes(vector<int>& arr);

int main()
{
    int size;

    cout << "Enter the size of an Array: ";
    cin >> size;

    vector<int> array(size);

    cout << "Enter the Elements of an Array (0s & 1s):\n";

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout << "\nThe Maximum Consecutive Ones are: "
         << MaximumConsecutiveOnes(array);

    return 0;
}

// Function Definition
int MaximumConsecutiveOnes(vector<int>& arr)
{
    int count = 0;
    int maximum = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 1)
        {
            count++;

            if (count > maximum)
            {
                maximum = count;
            }
        }
        else
        {
            count = 0;
        }
    }

    return maximum;
}
 

