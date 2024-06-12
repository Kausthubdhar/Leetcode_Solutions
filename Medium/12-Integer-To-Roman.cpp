class Solution {
public:
    string intToRoman(int n) {
        string str = "";
        unordered_map<int,string> mp;
        mp[1] = "I",mp[5] = "V", mp[9] = "IX", mp[10] = "X", mp[50] = "L", mp[100] = "C", mp[500] = "D", mp[1000] = "M";
        string num = to_string(n);
        int len = num.size();
        for(auto it: num){
            if(it == '0'){
                len--;
                continue;
            }
            else if(len == 1){
                if(it > '5' && it != '9'){
                    char ch = '6';
                    str += mp[5];
                    for(;ch <= it; ++ch) str += mp[1];
                }
                else if(it == '5') str += mp[5];
                else if(it == '4' || it == '9') str += (it == '4' ? "IV" : "IX");
                else{
                    char ch = '1';
                    for(; ch <= it; ++ch) str += mp[1];
                }
            }
            if(len == 2){
                if(it > '5' && it != '9'){
                    char ch = '6';
                    str += mp[50];
                    for(;ch <= it; ++ch) str += mp[10];
                }
                else if(it == '5') str += mp[50];
                else if(it == '4') str += "XL";
                else if(it == '9') str += "XC";
                else{
                    char ch = '1';
                    for(; ch <= it; ++ch) str += mp[10];
                }
            }
            else if(len == 3){
                if(it > '5' && it != '9'){
                    char ch = '6';
                    str += mp[500];
                    for(;ch <= it; ++ch) str += mp[100];
                }
                else if(it == '5') str += mp[500];
                else if(it == '4' || it == '9') str += (it == '4' ? "CD" : "CM");
                else{
                    char ch = '1';
                    for(; ch <= it; ++ch) str += mp[100];
                }
            }
            else if(len == 4){
                char ch = '1';
                for(; ch <= it; ++ch) str += mp[1000];
            }
            len--;
        }
        return str;
    }
};