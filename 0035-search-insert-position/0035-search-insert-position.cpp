class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto it=lower_bound(nums.begin(),nums.end(),target);
        int index=it-nums.begin();
        if( binary_search(nums.begin(),nums.end(),target)){
            return index;
        }
        else return index;
        
    }
};