class Solution {
public:
    int reverse(int n) {
         if(    (n > pow(2,31)  - 1  )  || ( n<-( pow(2,31) )   )  )
    {
        return -1;
    }
    else
    {
        int digit,ans=0;
        while(n!=0)
        {
            digit=n%10;
            ans=10*ans+digit;
            n=n/10;
        }
        return ans;
    }
    }
};