class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n =s.size();
        if(n==0) return 0;
        int res=0;
        vector<bool>vis(128,false);
        int left=0;
        for(int right=0;right<n;right++){
            // to decrease or shrink the window until the duplicateis found
            while(vis[s[right]]){
                vis[s[left]]=false;
                left++;
            }
            // mark the current charater as visit 
            vis[s[right]]=true;
            res=max(res,right-left+1);
        }
        return res;
         
    }
};