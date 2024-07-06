//min_max_sort
#include<iostream>
using namespace std;

void swaap(int &a,int &b)
{
	 if(a==b) return;
    a+=b;
    b=a-b;
    a=a-b;
}

void min_max(int s[], int l, int r ,int arr[])
{
    int mn=l, mx=l;
    for(int a=l; a<=r; a++)
    {
        if(s[a]<s[mn]) mn=a;
        if(s[a]>s[mx]) mx=a;
    }
    arr[0]=mn;
    arr[1]=mx;
    
}
void min_max_sort(int s[], int n)
{
    int l=0,r=n-1,mni,mxi;
    int arr[2];
    for(int a=0; a<(n/2); a++)
    {
        min_max(s,l,r,arr);
        mni=arr[0];
        mxi=arr[1];
        
        if(s[l]==s[mxi])
        {
            swaap(s[l],s[mni]);
            mxi=mni;
            swaap(s[r],s[mxi]);
        }
        else
        {
            swaap(s[l],s[mni]);
            swaap(s[r],s[mxi]);
        }
        l++;
        r--;
    }
}
int main()
{
     int s[]={2,1,3,4,2,6};
     int n=sizeof(s)/4;
  
     min_max_sort(s,n);
   
     for(int a=0; a<n; a++)
     cout<<s[a]<<" ";
     
}
