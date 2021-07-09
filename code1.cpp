#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n,k1,k2;
		cin>>n>>k1>>k2;
		int w,b;
		cin>>w>>b;
		int wcell=k1+k2;
		int bcell=2*n-wcell;
		wcell/=2;
		bcell/=2;
		if(wcell>=w&&bcell>=b){
			cout<<"YES"<<"\n";
		}
		else
		cout<<"NO"<<"\n";
		
	}
}
