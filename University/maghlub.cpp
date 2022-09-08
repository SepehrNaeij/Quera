#include<iostream>
using namespace std;
int main(){
int n,m,s=0,r;
cin>>n;
m=n;
while(n>0){
    s = (s * 10) + (n % 10);
    n /= 10;
}
	if ( s==m ){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
return 0;
}