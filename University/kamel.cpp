#include <iostream>
using namespace std ;
int main()
{
int n , r , s=1 , i=2 ;
cin >> n ;
do {
r = n % i ;
if ( r == 0 )
	s = s + i ; 	
	i++ ;
} while( i < n - 1  ) ;
if ( s == n ){
	cout << "YES" ;
}else{
	cout << "NO" ;
return 0;
}
}