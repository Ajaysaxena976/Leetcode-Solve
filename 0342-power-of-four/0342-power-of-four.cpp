class Solution {
public:
    bool isPowerOfFour(int n) {
         long int num;
        for(int i=0;i<31;i++)
        {
            num=pow(4,i);
            if(num == n)
            {
                return true;
            }
        }
        return false;
    }
};