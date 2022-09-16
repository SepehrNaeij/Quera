#include<iostream>
using namespace std;
int main(){
	int n,a,b;
	cin>>n;
	if ( n>=1 & n<=1000000 ){
	if ( n!=0 && n%4==0 ){
	a=-n/4;
	b=n/4;
	cout<<a<<" "<<b;
	}
	if ( n%4==3 ){
	a=n/4+1;
	b=n/4+1;
	cout<<a<<" "<<b;
	}
	if ( n%4==1 ){
	a=-n/4;
	b=a;
	cout<<a<<" "<<b;
	}
	if ( n%4==2 ){
	a=n/4+1;
	b=-1*(a-1);
	cout<<a<<" "<<b;
	}
}
	return 0;
}