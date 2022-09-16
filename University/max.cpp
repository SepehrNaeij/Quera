#include<iostream>
using namespace std;
int main(){
int n,j,max;
cin>>n;
max=0;
for(int i=0;i<n;i++){
cin>>j;
if(j>max)
max=j;
}
cout<<max;
return 0;
}