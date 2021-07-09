#include<bits/stdc++.h>
using namespace std;
int main()
{
	short h,w;
	cin>>h>>w;
	char s[h][w];
	for(short i=0;i<h;i++)
	{
		for(short j=0;j<w;j++)
		{
			cin>>s[i][j];
		}
	}
	int y=h+w;
	int i=0,j=0,z=0;
	for(int k=1;k<=y;k++)
	{
		if(s[i][j]=='*')
		{
			z++;
			//cout<<"z:"<<z<<endl;
		}
	//	cout<<"i is:"<<i<<" j is:"<<j<<endl;
			if(s[i][j+1]=='*'&& j<(w-1))
			{
				j++;
			//	cout<<"j:"<<j<<endl;
			}
			else if(s[i+1][j]=='*'&& i<(h-1))
			{
				i++;
			//	cout<<"i:"<<i<<endl;
			}
			else 
			{  if(j<(w-1))
				j++;
				else
				i++;
			}	
	}
	cout<<z;
}
