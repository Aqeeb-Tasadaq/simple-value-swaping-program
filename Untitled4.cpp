#include<iostream>
using namespace std;
void swap(int, int);
int main()
{
	int a,b;
	a=5;
	b=10;
	cout<<a<<" "<<b<<endl;
	swap(a,b);
}
void swap(int a, int b)
{
	int c;
	c=b;
	b=a;
	a=c;
	cout<<a<<" "<<b;
}
