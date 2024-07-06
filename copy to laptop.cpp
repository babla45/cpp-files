//.....b_a_b_l_a......
#include<bits/stdc++.h>
using namespace std;
#define pa(x) for(auto ww:x)cout<<ww<<sp;
#define pam(x) for(auto ww:x) cout<<ww.ft<<sp<<ww.sd<<nl;
#define b_i_b ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define bss(x,k) bs(all(x),k)
#define bs binary_search
#define all(x) x.bn,x.ed
#define pb push_back
#define ub upper_bound
#define lb lower_bound
#define bn begin()
#define ed end()
#define nl "\n"
#define sp " "
#define ft first
#define sd second
#define sz size()
#define nll cout<<"\n";
#define spc cout<<" ";
#define pno cout<<"NO\n";
#define pyes cout<<"YES\n";
#define p(x) cout<<x<<"\n";
#define pd(x) cout<<x<<" ";
#define ll long long
void solve()
{
    ll n,x; cin>>n;
    vector<pair<ll,ll>> s;
    vector<ll> v;
    
    for(ll a=0; a<n; a++)
    {
        cin>>x;
        v[a]=x;
        s.pb({x,a});
    }
    //**
    pa(v) nll
    sort(all(s));
    pam(s) nll
    return;
    //pa(v)
    for(ll a=1; a<n; a++)
    {
        v[a]+=v[a-1];
    }
    
    
   /* nll
    pa(v)
    nll */
    
    
    
    ll p=-1;
    for(ll a=n-2; a>=0; a--)
    {
        if(v[a]<s[a+1].first)
        {
            p=a;
            break;
        }
    }
    //cout<<p<<nl;
    cout<<n-p-1<<nl;
    vector<ll> vp;
    for(int a=p+1; a<n; a++)
    {
        vp.pb(s[a].second);
    }
    sort(all(vp));
    pa(vp)
    nll
    
}
int main()
{
    b_i_b ll t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}
