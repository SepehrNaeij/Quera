#include<iostream>
#include<sstream>
using namespace std;
int main()
{
	long long int n,a[100];
	string result[100],test;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		stringstream s;
		cin>>a[i];
		if ( a[i]>=1 && a[i]<=1023){
			s << a[i];
			s >> test;
			result[i]=test+"B";
		}else if ( a[i]>=1024 && a[i]<=1048575 ){
			s << a[i]/1024;
			s >> test;
			result[i]=test+"KiB";
		}else{
			s << a[i]/1048576;
			s >> test;
			result[i]=test+"MiB";
		}
	}
	
	for(int i=0; i<n; i++){
		cout<<result[i]<<"\n";
	}
	return 0;
}