class Solution {
public:
    int reverse(int n) {
     
    
        int digit,ans=0;
        while(n!=0)
        {
            if ( (ans> INT_MAX/10) | (ans < INT_MIN/10) ){
                return 0;
            }
            digit=n%10;
            ans=10*ans+digit;
            n=n/10;
        }
        return ans;
    }
    
};