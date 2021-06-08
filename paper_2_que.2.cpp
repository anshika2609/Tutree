#include<bits/stdc++.h>
using namespace std;
int main()
{
	int r,c,sp;
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=r;c++)
			cout<<"*";
		for(sp=4;sp>=r;sp--)
			cout<<" ";
		for(sp=4;sp>=r;sp--)
			cout<<" ";
		for(c=1;c<=r;c++)
			cout<<"*";
		cout<<endl;
	}
	for(r=5;r>=1;r--)
	{
		for(c=r;c>=1;c--)
			cout<<"*";
		for(sp=4;sp>=r;sp--)
			cout<<" ";
		for(sp=4;sp>=r;sp--)
			cout<<" ";
		for(c=r;c>=1;c--)
			cout<<"*";
		cout<<endl;
	}

	return 0;
}