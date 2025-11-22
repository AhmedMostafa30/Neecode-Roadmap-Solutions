// ------------------------------------
// NeetCode Problem: contains duplicate (Easy)
// Link: https://neetcode.io/problems/duplicate-integer/
// Date: 2025-11-22
// ------------------------------------

// Approach: iterate over the array and store the values in a set
// to remove the duplicates and check contains duplicates with any method.

// we can sort the array and check with time O(N) and space O(1) or O(N) depending on the sorting algorithm.

// Time Complexity: O(N) - We iterate through the list once.
// Space Complexity: O(N) - We need new victor with doubled size, O(2*N) ~ O(N)

class Solution
{
public:
    bool hasDuplicate(vector<int> &nums)
    {
        unordered_set<int> seen;
        for (int i = 0; i < nums.size(); ++i)
        {
            seen.insert(nums[i]);
        }
        return seen.size() < nums.size();
    }
};

class Solution
{
public:
    bool hasDuplicate(vector<int> &nums)
    {
        return unordered_set<int>(nums.begin(), nums.end()).size() < nums.size();
    }
};

class Solution
{
public:
    bool hasDuplicate(vector<int> &nums)
    {
        unordered_set<int> seen;
        for (int num : nums)
        {
            if (seen.count(num))
                return true;
            seen.insert(num);
        }
        return false;
    }
};
