#include <iostream>
using namespace std;
void print(int a, int b ){
	int t=0;
	for(int p=1;p<b;p++){
	int r = 0;
	for(int i=2;i<=p/2;i++){
	if(p%i==0){
	r++;
	break;
	}
	}
 if(r==0 && p!= 1 && p>a){
 t++;
if ( t==1 ){
 	cout<<p;
 }else{
	cout <<","<<p;
}
}
}
}
int main()
{
	int x,y;
	cin>>x;
	cin>>y;
	print (x,y);
return 0;
}