#include<bits/stdc++.h>
/*bool convert(int &n,int &k){
	set<char> s1;
	set<int > s2;
	int y=0;
	while(n)
	{
		int x=n%k;
		n=n/k;
		if(x>9)
		{
			x=x+55;
			s1.insert(char(x));
			y++;
		}
		else
		{
			s2.insert(x);
			y++;
		}
	}
	if(y==(s1.size()+s1.size()))
	{
		return true;
	}
	else
	{
		return false;
	}
}*/
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	bool convert(int & ,int &);
	//cout<<"convert:"<<convert(n,m);
	if(convert(n,m))
	{
		cout<<"Yes\n";
	}
	else
	{
		cout<<"No\n";
	}
}
bool convert(int &n,int &k){
	set<char> s1;     //to insert values btw (10 t0 15) (A,B,C,D,E,F)
	set<int > s2;     // to insert values btw(0 to 9)
	int y=0;   
	while(n)
	{
		int x=n%k;
		n=n/k;
		if(x>9)
		{
			x=x+55;
			//set store only unique values, so if any values repeated than it will ignore it
			s1.insert(char(x));   
		//	cout<<"s1:"<<char(x)<<endl;
			y++;   //to store all the values so that we can compare the size of sets with y
		}
		else
		{
			s2.insert(x);
		//	cout<<"s2:"<<(x)<<endl;
			y++;
		}
	}
//	cout<<"size of s1:"<<s1.size()<<" size of s2:"<<s2.size()<<endl;
	int sum=s1.size()+s2.size();
//	cout<<"y is:"<<y<<endl;
  // now if total no of digits is equals to the no of elements in sets then it means all the digits after conversion are unique
	if(y==sum)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

