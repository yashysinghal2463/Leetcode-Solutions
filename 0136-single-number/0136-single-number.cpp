class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int twice=0;
        for(int i=0;i<nums.size();i++){
            twice=twice^nums[i];

        }
        return twice;

    }
};