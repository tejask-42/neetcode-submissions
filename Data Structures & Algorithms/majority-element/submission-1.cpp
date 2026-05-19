class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int max_elem=nums[0], freq = 1; 
        for (int i=1; i<nums.size(); i++){
            if (nums[i] == max_elem){freq++;}
            else {freq--; if (freq < 0){max_elem = nums[i]; freq = 1;}}
        }
        return max_elem;
    }
};