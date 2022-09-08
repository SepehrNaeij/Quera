#include <iostream>
using namespace std;
void degree(int a,int b,int c ){
	int sum = a + b + c;
	if (sum==180 && a!=0 && b!=0 && c!=0 ){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
}
int main(){
	int x,y,z;
	cin>>x;
	cin>>y;
	cin>>z;
	if (x>=0 && x<360 && y>=0 && y<360 && z>=0 && z<360)
	degree(x,y,z);
return 0;
}