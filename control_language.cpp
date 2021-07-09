#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		long long int x=0,i;
		for( i=0;i<n;i++)
		{
			if(s[i]=='*')
			{
				x++;
			}
			if(x>=k)
			{
				cout<<"Yes\n";
				goto last;
			}
			if(s[i]!='*')
			{
				x=0;
			}
		}
			cout<<"No\n";
		last:;
	}
}
