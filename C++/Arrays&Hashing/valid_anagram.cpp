
// ------------------------------------
// NeetCode Problem: valid anagram (Easy)
// Link: https://neetcode.io/problems/is-anagram/question
// Date: 2025-11-22
// ------------------------------------

// Approach: Make 2 unordered maps for the 2 strings
// after constructing the 2 maps, compare it with each other.
// if they are equal then true, else false.

// Time Complexity: O(N) - We iterate through the strings once.
// Space Complexity: O(1) - the space is constant since they are only 26 characters O(26) ~ O(1).

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
            return false;
        unordered_map<char, int> s_map, t_map;
        for (int i = 0; i < s.length(); ++i)
        {
            s_map[s[i]]++;
        }
        for (int i = 0; i < t.length(); ++i)
        {
            t_map[t[i]]++;
        }

        // we can replace this for loop with
        //  if(s_map == t_map) this simply go for every element
        //  and compare it's keys and values.
        for (auto it = s_map.begin(); it != s_map.end(); ++it)
        {
            char cur = it->first;
            int count = it->second;
            if (t_map[cur] != count)
                return false;
        }
        return true;
    }
};

// another click here if the problem contains and alphabet character
// keep in your mind the char array count[char - 'a'] since they are 26 characters

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
            return false;
        vector<int> count(26, 0);
        for (int i = 0; i < s.length(); ++i)
        {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for (int val : count)
        {
            if (val != 0)
                return false;
        }
        return true;
    }
};
