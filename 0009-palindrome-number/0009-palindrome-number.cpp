class Solution {
public:
    bool isPalindrome(int x) { 
        int n=x,rev,y;
        if(x>=0){
        while(x!=0){
y=x%10;
if((rev<INT_MIN/10)||(rev>INT_MAX/10)){
    return 0;}
rev=rev*10+y;
x=x/10;
        }
        if(n==rev){
        return true;}
        else return false;}
        else return false;

        

        
    }
};