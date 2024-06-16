#define all(x) x.begin(),x.end()
class Solution {
public:
    string convertToTitle(int n) {
        string res = "";
        while(n > 0){
            n--;
            int rem = n % 26;
            res += ('A'+rem);
            n /= 26;
        }
        reverse(all(res));
        return res;
    }
};