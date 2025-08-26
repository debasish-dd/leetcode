class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;  // handle k > n

        vector<int> fnums;
        vector<int> lnums;

        int e = n - 1;
        // take last k elements
        for (int i = 0; i < k; i++) {
            fnums.push_back(nums[e--]);
        }
        // take first n-k elements
        for (int i = 0; i <= e; i++) {
            lnums.push_back(nums[i]);
        }

        // put fnums back reversed
        int s = 0;
        for (int i = fnums.size() - 1; i >= 0; i--) {
            nums[s++] = fnums[i];
        }

        // then put lnums
        for (int i = 0; i < lnums.size(); i++) {
            nums[s++] = lnums[i];
        }
    }
};
