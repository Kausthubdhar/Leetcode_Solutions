typedef long long ll;
class Solution {
public:
    bool judgeSquareSum(int c) {
        ll b = 0;
        for(;b*b <= c; b++){
            ll temp = c - (b*b);
            double a = sqrt(temp);
            if(a == static_cast<int>(a)) return true; 
        }
        return false;
    }
};