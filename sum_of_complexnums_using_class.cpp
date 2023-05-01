#include <iostream>
using namespace std;
class mystructure
{
    public:
	float x1,x2,y1,y2; // y:imaginary,x:real
	void get()
	{
		cout<<"Enter real part imaginary part of complex number 1 :: ";
		cin>>x1>>y1;
		cout<<endl<<"Enter real part and imaginary part of complex number 2:: ";
		cin>>x2>>y2;
	} 
	void out()
	{
		cout<<"Sum is :: "<<x1+x2<<"+ "<<y1+y2<<"i";
	}
};
int main()
{
	class mystructure s;
     s.get();
     s.out();

	return 0;
}
//n;kk;e
