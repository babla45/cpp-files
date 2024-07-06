#include <iostream>
using namespace std;

void sort1()
{

    int s[]={3,1,3,4,4,2,4,4,3,};
    int n=sizeof(s)/4;
    for(int a=0; a<n; a++)
    {
        for(int b=a+1; b<n; b++)
        if(s[a]>s[b])
        swap(s[a],s[b]);
    }
    for(auto x:s)
    cout<<x<<" ";
}

void bubble()
{

    int s[]={4,3,1};
    int n=sizeof(s)/4;
    for(int a=0; a<n; a++)
    {
        for(int b=0; b<n-a-1; b++)
        {
            if(s[b]>s[b+1])
            swap(s[b],s[b+1]);
        }
    }
    for(auto x:s)
    cout<<x<<" ";
}

void selection()
{

    int s[]={1,2,4,2,3,8,3};
    int n=sizeof(s)/4;
    
    for(int a=0; a<n-1; a++)
    {
        int p=a;
        for(int b=a+1; b<n; b++)
        {
            if(s[p]>s[b])
            p=b;
        }
        swap(s[a],s[p]);
    }
    for(auto x:s)
    cout<<x<<" ";
}


void min_max_select()
{
    int s[]={4,3,2,1};
    int n=sizeof(s)/4;
    
    int l=0,r=n-1,tt=n/2;
    for(int a=0; a<tt; a++)
    {
        int mn=l,mx=l;
        for(int b=l; b<=r; b++)
        {
            if(s[b]>=s[mx])
            mx=b;
            
            if(s[b]<=s[mn])
            mn=b;
        }
        if(s[l]==s[mx])
        {
            swap(s[l],s[mn]);
            mx=mn;
            swap(s[mx],s[r]);
        }
        else
        {
            swap(s[l],s[mn]);
            swap(s[mx],s[r]);
        }
        l++;
        r--;
    }
    for(auto x:s)
    cout<<x<<" ";
}

void insertion()
{

    int s[]={1,2,4};
    int n=sizeof(s)/4;
    
    for(int a=1; a<n; a++)
    {
        int data=s[a];
        int p=a;
        while(data<s[p-1])
        {
             s[p]=s[p-1];
             p--;
        }
        s[p]=data;
    }
    for(auto x:s)
    cout<<x<<" ";
}


int main()
{
    
    
    sort1();
    cout<<endl;
    
    bubble();
    cout<<endl;
    
    selection();
    cout<<endl;
    
    min_max_select();
    cout<<endl;
    
    insertion();
    cout<<endl;
    
    
    
    
}
