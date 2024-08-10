class Solution {
public:
    bool isPowerOfTwo(int n) {
       long long int a=1;
        for(int i=0;i<31;i++)
        {
            a=pow(2,i);
            if(a==n)
            {
                return true;
            }
        
        }
        return false;
    }
};