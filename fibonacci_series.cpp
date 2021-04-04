#include<iostream>
using namespace std;
int main()
{
	string a;
	cin>>a;

	for(int i=2;i<a.size();i++)
	{
			int x=(int)a[i-2]-65;
	        int y=(int)a[i-1]-65;
		int z=(int)a[i]-65;
	
		if((x+y)%26!=z)
		{
			cout<<"No\n";
			goto last;
		}
		
	}
	cout<<"Yes\n";
	last:;
}
