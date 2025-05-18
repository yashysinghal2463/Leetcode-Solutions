class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size(),count=0;
        for(int i=1;i<=n;i++){
    count=count^i;
        }
        for (int i=0;i<n;i++){
           count=count^nums[i];
        }
        return count;
    }
};