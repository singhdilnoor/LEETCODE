class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> arr;
        
        for(int i = 0; i < nums.size(); i++){
            int idx = abs(nums[i]) - 1;
            if(nums[idx] < 0){
                arr.push_back(abs(nums[i]));
            } else {
                nums[idx] = -nums[idx];
            }
        }
        return arr;
    }
};