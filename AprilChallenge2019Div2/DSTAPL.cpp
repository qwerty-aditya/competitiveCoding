#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,c;
        cin>>n>>k;
        c=n/k;
        if(c<k)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if(c%k==0){
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
            
        }
        
    }
    return 0;

}
