// ------------------------------------
// NeetCode Problem: group anagrams (Easy)
// Link: https://neetcode.io/problems/anagram-groups/question
// Date: 2025-11-23
// ------------------------------------

// Approach: make a map of keys of sorted strings, with vector of
// strings, these strings are the actual values.
// loop over the strings if I found this key -> the sorted one, then push back,
// it's value in the hashmap.

// Time Complexity: O(N * Mlog(M)) - loop over the strings, sort each string
// Space Complexity: O(N * M) - the keys and actual values.

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> mp;
        for (int i = 0; i < strs.size(); ++i)
        {
            string sorted_key = strs[i];
            sort(sorted_key.begin(), sorted_key.end());
            mp[sorted_key].push_back(strs[i]);
        }

        vector<vector<string>> ans;
        for (auto it : mp)
        {
            vector<string> values;
            for (int i = 0; i < it.second.size(); ++i)
            {
                values.push_back(it.second[i]);
            }
            ans.push_back(values);
        }
        return ans;
    }
};
