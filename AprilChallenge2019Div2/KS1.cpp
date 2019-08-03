//Program runs perfectly but takes a lot of time, O(n^3) time :(
//20% Marks alloted
#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,x,n,y,k,xi,c=0;
        cin>>n;
        int a[n],f[n],b[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            
        }

        for(i=0;i<n;i++)
        {
            
            if(i==0){
            x=a[i];}
            else{x=x^a[i];}
            f[i]=x;
            //cout<<a[i]<<" "<<f[i]<<endl;
        }

        for(i=n-1;i>=0;i--)
        {
            if(i==(n-1))
            {
                x=a[i];
            }
            else
            {
                x=x^a[i];
            }
            b[i]=x;
            //cout<<b[i]<<endl;
        }

        for(i=1;i<n;i++)
        {
            for(j=1;j<n;j++)
            {
            	if(i+j>n)continue;
                for(k=0;i+j+k-1<n;k++)
                {
                    if(k==0)
                    {
                        xi=i-1;
                        x=f[xi];
                    }
                    else
                    {
                        x=f[xi]^f[k-1];
                    }

                    if((xi+1+j)==n)
                    {
                        y=b[xi+1];
                    }
                    else
                    {
                        y=b[xi+1]^b[xi+1+j];
                    }
                    xi++;
                    if(x==y)
                    {
                        c++;
                    }
                    
                    
                }
            }
        }

        cout<<c<<endl;
        
        
    }
    return 0;

}
