#include <bits/stdc++.h>
using namespace std;

class node{
public:
int a,b,c,d;
};

node ret(string s)
{
    int n=s.size();
    node val;
    vector<int> v;
    string s2="";
    
    for(int a=0; a<n; a++)
    {
        while( a<n and (s[a]=='-' or (s[a]>='0' and s[a]<='9')))
        {
            
            s2+=s[a];
            a++;
        }
        if(s2.size())
        {
            int n=stoi(s2);
            v.push_back(n);
            s2="";
        }
    }
    val.a=v[0];
    val.b=v[1];
    val.c=v[2];
    val.d=v[3];
    return val;
    
    
}

int main()
{

    node val=ret("1x+y-3z=-6");

    cout<<val.a<<" "<<val.b<<" "<<val.c<<" "<<val.d;
    
   
}
