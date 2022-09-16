#include <iostream>
using namespace std;
int main(){
int p=2 ;
unsigned int n ;
cin >> n ;
if ( n > 0 && n < 1000000000 )
do {
if ( p <= n ){
	p = p * 2 ;
}else{
	cout << p ;
	break ;
}
} while ( p <= 1073741824 ) ;
return 0;
}
