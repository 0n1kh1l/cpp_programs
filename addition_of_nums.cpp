//addition of numbers ,no of numbers is decided by user
#include <iostream>
using namespace std;
int main()
{
	int n,sum=0,i; //we're declaring varibales type of int,you can declare it as float,double,..etc
	
	/* Explaining variable declaration
       -> n is for storing quantity of numbers user wants to add
       -> sum is for storing value of addition
       -> i is for controlling loop(you can declare it inside the for loop but here i'm declaring at first itself)
	*/
	cout<<"Enter Quantity of numbers you want to add :: "; //cout is output function(print fucntion),asking user to enter value
	cin>>n; //cin is input function and here we are taking no of numbers and storing it in n
	cout<<endl;
	int num[n]; // declaring an array to store n no of values,check array topic if you are new to this.
   for (i = 0; i < n; ++i)
   {
      cout<<"Enter num "<<i+1<<"of"<<n<<" ::" ;  
      cin>>num[i];
      sum=sum+num[i];
   }
   cout<<endl;
   cout<<"Additon of given numbers is :: "<<sum;
   return 0;
}