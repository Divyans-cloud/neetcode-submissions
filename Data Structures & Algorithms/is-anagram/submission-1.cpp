class Solution {
public:
    bool isAnagram(string s, string t) {
        map<long long ,long long >f1;
        map<long long ,long long >f2;
        for (int i=0;i<s.length();i++){
            f1[s[i]]++;
        }
        for (int j=0;j<t.length();j++){
            f2[t[j]]++;
        }
        if(f1==f2){
            return true;
        }
        else return false ;
        
        
    }
};
