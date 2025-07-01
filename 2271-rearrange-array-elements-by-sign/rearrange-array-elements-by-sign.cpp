class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = 0;
        vector<int> pos;
        vector<int> neg;

        while (n < nums.size()) {
            if (nums[n] > 0) {
                pos.push_back(nums[n]);
            } else {
                neg.push_back(nums[n]);
            }
            n++;
        }
        n =0;
        int i = 1 ,  j = 0;
        while(j<pos.size()){
            nums[n] = pos[j];
            nums[i] = neg[j];
            n+=2;
            i+=2;
            j++;
        }
        
        return nums;
    }
};