class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> ans;
        for(int i = 0;i<nums.size();i++){
            ans[nums[i]]++;
        }
        int result = INT_MIN;
        int elem;
        for (const auto& [element, count] : ans) {
            if(count>=result){
                result = count;
                elem = element;
            }
        }
        return elem;
    }
};