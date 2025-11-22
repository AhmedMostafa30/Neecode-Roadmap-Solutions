// ------------------------------------
// NeetCode Problem: Concatenation of Array (Easy)
// Link: https://neetcode.io/problems/concatenation-of-array/
// Date: 2025-11-22
// ------------------------------------

// Approach: Iterate once on the array with doubled siz
// set the cur index and cur index + size equal to nums[cur]

// Time Complexity: O(N) - We iterate through the list once.
// Space Complexity: O(N) - We need new victor with doubled size, O(2*N) ~ O(N)

class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        int sz = nums.size();
        vector<int> ans(sz * 2, 0);
        for (int i = 0; i < sz; ++i)
        {
            ans[i] = nums[i];
            ans[i + sz] = nums[i];
            // ans[i] = ans[i + sz] = nums[i]; this also is true.
        }
        return ans;
    }
};