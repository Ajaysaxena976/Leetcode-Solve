class Solution {
public:
    int subtractProductAndSum(int n) {
         int digit, product = 1, sum = 0;
  while (n != 0)
{
	digit=n%10;
	sum=sum +digit;
	product =product*digit;
	n=n/10;
}
int ans =product-sum;
return ans;
    }
};