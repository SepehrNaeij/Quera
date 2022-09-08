#include <iostream>
using namespace std;
int main(){
    int n,m,i,j,count=0;
    cin>>n>>m;
    unsigned long long int a[m][n];
    for(j=0;j<n;j++){
        for(i=0;i<m;i++){
            cin>>a[i][j];
        }
    }
    for(j=1;j<n-1;j++){
        for(i=1;i<m-1;i++){
            if(
                (((a[i][j]>a[i-1][j])&&(a[i][j]>a[i+1][j]) && ((a[i][j]<a[i][j-1]) && (a[i][j]<a[i][j+1]))) || ((a[i][j]<a[i-1][j])&&(a[i][j]<a[i+1][j]) && ((a[i][j]>a[i][j-1]) && (a[i][j]>a[i][j+1]))))
            )
            {count++;}

        }
    }
    cout<<count;
return 0;    
}