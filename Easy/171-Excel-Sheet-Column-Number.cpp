#include<bits/stdc++.h>
class Solution {
public:
    int titleToNumber(string str) {
        int n = str.size();
        int p = 0, res = 0;
        for(int i=n-1;i>=0;--i){
            res += ((pow(26,p++) * (str[i]-'A'+1)));
        }
        return res;
    }
};