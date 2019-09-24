/*
Code By -- Aitya Bachhawat
*/
class Solution {
public:
    int myAtoi(string s) {

        int pp,np,i,sd,ed,n=0,neg=0,pos=0;
        long long int sum=0;
            

    for(i=0 ; i<s.length() ; i++)
    { 
     
      if(s[i]>57)
      {
        return sum;
      }  
        
        
      if(s[i]=='-')
      {
        neg++;np=i;
      }
      if(s[i]=='+')
      {
          pos++;pp=i;
      }
        if(s[i]=='.')
      {
        return sum;
      }  
      if(s[i]>=48 && s[i]<=57)
      {
          sd=i;
          break;
      }
    }
        
        if((sd-np)!=1 && neg==1)
        {
            return 0;
        }
        if((sd-pp)!=1 && pos==1)
        {
            return 0;
        }
        
        if(neg>1 || pos>1)
        {
            return 0;
        }

    for(i=sd ; i<s.length() ; i++)
    {
      if(s[i]>=48 && s[i]<=57)
      {
         n++;
      }
        else
        {
            
            break;
        }
    }
    
    ed=sd+n-1;
    
    for(i=sd ; i<=ed ;i++)
    {
        
        if(sum>9999999999)
        {
            break;
        }
    
      sum=sum*10+(s[i]-48);

    }

    if(neg==1)
    {
        if(pos==1)
        {
            return 0;
        }
        sum=sum*(-1);
        
    }
        if(sum>INT_MAX)
            return INT_MAX;
        else if(sum<INT_MIN)
            return INT_MIN;
        
        
        return sum;
    }
};
