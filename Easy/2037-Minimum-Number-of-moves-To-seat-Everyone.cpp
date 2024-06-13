#define all(x) x.begin(),x.end()
class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(all(seats)), sort(all(students));
        int n = seats.size(), res = 0;
        for(int i=0;i<n;++i){
            res += abs(seats[i]-students[i]);
        }
        return res;
    }
};