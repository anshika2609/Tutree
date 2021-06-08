#include <bits/stdc++.h>
using namespace std;
bool compare(int x, int y)
{
	return abs(x) < abs(y);
}

void findMinSum(int arr[], int m)
{
	sort(arr, arr + m, compare);
	int min = INT_MAX, x, y;
	for (int i = 1; i < m; i++) 
	{
		if (abs(arr[i - 1] + arr[i]) <= min) 
		{
			min = abs(arr[i - 1] + arr[i]);
			x = i - 1;
			y = i;
		}
	}
	cout << "The two elements whose sum is minimum are "
		<< arr[x] << " and " << arr[y];
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
    findMinSum(a, n);
	return 0;
	
}