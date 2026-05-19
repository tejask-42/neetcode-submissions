class Solution {
public:
    bool isAnagram(string s, string t) {
        int count = 0; if(s.size() != t.size()) return false;
        for (int i=0; i<s.size(); i++){
            count += (1<<(s[i] - 'a')) - (1<<(t[i] - 'a'));
        }
        return (count == 0);
    }
};
