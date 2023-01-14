#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int result;
	for(int i=0; i<c; i++)
	{
		a=2*a-b;
		result=a;
	}
	cout<<result;
	return 0;
}