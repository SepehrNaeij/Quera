#include <iostream>
using namespace std;
 int main(){
int p,i,r,b,a;
cin >> a;
cin >> b;
for(p=1;p<=b;p++){
r = 0;
for(i=2;i<=p/2;i++){
if(p%i==0){
r++;
break;
}
}
 if(r==0 && p!= 1 && p>=a)
cout << p << "\n" ;
}
return 0;
}
