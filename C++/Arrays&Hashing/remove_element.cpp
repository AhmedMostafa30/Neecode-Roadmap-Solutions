// ------------------------------------
// NeetCode Problem: logest common prefix (Easy)
// Link: https://neetcode.io/problems/remove-element/question
// Date: 2025-11-24
// ------------------------------------

// Approach: the main idea is that I need to remove elements in place from the array.
// First Approach: iterate over the original array and add the values that are not equal to
// the value to another array, assign the values to the original array. [brute force solution]

// Time Complexity: O(N)
// Space Complexity: O(N)

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        vector<int> temp;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] != val)
                temp.push_back(nums[i]);
        }
        for (int i = 0; i < temp.size(); ++i)
        {
            nums[i] = temp[i];
        }
        return temp.size();
    }
};

// Second Approach: [Two pointers] one for the value that is equal to the "value"
// and if I reach to the point that not equal to "value" swap and increase the index.

// Time Complexity: O(N)
// Space Complexity: O(1)

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int k = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] != val)
            {
                nums[k++] = nums[i];
            }
        }
        return k;
    }
};

/*
nums = [1,1,2,3,4], val = 1
new_nums = [2,3,4]

nums = [0,1,2,2,3,0,4,2], val = 2
new_nums = [0, 1, 3, 0, 4]
*/