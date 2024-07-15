class Solution {
public:
    void fun(int idx,vector<int> temp, vector<int>& candidates,int sum, int target,vector<vector<int>>& res){
        if(idx >= candidates.size() || sum > target) return;
        if(sum == target){
            res.push_back(temp);
            return;
        }
        temp.push_back(candidates[idx]);
        fun(idx,temp,candidates,sum+candidates[idx],target,res);
        temp.pop_back();
        fun(idx+1,temp,candidates,sum,target,res);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        fun(0,{},candidates,0,target,res);
        return res;
    }
};