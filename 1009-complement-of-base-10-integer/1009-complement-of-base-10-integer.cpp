class Solution {
public:
    int bitwiseComplement(int n) {
        int m=n;
           if(m==0){
            return 1;
        }
        int comp=~m;
       
        int ans=0;
        int i=0;
        int bit;
        int mask=0;
        while(m!=0){
            mask =mask << 1;
             mask = mask | 1;
             m=m>>1;
        }
      
        int var;
        
        var=comp & mask;
        
         return  var;
        
    };
    
};