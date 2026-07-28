class Solution {
public:
    int binarySearch(vector<int>& nums, int l, int h, int target) {
        while (l <= h) {
            int mid = l + (h - l) / 2;

            if (nums[mid] == target)
                return mid;
            else if (nums[mid] > target)
                h = mid - 1;
            else
                l = mid + 1;
        }

        return -1;
    }
    int search(vector<int>& nums, int target) {
        if (nums.size() == 0)
            return -1;
            
        int n = nums.size();

         // Already sorted
        if (nums[0] <= nums[n - 1])
            return binarySearch(nums, 0, n - 1, target);
        
        int low = 0, high = n - 1;
        int m = -1;
        while (low < high) {
            int mid = low + (high - low) / 2;
           if(nums[mid]>nums[high])
                low = mid +1;
            else high = mid;
           
            if (nums[mid] == target)
                return mid;
        }
         
         int pivot = low;

        // Decide which half to search
        if (target >= nums[0])
            return binarySearch(nums, 0, pivot - 1, target);
        else
            return binarySearch(nums, pivot, n - 1, target);
            }
    
};