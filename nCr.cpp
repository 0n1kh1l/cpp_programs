#include <iostream>
using namespace std;
int main()
{
	int n,r,p1=1,p2=1,p3=1;
	float c;
	cout<<"Enter n & r :: ";
	cout<<endl;
	cin>>n>>r;
	for (int i = n; i > 0; i--)
	{
		p1=p1*i;
	}
	for (int j = r; j > 0; j--)
	{
		p2=p2*j;
	}
	for (int k = (n-r); k > 0; k--)
	{
		p3=p3*k;
	}	
    c=p1/(p2*p3);
    cout<<c;
	return 0;
}
//n;kk;e
