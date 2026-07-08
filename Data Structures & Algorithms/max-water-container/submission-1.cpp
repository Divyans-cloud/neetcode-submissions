class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n =heights.size();
        int left=0;
        int right =n-1;
        int maxp=0;
        while(left<right){
            int store = min(heights[left],heights[right])*(right-left) ;
            maxp = max(maxp,store);
            if(heights[left]<=heights[right]){
                left++;
            }
            else {
                right--;
            }
           
        }
         return maxp;
        
    }
};
