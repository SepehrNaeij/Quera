#include<iostream>
#include<sstream>
using namespace std;
int main()
{
	string result;
	int n;
	cin>>n;
	
	for(int i=1;i<4001;i++)
	{
		stringstream ss;
		ss<<i;
		string s;
		ss>>s;
		result+=s;
	}
	cout<<result[n-1];
}