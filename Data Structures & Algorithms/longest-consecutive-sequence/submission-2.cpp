class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int > freq(nums.begin(),nums.end());
        int longest=0;
        
        for (int num:freq){
            if(freq.find(num-1)==freq.end()){
                int current = num;
                int length = 1;
                while(freq.find(current + 1)!=freq.end()){
                      current++;
                      length+=1;
                }
                longest=max(longest,length);
            }
            
        
        
        }
        return longest;
    }
};