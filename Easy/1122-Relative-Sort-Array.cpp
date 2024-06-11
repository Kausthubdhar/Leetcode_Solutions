class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> mp;
        vector<int> temp, res;
        for(auto it: arr2) mp[it]++;
        for(auto it: arr1){
            if(mp[it] != 0) mp[it]++;
            else temp.push_back(it);
        }
        sort(temp.begin(),temp.end());
        for(auto it: arr2){
            for(int i=1;i<mp[it]; ++i) res.push_back(it);
        }
        res.insert(res.end(),temp.begin(),temp.end());
        return res;
    }
};