#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,sum=0,i,j;
	cin>>n;
	char ch[300000],x[10];
	cin>>ch;
	for(int i=0;i<n;i++){
		cin>>x;
		for(int j=0;j<9;j++){
			if ( x[j]==ch[i] ){
			if ( j>4 )
				j=9-j;
			else
				j=j;
				sum+=j;
			break;
			}
		}
	}
	cout<<sum;
	return 0;
}