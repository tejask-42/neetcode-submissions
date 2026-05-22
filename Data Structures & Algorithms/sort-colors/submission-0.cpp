class Solution {
public:
    void sortColors(vector<int>& nums) {
        int first = 0, n = nums.size(), last = nums.size() - 1;
        for (int i=0; i<n && i<=last; i++){
            if (nums[i] == 0){swap(nums[first], nums[i]); first++;}
            else if (nums[i] == 2){swap(nums[last], nums[i]); last--; i--;}
        }

    }
};