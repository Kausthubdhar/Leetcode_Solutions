class Solution {
public:
    string fun(int n,string temp,int c){
        if(c > n) return temp;
        string tt = "";
        char prev = temp[0];
        int cnt = 1;
        for(int i=1;i<temp.size();++i){
            if(temp[i]!=prev){
                tt += to_string(cnt);
                tt += prev;
                prev = temp[i];
                cnt = 1;
            }else cnt++;
        }
        if(cnt >= 1){
            tt += to_string(cnt);
            tt += prev;
        }
        return fun(n,tt,c+1);
    }

    string countAndSay(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        return fun(n,"1",2);
    }
};