#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;cin>>n>>m;
	int arr[n+1],b[n+1];
	set<int>s;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		s.insert(arr[i]);
	}
	for(int i=0;i<m;i++){
		cin>>b[i];
		s.insert(b[i]);
	}
	set<int, greater<int> >::iterator itr;
	cout<<"UNION : ";
	for (itr = s.begin(); itr != s.end(); itr++)
    {
        cout << *itr<<" ";
    }
    cout<<endl;
	unordered_map<int, int>mpa, mpb;
    for(int i=0;i<n;i++)
         mpa[arr[i]]++;
    for(int i=0;i<m;i++)
        mpb[b[i]]++;
    vector<int> v;
    for(auto it:mpa){
         if(mpb.find(it.first)!=mpb.end())
            v.push_back(it.first);
        }

    cout<<"INTERSECTION :";
    for(int i=0;i<v.size();i++)
    	cout<<v[i]<<" ";
	return 0;
}