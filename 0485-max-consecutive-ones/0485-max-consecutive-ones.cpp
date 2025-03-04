class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0,current=0;
        for(auto i:nums){
            if(i==1){
                current++;

            }else current=0;
            ans= max(ans,current);
        }
        return ans;
    }
};