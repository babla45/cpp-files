//problem link
//https://codeforces.com/contest/1829/problem/E

//.....b_a_b_l_a......
#include<bits/stdc++.h>
using namespace std;
#ifndef onliine
#define b_i_b       ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define pam(x)      for(auto ww:x) cout<<ww.ft<<sp<<ww.sd<<nl;
#define pa(x)       for(auto ww:x) cout<<ww<<sp;
#define rforr(x,y)  for(int a=y-1;a>=x;a--)
#define forr(x,y)   for(int a=x; a<y; a++)
#define mem(a,x)    memset(a,x,sizeof(a));
#define all(x)      x.bn,x.ed
#define bss(x,k)    bs(all(x),k)
#define vs          vector<string>
#define bs          binary_search
#define vc          vector<char>
#define vi          vector<int>
#define vll         vector<ll>
#define ub          upper_bound
#define lb          lower_bound
#define pb          push_back
#define bn          begin()
#define ed          end()
#define nl          "\n"
#define sp          " "
#define ft          first
#define sd          second
#define sz          size()
#define nll         cout<<"\n";
#define spc         cout<<" ";
#define pno         cout<<"NO\n";
#define pyes        cout<<"YES\n";
#define p(x)        cout<<x<<"\n";
#define pd(x)       cout<<x<<" ";
#define ll          long long
#define mii         map<int,int>
#define mci         map<char,int>
#define msi         map<string,int>
#define vpii        vector<pair<int,int>>
#define rall(x)     x.rbegin(),x.rend()
#define vpci        vector<pair<char,int>>
#define vpsi        vector<pair<string,int>>
#endif

#define file freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

int max_repeated(int s[] , int n)
{
    int ans=1;
    for(int a=0; a<n; a++)
    {
        if( (a+1)>=n or s[a]!=s[a+1] ) continue;

        int l=a;
        while((a+1)<n and s[a]==s[a+1]) a++;
        ans=max(ans,(a-l+1));
    }
    return ans;
}



// !******************************************************************!
// !*************************Code Begins Here*************************!
// !******************************************************************!



int n;
int m;
int mat[1005][1005];
int vis[1005][1005];

int p[]={0,0,1,-1};
int q[]={1,-1,0,0};



////first time__dfs__
int dfs(int x, int y)
{
    vis[x][y]=1;
    
    int ans=mat[x][y];
    
    for(int a=0; a<4; a++)
    {
        int nx=x+p[a];
        int ny=y+q[a];
        
        if(nx>=0 and nx<m and ny>=0 and ny<n and !vis[nx][ny] and mat[nx][ny])
        {
            ans+=dfs(nx,ny);
        }
    }
    return ans;
}



void solve()
{
    cin>>m>>n;
    
    for(int a=0; a<m; a++)
    for(int b=0; b<n; b++)
    {
        cin>>mat[a][b];
        vis[a][b]=0;
    }
    
    int ans=0;
    
    for(int a=0; a<m; a++)
    for(int b=0; b<n; b++)
    {
        if(vis[a][b]==0 and mat[a][b]>0)
        ans=max(ans,dfs(a,b));
    }
    p(ans)
}


int main()
{

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    b_i_b int t=1;
    cin>>t;
    while(t--)
    solve();
     
    return 0;
}
