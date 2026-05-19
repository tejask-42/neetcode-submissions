class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for (string str: strs){
            string temp = str; sort(str.begin(), str.end());
            m[str].push_back(temp);
        }
        vector<vector<string>> ans; 
        for (auto pair: m){ ans.push_back(pair.second);}
        return ans;
    }
};
