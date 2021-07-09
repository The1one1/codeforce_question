#include<iostream>
using namespace std;
int main()
{
	long int t,x=0;
	cin>>t;
	while(t)
	{
		x+=t%10;
		t=t/10;
	}
	x=x%9;
	if(x==0)
	cout<<9;
	else
	cout<<x;
}
