class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for ( int i = 0;i<nums2.size();i++){
            int j=m-1;
            for(;j>=0;j--){
                if(nums2[i]<nums1[j]){
                    nums1[j+1]=nums1[j];
                    nums1[j]=nums2[i];
                }
                else {nums1[j+1]=nums2[i];
                break;}
            }
            if(j<0) nums1[0]=nums2[i];
            m++;
        }
    }
};