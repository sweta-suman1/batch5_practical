#include<iostream>
using namespace std;

int add(int a,int b)
{
return(a+b);	
}

int main()
{
	int x,y, result;
	cout<<"\nenter value for x: ";
	cin>>x;
	cout<<"\nenter value for y: ";
	cin>>y;
	result=add(x,y);
	cout<<"\n additipon of x & y is:"<<result;
	return 0;
}
