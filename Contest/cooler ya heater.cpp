#include<iostream>
using namespace std;
int main()
{
	int n,a[100];
	string result[100];
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		if ( a[i]>15 ){
			result[i]="cooler";
		}else{
			result[i]="heater";
		}
	}
	
	for(int i=0; i<n; i++)
	{
		cout<<result[i]<<"\n";
	}
	return 0;
}