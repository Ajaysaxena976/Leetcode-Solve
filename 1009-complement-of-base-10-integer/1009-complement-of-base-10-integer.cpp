class Solution {
public:
    int bitwiseComplement(int n) {
        int i=0;
        int fmask=n;
        int temp=~n;
        cout<<endl<<"number comliment is"<<temp;
        int mask=0;
        int count=1;
        if(n==0)
        {
            return 1;
        }
        while(fmask!=0){
            mask=mask<<1;
            mask = mask | 1;
            
            cout<<endl<<"inside loop mask is"<<mask;
            fmask=fmask>>1;
        }
        cout<<endl<<"mask is " <<mask;
        temp=temp & mask;
      return temp;
    }
};