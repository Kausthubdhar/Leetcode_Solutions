class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size(), sum = 0,res = 0;
        for(int i=0;i<n;++i){
            sum += (grumpy[i]==0) ? customers[i] : 0;
        }
        for(int i=0;i<n;++i){
            if(i < minutes){
                sum += (grumpy[i]==1) ? customers[i] : 0;
                res = max(res, sum);
            }
            if(i >= minutes){
                if(grumpy[i-minutes]==1) sum -= customers[i-minutes];
                if(grumpy[i]==1) sum += customers[i];
                res = max(res, sum);
            }
        }
        return res;
    }
};