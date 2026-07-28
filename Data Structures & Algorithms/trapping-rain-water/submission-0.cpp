class Solution {
public:
    int trap(vector<int>& height) {
        int n= height.size();
        int left=0;
        int right=n-1;
        int maxp=0;
        int leftmaxp=0;
        int rightmaxp=0;
        while(left<right){
            if(height[left]<height[right]){
                if(height[left]>=leftmaxp){
                    leftmaxp=height[left];
                }
                else{
                    maxp+=leftmaxp-height[left];
                }
                left++;
            }
            else{
                if(height[right]>=rightmaxp){
                    rightmaxp=height[right];
                }
                else{
                    maxp+=rightmaxp-height[right];
                }
                right--;
            }
        }
        return maxp;

        
    }
};
