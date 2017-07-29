/*
https://leetcode.com/problems/palindromic-substrings/discuss/
*/
class Solution {
public:
    int countSubstrings(string s) {
        int pallength=0;
        string pal="";
        int revpal=0;
        int l=s.length();
        
        if(l<=1)
        {
            return l;
        } 

        for(int i=0;i<l;i++)
        {
          for(int j=i+1;j<l;j++)
          {
              if(s[i]==s[j])
              {
                  pallength=j-i;
                  pal=s.substr(i,pallength+1); 
                  revpal=revpal+ispal(pal); 
              }  
          } 
        }
        if(l>1)
        return (revpal+l);            
    }
   
    int ispal(string pal)
    {
        int k=0;
        int l=pal.length();
        int mid=0;
        if(l%2!=0)
        {
            mid=l/2;
            while((mid-k)>=0)
            {
                if(pal[mid-k]==pal[mid+k])
                {
                    k++;
                }
                else
                    break;
            }
            
            if(mid==k-1)
                return 1;
            else
                return 0;
        }
        
        else if(l%2==0)
        {
            mid=l/2-1;
            while((mid-k)>=0)
            {
                if(pal[mid-k]==pal[mid+k+1])
                {
                    k++;  
                }
                else
                    break;
            }
            
            if(mid==k-1)
                return 1;
            else
                return 0;
        }
    }
};