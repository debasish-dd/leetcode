class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for(int i =0; i<nums.size();i++){
            string elem = to_string(nums[i]);
            bool isEvenNumber = elem.length()%2;
            if(!isEvenNumber){
            ans++;
            } 
        }
        return ans;
    }
};