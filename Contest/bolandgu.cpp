#include<iostream>
#include<string>
using namespace std;
int main(){
	int x,i,j;
	string n;
	char b[20];
	cin>>n;
	x=n.length();
	cout<<n<<endl;
	for(i=0;i<x;i++){
		b[i]=n[i];
	}
	for(i=1;i<x;i++){
		for(j=0;j<i;j++){
			n[j]=b[i];
		}
		cout<<n<<endl;
	}
return 0;
}