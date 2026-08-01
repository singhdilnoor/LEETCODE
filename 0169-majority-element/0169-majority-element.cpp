class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int ele;
        for(int  i=0;i<nums.size();i++){
            if(count==0){
                ele=nums[i];
                count=1;
            }
            else if(nums[i]==ele){
                count++;
            }
            else count--;
        }
        int  count1=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]==ele)  count1++;
            if(count1>(nums.size()/2)) return ele;
        }
        return  -1;
        
    }
};