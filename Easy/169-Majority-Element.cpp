class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Moore's Algorithm
        int majE = nums[0], cnt = 1, n = nums.size();
        for(int i=1;i<n;++i){
            if(majE != nums[i]){
                cnt--;
                if(cnt == 0) majE = nums[i],cnt = 1;
            }else cnt++;
        }
        return majE;
    }
};