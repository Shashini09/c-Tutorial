#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float cm,inches;
	
	cout<<"enter the length in cm:";
	cin>>cm;
	
	inches = cm/2.54;
	
	cout<<"length in inches:"<<setiosflags(ios::fixed)<<setprecision(2)<<inches<<endl;
	
	
	return 0;
}
 
