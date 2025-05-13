class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=1,k;
        for(int j=1;j<nums.size();j++){
            if(nums[j]==nums[i]){

            }
            else {
                nums[i+1]=nums[j];
                i++;
            }
        }
        k=i+1;
        return k;
        
    }
};