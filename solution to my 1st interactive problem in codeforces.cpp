//problem link https://codeforces.com/contest/2013/problem/C
//.....b_a_b_l_a......
#include<bits/stdc++.h>
using namespace std;
#ifndef onliine
//io
#define sp          " "
#define spc         cout<<" ";
#define nl          "\n"
#define nll         cout<<"\n";
#define pno         cout<<"NO\n";
#define pyes        cout<<"YES\n";
#define pnor        {cout<<"NO\n";return;}
#define pyesr       {cout<<"YES\n";return;}
#define ia(x)       for(auto &ww:x) cin>>ww;
#define pa(x)       for(auto &ww:x) cout<<ww<<sp;
#define pn(x)       cout<<x<<"\n";
#define pd(x)       cout<<x<<" ";
#define pr(x)       {cout<<x<<"\n"; return;}
#define pam(x)      for(auto ww:x) cout<<ww.ft<<sp<<ww.sd<<nl;
 
//binary search
#define bs          binary_search
#define ub          upper_bound
#define lb          lower_bound
#define bss(x,k)    bs(all(x),k)
 
//iterator 
#define bn          begin()
#define ed          end()
#define sz          size()
#define ins         insert
#define pb          push_back
#define all(x)      x.bn,x.ed
#define rall(x)     x.rbegin(),x.rend()
 
//vector 
#define vi          vector<int>
#define vll         vector<ll>
#define vc          vector<char>
#define vs          vector<string>
#define vpii        vector<pair<int,int>>
#define vpll        vector<pair<ll,ll>>
#define vpci        vector<pair<char,int>>
#define vpsi        vector<pair<string,int>>
 
//map 
#define mii         map<int,int>
#define mll         map<ll,ll>
#define mci         map<char,int>
#define msi         map<string,int>
 
//pair 
#define ft          first
#define sd          second
#define ll          long long
#define pii         pair<int,int>
#define pll         pair<ll,ll>
#define psi         pair<string,int>
#define pci         pair<char,int>
 
//loop
#define nfor(a,x,y,z)    for(int a=x; a<y; a+=z)
#define rfor(a,x,y,z)    for(int a=x; a>=yy; a-=z)
 
//debug
#ifndef ONLINE_JUDGE
#define dn(x)       cout<<(#x)<<"="<<x<<"\n";
#define da(x)       cout<<"single element container:("<<#x<<") \n";pa(x) nll
#define dam(x)      cout<<"map or pair:("<<#x<<") \n";pam(x)
#else
#define dn(x)
#define da(x)
#define dam(x)
#endif
 
//comparator,file
#define mem(a,x)    memset(a,x,sizeof(a));
#define _unique(s)  s.resize(unique(all(s))-s.bn)
#define b_i_b       ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define file        freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define cmp         [&](pair<ll,ll>&a, pair<ll,ll>&b){ return a.sd < b.sd; }
 
//functions
ll lcm(ll a, ll b) { return (a/__gcd(a,b))*b; }
 
template<typename T1, typename T2>
bool comp(pair<T1,T2> &a, pair<T1,T2> &b)
{
    return (a.sd>b.sd);
}
 
bool is_prime(int n)
{
    if(n==2 or n==3) return true;
    if(n%2==0 or n%3==0 or n<2) return false;

    for(int a=5; a*a<=n; a+=6)
    if(n%a==0 or n%(a+2)==0)
        return false;
    return true;
}
 
void solve2()
{
    
}
#endif


// !******************************************************************!
// !*************************Code Begins Here*************************!
// !******************************************************************!

bool chk(string s)
{
    cout<<"? "+s<<endl;
    int k; cin>>k;
    if(k==1) return true;
    else return false;
}
void solve()
{
    int n; cin>>n;
    string s="", ans="";
  
    while(ans.sz<n)
    {
        ans+='1';
        if(!chk(ans)){
            ans.pop_back();
            ans+='0';

            if(!chk(ans)){
                ans.pop_back();
                break;
            }
        }
    }
    if(ans.sz==n) goto X;
  
    while(ans.sz<n){
        ans='1'+ans;
        if(!chk(ans))   ans[0]='0';
    }
    X:
    cout<<"! "+ans<<endl;
}


int main()
{
    #ifndef ONLINE_JUDGE
    // file
    #endif
    //solve2(); return 0;
    b_i_b int t=1;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
