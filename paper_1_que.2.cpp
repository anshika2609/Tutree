#include<bits/stdc++.h>
using namespace std;
void print_med(double arr[], int n)
{
	priority_queue<double>ss;
	priority_queue<double,vector<double>,greater<double> > gg;

	double med = arr[0];
	ss.push(arr[0]);

	cout << med << endl;

	for (int i=1; i < n; i++)
	{
		double x = arr[i];
		if (ss.size() > gg.size())
		{
			if (x < med)
			{
				gg.push(ss.top());
				ss.pop();
				ss.push(x);
			}
			else
				gg.push(x);

			med = (ss.top() + gg.top())/2.0;
		}
		else if (ss.size()==gg.size())
		{
			if (x < med)
			{
				ss.push(x);
				med = (double)ss.top();
			}
			else
			{
				gg.push(x);
				med = (double)gg.top();
			}
		}
		else
		{
			if (x > med)
			{
				ss.push(gg.top());
				gg.pop();
				gg.push(x);
			}
			else
				ss.push(x);

			med = (ss.top() + gg.top())/2.0;
		}

		cout << med << endl;
	}
}

int main()
{
	int n;
	cin>>n;
	double arr[n+1];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	print_med(arr, n);
	return 0;
}
