class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==0){
                ans.push_back(nums[i]);
            }
        }
        for(int i = nums.size() -1;i>=0;i--){
            if(nums[i]!=0){
                ans.insert(ans.begin() , nums[i]);
            }
        }
        for(int i = 0;i<ans.size();i++){
           nums[i] = ans[i];
        }
    }
};