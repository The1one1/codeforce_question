#include<iostream>
using namespace std;
int main()
{
 //   ios_base::sync_with_studio(false);
  //  cin.tie(NULL);
   // cout.tie(NULL);
    long int t;
    cin>>t;
    while(t--)
	{
    long long int n,m,x;
    cin>>n>>m>>x;
    long long int x1,y1;
      if(x%n!=0) {
	   y1=x%n;
        x1=x/n;
            x1=x1+1;
            y1=y1-1;
			}
	  else
	  {
	      y1=n-1;
	      x1=x/n; 
	  }
            
    cout<<m*(y1)+x1<<"\n";
    }
}
