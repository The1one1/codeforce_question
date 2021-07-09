#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<pair<int ,int> > v(n);
	for(auto &it:v)
	{
		cin>>it->first>>it->second;
	}

	for(auto &it:v)
	{
		cout<<it->first<<"--"<<it->second;
	}
}

	
	
