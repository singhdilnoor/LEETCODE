class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] <= 0 || nums[i] > (int)nums.size())
                nums[i] = nums.size() + 1;
        }
        for(int j = 0; j < nums.size(); j++){
            int idx = abs(nums[j]) - 1;
            if(idx < (int)nums.size() && nums[idx] > 0)
                nums[idx] = -nums[idx];
        }
        for(int k = 0; k < nums.size(); k++){
            if(nums[k] > 0) return k + 1;
        }
        return nums.size() + 1;
    }
};