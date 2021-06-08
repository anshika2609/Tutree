#include<bits/stdc++.h>
using namespace std;
void Leaders(int arr[], int m)
{
    for (int i = 0; i < m; i++)
    {
        int j;
        for (j = i+1; j < m; j++)
        {
            if (arr[i] <=arr[j])
                break;
        }   
        if (j == m) 
            cout << arr[i] << " ";
  }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int z=0;z<n;z++)
    {
        cin>>a[z];
    }
    Leaders(a, n);
    return 0;
}