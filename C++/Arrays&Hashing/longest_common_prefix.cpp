// ------------------------------------
// NeetCode Problem: logest common prefix (Easy)
// Link: https://neetcode.io/problems/longest-common-prefix/question
// Date: 2025-11-23
// ------------------------------------

// Approach: horizontal scanning, loop for every string,
// compare the index of the curent string with prefix string.
// if they are equal then increase the j, if not break.
// the current prefix will be the substring of the equal part.
// then continue comparing.

// Time Complexity: O(N*M)
// Space Complexity: O(1)

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string prefix = strs[0];
        for (int i = 1; i < strs.size(); ++i)
        {
            int j = 0;
            while (j < min(prefix.length(), strs[i].length()))
            {
                if (strs[i][j] != prefix[j])
                {
                    break;
                }
                j++;
            }
            prefix = prefix.substr(0, j);
        }
        return prefix;
    }
};
/*
dancegrm
cat car head

*/