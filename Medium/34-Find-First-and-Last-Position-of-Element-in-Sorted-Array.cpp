class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int f = -1, s = -1;
        int low = 0, high = n-1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(nums[mid] >= target){
                if(nums[mid]==target) f = mid;
                high = mid -1;
            }else low = mid + 1;
        }
        low = 0, high = n-1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(nums[mid] <= target){
                if(nums[mid]==target) s = mid;
                low = mid+1;
            }else high = mid -1;
        }
        return {f,s};
    }
};