// ------------------------------------
// NeetCode Problem: contains duplicate (Easy)
// Link: https://neetcode.io/problems/design-hashset/question
// Date: 2025-11-25
// ------------------------------------

// Time Complexity: O(1)
// Space Complexity: O(1000000)

class MyHashSet
{
public:
    vector<bool> keys;
    MyHashSet()
    {
        keys = vector<bool>(1000006, false);
    }
    // there are other way to resize a DS using constructor

    // vector<bool> keys = vector<bool>(1000006, false);;
    // MyHashSet()
    // {

    // }

    // OR

    // keys = vector<bool>;
    // MyHashSet() : keys(1000006, false){}

    void add(int key)
    {
        keys[key] = true;
    }

    void remove(int key)
    {
        keys[key] = false;
    }

    bool contains(int key)
    {
        return keys[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */