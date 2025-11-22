// ------------------------------------
// NeetCode Problem: Concatenation of Array (Easy)
// Link: https://neetcode.io/problems/two-sum/
// Date: 2025-11-22
// ------------------------------------

// Approach: Construct a map with value -> index
// iterate over the array if the diff found in the map
// and index in the map not equal the current index.
// then it's valid. return cur index and rem index.

// Time Complexity: O(N) - We iterate through the list once.
// Space Complexity: O(N) - For the hash map space.
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); ++i)
        {
            mp[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); ++i)
        {
            int rem = target - nums[i];
            if (mp[rem] && mp[rem] != i)
            {
                return {i, mp[rem]};
            }
        }

        return {};
    }
};
