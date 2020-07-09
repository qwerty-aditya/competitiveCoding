#include<iostream>
#include<cstring>

using namespace std;

void appb(int n)
{
    
    for(int i=1; i<=n ; i++)
    {
        cout<<'(';
    }
}
void appf(int n)
{

    for(int i=1; i<=n ; i++)
    {
        cout<<')';
    }
}

int main(){
ios_base::sync_with_stdio(false); 
cin.tie(NULL);  
    int t,tn; cin>>t;
    tn=1;
    while(tn<=t)
    {
        cout<<"Case #"<<tn<<": ";
        int i,j,buffer=0,c=0;
        string s;
        cin>>s;
        c = s[0]-48;
        buffer=c;
        appb(c);
        cout<<s[0];
        for(int i=1 ; i<s.length() ; i++)
        {
            c=s[i]-48;
            if(buffer > c)
            {
                //cout<<buffer-s[i]<<"\n";
                c = buffer-c;
                appf(c);
                cout<<s[i];
                buffer -= c;
            }
            else if(buffer< c)
            {
                //cout<<s[i]-buffer<<"\n";
                c = c-buffer;
                appb(c);
                cout<<s[i];
                buffer = buffer+c;
            }
            else if(buffer==c)
            {
                cout<<s[i];
            }
        }
        //cout<<buffer;
        if(buffer>0)
        {
            appf(buffer);
        }
        cout<<"\n";
        tn++;
        
    }

    return 0;

}
