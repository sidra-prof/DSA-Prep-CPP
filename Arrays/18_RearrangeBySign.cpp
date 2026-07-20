/*
----------------------------------------
Problem : Rearrange the Elements By Their Sign
Difficulty : Medium
Approach : Extra Array
Time Complexity : O(n)
Space Complexity : O(n)
Author : Sidra
Date : 20-07-2026
----------------------------------------
*/

#include <iostream>
#include <vector>

using namespace std;

// Function Prototype
vector<int> RearrangeBySign(vector<int>& arr);

int main()
{
    int size;

    cout << "Enter the size of an Array: ";
    cin >> size;

    vector<int> array(size);

    cout << "Enter the Elements of an Integer Array:\n";

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    vector<int> ans = RearrangeBySign(array);

    cout << "\nAfter Rearranging the Array:\n";

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i]<<" ";
    }

    cout << endl;

    return 0;
}

// Function Definition
vector<int> RearrangeBySign(vector<int>& arr)
{
    vector<int> ans(arr.size());

    int positiveIndex = 0;
    int negativeIndex = 1;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
        {
            ans[positiveIndex] = arr[i];
            positiveIndex += 2;
        }
        else
        {
            ans[negativeIndex] = arr[i];
            negativeIndex += 2;
        }
    }

    return ans;
}