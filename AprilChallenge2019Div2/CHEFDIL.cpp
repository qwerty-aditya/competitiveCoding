#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int c=0;
        string s;
        cin>>s;
        for(int i=0 ; i<s.length() ; i++)
        {
            if(s[i]=='1')
            {
                c++;
            }
        }
        if(c%2!=0)
        {
            cout<<"WIN\n";
        }
        else
        {
            cout<<"LOSE\n";
        }
        
    }
    
    return 0;
}
