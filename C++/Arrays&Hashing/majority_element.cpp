// ------------------------------------
// NeetCode Problem: logest common prefix (Easy)
// Link: https://neetcode.io/problems/majority-element/question
// Date: 2025-11-24
// ------------------------------------

// Approach: My intuition for this problem is that, if the majority element, is > length/2
// then after sorting the array it should be the element at that index arr[length/2];

// Time Complexity: O(N logN) -for sorting the array
// Space Complexity: O(1) or O(N) depending on the sorting algorithm

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int index = nums.size() / 2;
        return nums[index];
    }
};

/*
1 1 1 1 2 2 3 3 3 4 4
*/
