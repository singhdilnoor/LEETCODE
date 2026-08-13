class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int prod=0;
        int y;
        int right=height.size()-1;
        while(left<right){
            if(height[left]<height[right]){
                y=height[left]*(right-left);
                if(y>prod) prod=y;
                left++;
            }
            else {y=height[right]*(right-left);
            if(y>prod) prod=y;
            right--;}

        }
        return prod;
    }
};