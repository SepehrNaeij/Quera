#include<iostream>
using namespace std;
int main(){
	int n ,i;
	cin>>n;
	if(n>=1 && n<=100){
		for(i=1;i<=n;i++){
			if (i==1 || i==2 ||i==3 || i==5 || i==8 || i==13 || i==21 || i==34 || i==55 || i==89 ){
				cout<<"+";
			}else{
				cout<<"-";
			}
		}
	}
return 0;
}