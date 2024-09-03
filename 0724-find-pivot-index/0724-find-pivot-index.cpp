class Solution {
public:
    int pivotIndex(vector<int>& nums) {
     int sum=0;
    for(auto e:nums){
        sum=sum+e;
     }   
     int n=nums.size();
     int cs=0;
     for(int i=0;i<n;i++)
    {
        int ls;
        if(i==0){
          ls=0;
        }
        else{
            ls=cs;
            }
        int rs=sum-ls-nums[i];
        if(ls==rs){
            return i;
            }
        cs=nums[i]+cs;
    }
    return -1;
    }
};