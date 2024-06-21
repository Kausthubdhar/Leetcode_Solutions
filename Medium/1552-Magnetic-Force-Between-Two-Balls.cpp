#define all(c) c.begin(),c.end()
class Solution {
public:
    bool isPossible(vector<int>& p,int m,int n,int mid){
        int cnt = 1, prev = p[0];
        for(int i=1;i<n;++i){
            if(abs(p[i]-prev) >= mid){
                cnt++;
                prev = p[i];
            }
        }
        return (cnt >= m) ? true : false;
    }

    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        int low = 1, high = 1e9+5, ans = -1;
        sort(all(position));
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(isPossible(position,m,n,mid)){
                ans = mid;
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return ans;
    }
};