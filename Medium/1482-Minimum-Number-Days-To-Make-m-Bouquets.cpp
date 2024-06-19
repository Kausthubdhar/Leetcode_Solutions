class Solution {
public:
    bool isTrue(vector<int>& bloomDay,int &m, int &k, int &mid){
        int ans = 0,cnt = 0;
        for(auto &it: bloomDay){
            if(it > mid) cnt = 0;
            cnt += (it <= mid);
            ans += (cnt==k);
            if(cnt == k) cnt = 0;
        }
        return (ans >= m) ? true : false;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if((n/k) < m) return -1;
        int low = 1, high = 1e9+3;
        int ans = INT_MAX;
        while(low <= high){
            int mid = low + (high - low)/2; 
            if(isTrue(bloomDay,m,k,mid)){
                ans = int(mid);
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return (ans == INT_MAX) ? -1 : ans;
    }
};