#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int num,r;
	long fac =1;
	
	cout<<"enter the number:";
	cin>>num;
	
	for(r=num;r>=1;r--)
	{
		fac = fac *r;
	}
	
	cout<<"factorial of "<<num<<" is "<<fac<<endl;
	
	return 0;
	
	
}
