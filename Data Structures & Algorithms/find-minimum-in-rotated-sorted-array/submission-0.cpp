class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int small=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[low]<=nums[mid]){
                small=min(small,nums[low]);
                low=mid+1;
            }
            else{
                small=min(small,nums[mid]);
                high=mid-1;
            }
        }
        return small;
        
    }
};