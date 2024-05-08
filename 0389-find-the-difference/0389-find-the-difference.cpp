class Solution {
public:
    char findTheDifference(string s, string t) {
      //using sum
      int st=0;
       for(int i=0;i<s.size();i++)
        {
            st=st+s[i];
        }
        int tt=0;
        for(int i=0;i<t.size();i++)
        {
            tt=tt+t[i];
        }
        int maxi;
        maxi=max(tt,st);
        int mini;
        mini=min(tt,st);
        int ans=maxi-mini;
        char ch =char(ans);
        return ch;
    }
};