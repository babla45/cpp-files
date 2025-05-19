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




//Disjoint Set Union (DSU)
class DSU {
public:
    vector <int> root;
    vector<long long> size;

    DSU(int n) {
        root.resize(n);
        size.resize(n);
        for(int a = 0; a < n; a++)
            root[a] = a;
    }

    // Find the root of the set with path compression
    int find(int x) {
        if(root[x] == x) return x;
        return root[x] = find(root[x]);
    }
    
    
    //  Union two sets by size
    void unite(int u, int v) {
        int rootU = find(u);
        int rootV = find(v);
        if(rootU == rootV) return;

        if(size[rootU] < size[rootV])
            swap(rootU, rootV);

        root[rootV] = rootU;
        size[rootU] += size[rootV];
    }
    
    // Check if two elements are in the same set
    bool isConnected(int x, int y) {
        return find(x) == find(y);
    }
};

//my first time dsu solve of any rating on cf
//successful after trying for two days
//problem link https://codeforces.com/contest/2106/problem/F
void solve()
{
    ll n; cin>>n;
    string s; cin>>s;
    DSU dsu(3*n);
    
    for(int a=0; a<n; a++){
        int i=3*a;
        if(s[a]=='0'){
            dsu.size[i]=a;
            dsu.size[i+1]=0;
            dsu.size[i+2]=n-a-1;
        }
        else{
            dsu.size[i]=0;
            dsu.size[i+1]=1;
            dsu.size[i+2]=0;
        }
    }
    
    //da(dsu.size)
    
    for(int a=1; a<n; a++){
        char curr=s[a], prev=s[a-1];
        int cn=3*a, pn=3*(a-1);
        
        if(curr=='0' and prev=='0'){
            dsu.unite(cn,pn);
            dsu.unite(cn+2,pn+2);
        }
        else if(curr=='0' and prev=='1'){
            dsu.unite(cn,pn+1);
        }
        else if(curr=='1' and prev=='0'){
            dsu.unite(cn+1,pn+2);
        }
    }
    
    int len=3*n;
    ll ans=0;
    for(int a=0; a<len; a++){
        if(dsu.find(a)==a){
            ans=max(ans,dsu.size[a]);
        }
    }
    pn(ans)
    //da(dsu.size)
}

int main()
{
    //solve2(); return 0;
    b_i_b int t=1;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
