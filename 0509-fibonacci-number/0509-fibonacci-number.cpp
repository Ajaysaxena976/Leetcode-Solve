class Solution {
public:
    int fib(int n) {
        int a=0;
        int b=1;

        if(n==0){
            return a;
        }
        if(n==1){
            return b;
        }
        else
        {
            int ans = fib(n-1)+fib(n-2);
            return ans;
        }
    }
};