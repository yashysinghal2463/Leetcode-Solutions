class Solution {
public:
    int trap(vector<int>& height) {
        int leftMax=0,rightMax=0,total=0;
        int n=height.size();
        int l=0;
        int r=n-1;
        while(l<r){
            if(height[l]<=height[r]){
                if(height[l]<leftMax){
                    total+=leftMax-height[l];
                    
                }
                else{
                    leftMax=height[l];
                    
                }l++;}
                else{
                if(height[r]<rightMax){
                    total+=rightMax-height[r];

                }else{
                    rightMax=height[r];

                }r--;
            }
        }
        return total;

    }
};