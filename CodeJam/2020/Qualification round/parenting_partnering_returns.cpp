#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool comp(pair<pair<pair<int,int>,int>,int> a, pair<pair<pair<int,int>,int>,int> b)
{
    if(a.first.first.first == b.first.first.first)
    {
        return a.first.first.second<b.first.first.second;
    }
    else
    {
        return a.first.first.first<b.first.first.first;
    }
    
}

bool overlap(pair<pair<pair<int,int>,int>,int> a, pair<pair<pair<int,int>,int>,int> b)
{
    if(b.first.first.first>=a.first.first.first  &&  b.first.first.first<a.first.first.second)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}


int main()
{ios_base::sync_with_stdio(false); 
 cin.tie(NULL);
    int t,tn=1; cin>>t;
    while(tn<=t)
    {
        
        bool impossible = false;
        int n,x,y,idx;
        cin>>n;
        bool names[n],real_names[n];
        pair<int,int> p;
        vector<pair<pair<pair<int,int>,int>,int>>v,sorted_v;
        for(int i=0 ; i<n ; i++)
        {
            cin>>x>>y;
            p = make_pair(x,y);
            v.push_back(make_pair(make_pair(p,-1),i));
            sorted_v.push_back(make_pair(make_pair(p,-1),i));
        }

        sort(sorted_v.begin(),sorted_v.end(),comp);
        // for(auto x:sorted_v)
        // {
        //     cout<<x.first.first.first<<" "<<x.first.first.second<<"\n";
        // }

        //_________compare__________

        names[0]=true;
        real_names[sorted_v[0].second]=true;
        for(int i=1 ; i<n ; i++)
        {
            idx = sorted_v[i-1].first.second;
            if(overlap(sorted_v[i-1],sorted_v[i]))
            {
                sorted_v[i].first.second = i-1;
                //idx = sorted_v[i-1].first.second;
                if(overlap(sorted_v[idx],sorted_v[i]) && idx != -1)
                {
                    impossible=true;
                    break;
                }
                //_______not impossible we are good_______
                names[i] = !names[i-1];
                real_names[sorted_v[i].second] = names[i];

            }
            else if(overlap(sorted_v[idx],sorted_v[i]) && idx != -1)
            {
                sorted_v[i].first.second = idx;
                names[i] = !names[idx];
                real_names[sorted_v[i].second] = names[i];
            }
            else
            {
                names[i] = names[i-1];
                real_names[sorted_v[i].second] = names[i];
            }
            
            
        }
        cout<<"Case #"<<tn<<": ";
        if(!impossible){
            // for(auto x: names)
            // {
            //     if(x)
            //     {
            //         cout<<1;
            //     }
            //     else
            //     {
            //         cout<<0;
            //     }
                
            // }cout<<"\n";

            for(auto x: real_names)
            {
                if(x)
                {
                    cout<<'J';
                }
                else
                {
                    cout<<'C';
                }
                
            }

        }
        else
        {
            cout<<"IMPOSSIBLE";
        }
        



        cout<<"\n";
        tn++;
    }
    return 0;
}
