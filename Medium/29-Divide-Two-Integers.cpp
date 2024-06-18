typedef long long ll;
class Solution {
public:
    int divide(ll dividend, ll divisor) {
        if(dividend == divisor) return 1;
        bool p = (divisor>0 && dividend>0 || divisor<0 && dividend<0);
        divisor = abs(divisor), dividend = abs(dividend);
        ll quotient = 0;
        while(dividend >= divisor){
            ll cnt = 0;
            while(dividend > (divisor<<(cnt+1))) cnt++;
            quotient += (1<<cnt);
            dividend -= (divisor<<cnt);
        }
        if(quotient > INT_MAX && p) return INT_MAX;
        if(quotient > INT_MAX && !p) return INT_MIN;
        return p ? int(quotient) : int(-quotient);
    }
};