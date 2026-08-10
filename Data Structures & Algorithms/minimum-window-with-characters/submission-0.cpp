class Solution {
public:
    string minWindow(string s, string t) {
        int m=s.size();
        int n=t.size();
        int l_index=-1;
        int min_length=INT_MAX;
        unordered_map<char,int>hash;
        for(char c:t){
            hash[c]++;
        }
        int l=0;
        int r=0;
        int count=0;
        while(r<m){
            if(hash[s[r]]>0){
                count++;
            }
            hash[s[r]]--;
            while(count==n){
                if((r-l+1)<min_length){
                    min_length=r-l+1;
                    l_index=l;
                }
                hash[s[l]]++;
                if(hash[s[l]]>0){
                    count--;
                }
                l++;
            }
            r++;
        }
        return l_index==-1? "":s.substr(l_index,min_length);
        
    }
};
