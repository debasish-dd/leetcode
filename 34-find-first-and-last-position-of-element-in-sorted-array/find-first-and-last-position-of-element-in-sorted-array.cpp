class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1, -1};
        if (nums.size() == 0)
            return ans;

        int l = 0, h = nums.size() - 1;
        int m = 0;
        while (l <= h) {
            m = l + (h - l) / 2;
            if (nums[m] == target)
                break;
            else if (nums[m] > target)
                h = m - 1;
            else
                l = m + 1;
        }
        if (nums[m] != target)
            return ans;
        ans = {m, m};
        // finding first
        h = m - 1;
        l = 0;
        while (l <= h) {
            int mid = l + (h - l) / 2;
            if (nums[mid] == target) {
                ans[0] = mid;
                h = mid-1;
            } else if (nums[mid] > target)
                h = mid - 1;
            else
                l = mid + 1;
        }
        // finding last
        l = m + 1;
        h = nums.size() - 1;
        while (l <= h) {
            int mid = l + (h - l) / 2;
            if (nums[mid] == target) {
                ans[1] = mid;
                l = mid+1;
            } else if (nums[mid] > target)
                h = mid - 1;
            else
                l = mid + 1;
        }
        return ans;
    }
};