#include <iostream>
using namespace std;
int main () {
int date , maah , saal , a , b , c , d ;
cin >> date ;
d = date / 1000 ;
c = date / 100 - d * 10 ;
b = date / 10 - ( d * 100 + c * 10 ) ;
a = date - ( d * 1000 + c * 100 + b * 10 ) ;
saal = d * 10 + c * 1 ;
maah = b * 10 + a * 1 ;
cout << "saal:" << d << c << "\n" << "maah:" << b << a ;
return 0;
}