class Solution {
public:
    void fun(vector<string>& res, unordered_map<char,string>& mp,int idx,int n,string digits, string temp){
        if(idx == n){
            res.push_back(temp);
            return;
        }
        for(auto it: mp[digits[idx]]){
            fun(res,mp,idx+1,n,digits,temp+it);
        }
    }

    vector<string> letterCombinations(string digits) {
        int n = digits.size();
        if(!n) return {};
        vector<string> res;
        unordered_map<char,string> mp;
        mp['2'] = "abc", mp['3'] = "def", mp['4'] = "ghi",mp['5'] = "jkl", mp['6'] = "mno", mp['7'] = "pqrs", mp['8'] = "tuv", mp['9'] = "wxyz";
        fun(res,mp,0,n,digits,"");
        return res;
    }
};