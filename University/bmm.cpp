#include<iostream>
using namespace std;
unsigned long bmm(unsigned long a,unsigned long b)
{
	if(b==0)
	return a;
	else
	return bmm(b,a%b);
}
int main(){
	unsigned long a,b;
	cin>>a>>b;
	cout<<bmm(a,b);
return 0;
}