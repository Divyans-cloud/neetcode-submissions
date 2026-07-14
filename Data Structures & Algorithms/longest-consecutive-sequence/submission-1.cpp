/*class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int > freq(nums.begin(),nums.end());
        int length=0;
        
        for (int num:freq){
            if(freq.find(num-1)==freq.end()){
                int current = num;
                while(freq.find(current + 1)==freq.end()){
                      length++;
                      current++;
            }
            }
            
        
        return length;
        }
    }
};*/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        // Store all numbers in a hash set for O(1) lookup
        unordered_set<int> st(nums.begin(), nums.end());

        int longest = 0;

        // Iterate through every unique number
        for (int num : st) {

            // Check if this number is the start of a sequence
            if (st.find(num - 1) == st.end()) {

                int current = num;
                int currentLength = 1;

                // Continue while the next consecutive number exists
                while (st.find(current + 1) != st.end()) {
                    current++;
                    currentLength++;
                }

                // Update the maximum sequence length
                longest = max(longest, currentLength);
            }
        }

        return longest;
    }
};
