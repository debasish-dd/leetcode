class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        unordered_set<int> st (nums.begin(), nums.end());
        int longest = 0;
        for(auto num: st){
            if(st.find(num-1)==st.end()){
            int len = 0;
            int current = num;
                while(st.find(current)!=st.end()){
                    len++;
                    current++;
                }
            longest = max(longest, len);
            }
        }   

        return longest;
    }
};