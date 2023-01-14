#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c,d;
	string result[1000];
	cin>>n;
	for(int i=0; i<n; i++){
		cin >>a>>b>>c>>d;
		if ( a+c>b+d ){
			result[i]="perspolis";
		}else if ( b+d>a+c){
			result[i]="esteghlal";
		}else if ( a==d && b==c ){
			result[i]="penalty";
		}else if ( a+c==b+d ){
			if ( b>c ){
				result[i]="esteghlal";
			}else{
				result[i]="perspolis";
			}
		}
	}
	for(int i=0; i<n; i++){
		cout<<result[i]<<"\n";
	}
	return 0;
}