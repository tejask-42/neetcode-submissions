class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size(); if (n <= 1){return nums;} vector<int> left, right; 
        for (int i=0; i<n; i++){
            if (i<n/2){left.push_back(nums[i]);}
            else{right.push_back(nums[i]);}
        }
        left = sortArray(left); right = sortArray(right);
        int i = 0, j=0, ind = 0;
        while (i<left.size() && j<right.size()){
            if (left[i]<right[j]){nums[ind] = left[i]; i++;}
            else{nums[ind] = right[j]; j++;}
            ind++;
        }
        while (i<left.size()){nums[ind] = left[i]; i++; ind++;}
        while (j<right.size()){nums[ind] = right[j]; j++; ind++;}
        return nums;
        
    }
};