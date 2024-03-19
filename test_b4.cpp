#include<iostream>
using namespace std;
int add(int x,int y)
{
	return(x+y);
}
int main()
{   int a,b,result;
cout<<"\n Enter value for a: ";
cin>>a;
cout<<"\n Enter value for b: ";
cin>>b;
result=add(a,b);
cout<<"\n Addition to 2 number a and b is : "<<result;
return 0;
}
