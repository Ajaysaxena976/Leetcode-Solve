class Solution {
public:
    int reverse(int x) {
       long long int ans=0;
        int digit=0;
        while(x!=0)
        {
            digit=x%10;
            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > INT_MAX % 10)) {
                return 0; // overflow
            }
            if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && digit < INT_MIN % 10)) {
                return 0; // underflow
            }
           ans= 10*ans+digit;
            x=x/10;
        }
       
        return (int)ans;
        }
    
};