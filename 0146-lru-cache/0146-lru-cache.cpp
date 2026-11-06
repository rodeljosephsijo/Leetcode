class LRUCache {
    int capacity;
    list<pair<int, int>> l;
    unordered_map<int, list<pair<int, int>>::iterator> mp;

public:
    LRUCache(int cap) {
        capacity = cap;
    }

    int get(int key) {
        if (mp.find(key) == mp.end())
            return -1;

        l.splice(l.begin(), l, mp[key]);
        return mp[key]->second;
    }

    void put(int key, int value) {
        if (mp.find(key) != mp.end()) {
            l.splice(l.begin(), l, mp[key]);
            mp[key]->second = value;
            return;
        }

        if (l.size() == capacity) {
            int oldKey = l.back().first;
            mp.erase(oldKey);
            l.pop_back();
        }

        l.push_front({key, value});
        mp[key] = l.begin();
    }
};