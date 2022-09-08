#include<iostream>
using namespace std;
int main()
{
	int s=0,k,i;
	cin>>k;
	if(k>0 && k<=100){
		for(i=0;i<k;i++){
			s=s+i+1;
		}
	}
	cout<<s;
return 0;
}