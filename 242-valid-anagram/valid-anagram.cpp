class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char , int> hash;
        for(auto i: s){
            hash[i]++;
        }
        for(auto i: t){
            hash[i]--;
        }
        string len = s.size()>t.size()?s:t;
        for(auto i: len){
            if(hash[i]!=0){
                return false;
            }
        }
        return true;
    }
};