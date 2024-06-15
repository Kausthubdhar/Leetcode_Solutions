class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n = rowIndex+1;
        vector<int> res(n);
        res[0] = 1, res[n-1] = 1;
        for(int i=1; i<n-1; ++i){
            res[i] = int((long(res[i-1]) * long(rowIndex-i+1))/i);
        }
        return res;
    }
};