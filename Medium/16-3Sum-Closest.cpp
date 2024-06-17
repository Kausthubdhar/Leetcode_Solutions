#define all(x) x.begin(),x.end()
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int,int>> res;
        sort(all(nums));
        for(int i=0;i<n-2;++i){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int low = i+1, high = n-1;
            int findE = target-nums[i];
            while(low < high){
                int sum = nums[low] + nums[high];
                int tt = nums[i] + nums[low] + nums[high];
                if(sum < findE){
                    res.push_back({abs(tt-target),tt});
                    low++;
                }else{
                    res.push_back({abs(tt-target),tt});
                    high--;
                }
            }
        }
        sort(all(res),[&](auto a, auto b){
            return a.first < b.first;
        });
        return res[0].second;
    }
};