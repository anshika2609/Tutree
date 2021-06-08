#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,first=INT_MAX,second=INT_MAX;
	cin>>n;
	int arr[n+1];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	if(n<2)
		cout<<"Invalid";
	else
	{
		for(int i=0;i<n;i++)
		{
			if(arr[i]<first)
			{
				second = first;
				first = arr[i];
			}
			else if (arr[i] < second && arr[i] != first)
            	second = arr[i];
		}
	}
	cout<<first<<" "<<second<<endl;

	return 0;
}