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
void solve2()
{
    
}
#endif


// !******************************************************************!
// !*************************Code Begins Here*************************!
// !******************************************************************!
const int col=3;
const int row=3;
void printArray(int arr[][col])
{
    cout<<"Original Array:\n";
    for(int r=0; r<row; r++)
    {
        for(int c=0; c<col; c++)
        {
            cout<<arr[r][c]<<sp;
        }
        nll
    }
    nll nll
}


void printDiagonals(vector<vector<int>> &array)
{
    for (auto &innerVector : array)
    {
        for (int element : innerVector)
        {
            cout << element << " ";
        }
        innerVector.clear();
        nll
    }
    
}

void solve()
{
    int l=0,left=0;
    int arr[row][col]={
        {1,2,3},
        {4,5,6},
        {7,8,9}};
    
    /*
    eivabe sajale column borabor diagonal paowa jay
    1 2 3
      4 5 6
        7 8 9
    */
    printArray(arr);
    
    //vector of vector to store
    //total number of diagonals =( row+column-1 )
    vector<vector<int>> v(row+col-1);
    
    
    //0,0
    //here, r+c is the x th diagonal
    cout<<"Traversal=row wise,top left to right\n";
    cout<<"==========================\n";
    for(int r=0; r<row; r++)
    {
        for(int c=0; c<col; c++)
        {
            int k=arr[r][c];
            v[r+c].pb(k);
        }
    }
    printDiagonals(v);
    
    
    //0,n
    cout<<"Traversal=row wise,top right to left\n";
    cout<<"==========================\n";
    left=0,l=0;
    for(int r=0; r<row; r++)
    {
        left=l;
        for(int c=col-1; c>=0; c--)
        {
            int k=arr[r][c];
            
            v[left++].pb(k);
            
        }
        l++;
    }
    printDiagonals(v);
   
    //n,0
    
    cout<<"Traversal=row wise,bottom left to right\n";
    cout<<"==========================\n";
    left=0,l=0;
    for(int r=row-1; r>=0; r--)
    {
        left=l;
        for(int c=0; c<col; c++)
        {
            int k=arr[r][c];
            
            v[left++].pb(k);
            
        }
        l++;
    }
    printDiagonals(v);
   
   //n,n
    cout<<"Traversal=row wise,bottom right to left\n";
    cout<<"==========================\n";
    left=0,l=0;
    for(int r=row-1; r>=0; r--)
    {
        left=l;
        for(int c=col-1; c>=0; c--)
        {
            int k=arr[r][c];
            
            v[left++].pb(k);
            
        }
        l++;
    }
    printDiagonals(v);
    
    
    
    
    
    nll nll nll nll
    ////column wise
    cout<<"======Column wise matrix traversal======\n\n";
    nll nll nll nll
    
    
    
    
    
    
    printArray(arr);
    //0,0
    //here, r+c is the x th diagonal
    cout<<"Traversal=column wise,top left to bottom\n";
    cout<<"==========================\n";
    for(int c=0; c<col; c++)
    {
        for(int r=0; r<row; r++)
        {
            int k=arr[r][c];
            v[r+c].pb(k);
        }
    }
    printDiagonals(v);
    
    
    //0,n
    cout<<"Traversal=column wise,top right to bottom\n";
    cout<<"==========================\n";
    left=0,l=0;
    for(int c=col-1; c>=0; c--)
    {
        left=l;
        for(int r=0; r<row; r++)
        {
            int k=arr[r][c];
            
            v[left++].pb(k);
            
        }
        l++;
    }
    printDiagonals(v);
   
    //n,0
    
    cout<<"Traversal=column wise,bottom left to top\n";
    cout<<"==========================\n";
    left=0,l=0;
    for(int c=0; c<col; c++)
    {
        left=l;
        for(int r=row-1; r>=0; r--)
        {
            int k=arr[r][c];
            
            v[left++].pb(k);
            
        }
        l++;
    }
    printDiagonals(v);
   
   //n,n
    cout<<"Traversal=column wise,bottom right to top\n";
    cout<<"==========================\n";
    left=0,l=0;
    for(int c=col-1; c>=0; c--)
    {
        left=l;
        for(int r=row-1; r>=0; r--)
        {
            int k=arr[r][c];
            
            v[left++].pb(k);
            
        }
        l++;
    }
    printDiagonals(v);
   
}


int main()
{
    #ifndef ONLINE_JUDGE

    #endif
    //solve2(); return 0;
    b_i_b int t=1;
    //cin>>t;
    while(t--)
    solve();
    return 0;
}
