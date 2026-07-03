#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
bool hasDuplicate(vector<int>& nums){
        map<long long,long long>frequency_map;
        for(int i=0;i<nums.size();i++){
            frequency_map[nums[i]]++;
        }
        if(frequency_map.size()==nums.size()){
            return false;
        }
        else
            return true;


        
    }
};