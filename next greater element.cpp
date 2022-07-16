#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>fun(vector<ll>v)
{
    ll n=v.size();
    vector<ll>g(n);
    stack<ll>s;
    for(ll i=0;i<n;++i)
    {
        while(!s.empty()&&v[s.top()]<v[i])
        {
            g[s.top()]=i;
            s.pop();
        }
    s.push(i);
    }
    while(!s.empty())
    {
        g[s.top()]=-1;
        s.pop();
    }
    return g;
 
 
}
 
int main()
{
ll t=1;
// cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    vector<ll >v(n);
    for(ll i=0;i<n;++i)
    {
        cin>>v[i];
    }
    vector<ll>g=fun(v);
    for(ll i=0;i<n;i++)
    {
    if(g[i]==-1)v[g[i]]=-1;
    cout<<v[i]<<" "<<v[g[i]]<<'\n';
    }
 
}
    return 0;
}
