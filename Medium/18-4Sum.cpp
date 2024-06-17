#define all(x) x.begin(),x.end()
typedef long long ll;
class Solution {
public:
    void fun(vector<vector<int>>& res, vector<int>& nums, ll target, int idx, int n, ll sum, int cnt,vector<int> temp){
        if(cnt == 2){
            int low = idx, high = n-1;
            ll findE = target-sum;
            while(low < high){
                ll S = nums[low] + nums[high];
                if(S == findE){
                    temp.push_back(nums[low]), temp.push_back(nums[high]);
                    res.push_back(temp);
                    while(low < high && nums[low] == nums[low+1]) low++;
                    while(low < high && nums[high] == nums[high-1]) high--;
                    low++,high--;
                    temp.pop_back(), temp.pop_back();
                }else if(S < findE){
                    low++;
                }else{
                    high--;
                }
            }
            return;
        }
        for(int i=idx; i<=n-cnt;){
            temp.push_back(nums[i]);
            fun(res,nums,target,i+1,n,sum+nums[i],cnt-1,temp);
            temp.pop_back();
            i++;
            while(i<n && nums[i]==nums[i-1]) i++;
        }
    }

    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        if(n < 4) return {};
        sort(all(nums));
        vector<vector<int>> res;
        vector<int> temp;
        fun(res,nums,target,0,n,0LL,4,temp);
        return res;
    }
};