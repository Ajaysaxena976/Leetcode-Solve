class Solution {
public:
    bool isPowerOfTwo(int n) {
        int num;
        for(int i=0;i<31;i++)
        {
            num=pow(2,i);
            if(num == n)
            {
                return true;
            }
        }
        return false;
    }
};