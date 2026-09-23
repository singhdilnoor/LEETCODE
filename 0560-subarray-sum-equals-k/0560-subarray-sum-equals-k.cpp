class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;   // prefix_sum -> how many times it occurred
        mp[0] = 1;                    // empty prefix (sum=0) has occurred once, before we start
        int sum = 0;
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];                    // running prefix sum
            if (mp.find(sum - k) != mp.end()) {
                count += mp[sum - k];           // add how many earlier prefixes equal sum-k
            }
            mp[sum]++;                          // record current prefix sum's occurrence
        }
        return count;
    }
};