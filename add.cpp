#include<iostream>
using namespace std;
int add(int a,int b)
{
	return(a+b);
}
int mul(int a,int b)
{
	return(a*b);
}
int main()
{
	int x,y,result;
	cout<<"Enter the value for x :";
	cin>>x;
	cout<<"\n Enter the value for y :";
	cin>>y;
	result=add(x,y);
	cout<<"\n addition of x & y is :"<<result;
	result=mul(x,y);
	cout<<"\n multiplication of x & y is :"<<result;
	return 0;
}
