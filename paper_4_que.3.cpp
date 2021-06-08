#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int x,y;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k,l;
    cin>>x>>y;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            k=i;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==y)
        {
            l=i;
        }
    }
    cout<<abs(k-l)<<endl;
    
    return 0;
}