#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int t,tn;  scanf("%d",&t);
    tn=1;
    while(tn<=t)
    {
        int n,k=0,c=0,r=0,rf=0,cf=0;  scanf("%d",&n);
        int a[n][n];
        for(int i=0 ; i<n ; i++)for(int j=0 ; j<n ; j++)
        {
            scanf("%d",&a[i][j]);
            if(i==j)
            {
                k += a[i][j];
            }
        }

        int ra[n+10],ca[n+10];
        memset(ra,0,sizeof ra);
        memset(ca,0,sizeof ca);

        for(int i=0 ; i<n ; i++){
        
            for(int j=0 ; j<n ; j++)
            {
                if(ra[a[i][j]] == 1 && rf==0)
                {
                    rf=1;
                    r++;
                }
                else
                {
                    ra[a[i][j]]=1;
                }



                if(ca[a[j][i]] == 1 && cf==0)
                {
                    cf=1;
                    c++;
                }
                else
                {
                    ca[a[j][i]]=1;
                }
                if(rf==1 && cf==1)
                {
                    break;
                }
                
            }
              memset(ra,0,sizeof ra);
              memset(ca,0,sizeof ca);
              rf=0;cf=0;
         
        }

        printf("Case #%d: %d %d %d\n",tn,k,r,c);

        tn++;
    }
    return 0;
}
