#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,n;
        cin>>n;
        long long a[n],b[n],s=0,t=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(i=0;i<n;i++)
        {
            t=(a[i]*20)-(b[i]*10);
            if(t>s)
            {
                s=t;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
