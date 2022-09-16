#include<iostream>
using namespace std;
int main(){
	int n,m,s=0,p;
	cin>>n>>m;
	if(n>=0 && m<=10 ){
	for(int j=1;j<=n;j++){
	for(int i=-10;i<=m;i++){
	s+=((i+j)*(i+j)*(i+j)) /( j*j);
	}}
	cout<<s;
}
return 0;
}