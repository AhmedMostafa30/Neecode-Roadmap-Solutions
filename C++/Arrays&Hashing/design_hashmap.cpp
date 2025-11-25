// ------------------------------------
// NeetCode Problem: contains duplicate (Easy)
// Link: https://neetcode.io/problems/design-hashmap/question
// Date: 2025-11-25
// ------------------------------------

// Time Complexity: O(1)
// Space Complexity: O(1000000)

class MyHashMap
{
public:
    vector<int> values;
    MyHashMap()
    {
        values = vector<int>(1000006, -1);
    }

    void put(int key, int value)
    {
        values[key] = value;
    }

    int get(int key)
    {
        if (values[key] != -1)
            return values[key];
        return -1;
    }

    void remove(int key)
    {
        values[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */