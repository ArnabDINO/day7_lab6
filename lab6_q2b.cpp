//2b Sum by Reference
/*
Goal is the same as above, but this time, the function that adds the numbers should be void, and takes a third, pass by reference parameter; then puts the sum in that.

*/
#include<iostream>
using namespace std;
/*
the function that adds the numbers should be void, and takes a third, pass by reference parameter
*/
void funcSum(int a,int b,int& c)
{
	c=a+b;//then puts the sum in that.
}
int main()
{
	int a,b,sUm;
	cout<<"Give me two numbers"<<endl;
	cin>>a>>b;
	funcSum(a,b,sUm);
	cout<<"The sum is "<<sUm<<endl;
	return 0;
}
