class Solution {
public:
    void sortColors(vector<int>& nums) {
        int first = 0;
        int last  = nums.size() -1;
        int i = 0;
        while(i <= last){
            if(nums[i]==0){
                swap(nums[first] , nums[i]);
                first++;
                i++;
            }else if(nums[i]==2){
                swap(nums[last] , nums[i]);
                last--;
            } else i++;
        }
    
    }
};