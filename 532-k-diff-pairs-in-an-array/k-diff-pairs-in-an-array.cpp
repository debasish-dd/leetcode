class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k<0) return 0;
        unordered_map<int, int> hash;
        int count = 0;
        for(auto i: nums){
            hash[i]++;
        }
            if(k==0){
                for(auto &p: hash){
                    if(p.second>=2){
                        count++;
                    }
                }
            } else{
                for(auto &p: hash){
                    if(hash.count(p.first + k)){
                        count++;
                    }
                }
            }
        
        return count;
    }
};