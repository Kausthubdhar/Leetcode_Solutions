#define all(x) x.begin(),x.end()
class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        reverse(all(s));
        int left=0,right=0,idx=0;
        while(idx < n){
            while(idx<n && s[idx]==' ')idx++;
            if(idx==n) break;
            while(idx<n && s[idx]!=' '){
                s[right++] = s[idx++];
            }
            reverse(s.begin()+left, s.begin()+right);
            s[right++] = ' ';
            left = right;
            idx++;
        }
        s.resize(right-1);
        return s;
    }
};