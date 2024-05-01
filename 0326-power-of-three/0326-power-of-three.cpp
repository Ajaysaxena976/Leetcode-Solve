class Solution {
public:
    bool isPowerOfThree(int n) {
        long int num;
        for(int i=0;i<31;i++)
        {
            num=pow(3,i);
            if(num == n)
            {
                return true;
            }
        }
        return false;
    }
};