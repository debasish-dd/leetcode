class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return 1;
        if (n == 2) return 2;

        int minVal = INT_MAX, maxVal = INT_MIN;
        int minI = 0, maxI = 0;

        for (int i = 0; i < n; ++i) {
            if (nums[i] < minVal) {
                minVal = nums[i];
                minI = i;
            }
            if (nums[i] > maxVal) {
                maxVal = nums[i];
                maxI = i;
            }
        }

        // ensure minI <= maxI for simpler math
        if (minI > maxI) swap(minI, maxI);

        int fromFront = maxI + 1;
        int fromBack = n - minI;
        int bothEnds = (minI + 1) + (n - maxI);

        return min({fromFront, fromBack, bothEnds});
    }
};