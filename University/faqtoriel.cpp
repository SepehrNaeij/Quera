#include <iostream>
using namespace std;
int main()
{
long long int n , p=1 ;
cin >> n ;
int i = 1 ;
do {
p = p * i ;
	i++ ;
} while ( i <= n ) ;
cout << p ;
return 0;
}