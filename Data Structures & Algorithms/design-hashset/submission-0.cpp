class MyHashSet {
    int buckets = 1000;
    vector<vector<int>> v;
public:
    MyHashSet() : v(1000){};
    void add(int key) {
        if (!contains(key)) v[key % buckets].push_back(key);
    }
    
    void remove(int key) {
        auto& bucket = v[key % buckets];
        bucket.erase(std::remove(bucket.begin(), bucket.end(), key), bucket.end());
    }
    
    bool contains(int key) {
        auto& bucket = v[key % buckets];
        return (find(bucket.begin(), bucket.end(), key) != bucket.end());
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */