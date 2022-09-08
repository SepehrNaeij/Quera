#include<iostream>
using namespace std;
int main(){
	int n,k,sum,s=0,r,A[100];
	cin>>n; //tedad shishe
	cin>>k; //hajm har shishe
	if ( n>=1 && n<=100 && k>=1 && k<=100)
	for(int i=1;i<=n;i++){
	cin>>A[i];
	s+=A[i];
	}
	r=s%k;
	if ( r==0 ){
	s=s/k;
	n=n-s;
	cout<<n;
	}else{
	s=s/k;
	n=n-s;
	cout<<n-1;
	}
return 0;
}