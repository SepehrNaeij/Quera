#include "iostream"
using namespace std;
int main()
{
	char s[6];
	int R=0,G=0,Y=0;
	cin>>s;
	for(int i=0;i<5;i++)
	{
		if((int)s[i]==(int)'R')
			R++;
		else if((int)s[i]==(int)'G')
			G++;
		else if((int)s[i]==(int)'Y')
			Y++;
	}
	if( (R==5||Y==5)||(R>= 3)||(R>=2&&Y>=2)||(R==1&&Y== 4) )
		cout<<"nakhor lite"<<endl;
	else
		cout<<"rahat baash"<<endl;
	return 0;
}