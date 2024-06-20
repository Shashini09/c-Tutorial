#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int etype ,othours,otrate;
	double salary, netsalary,otpay;
	
	cout<<"enter the employee type:";
	cin>>etype;
	
	cout<<"enter the othours:";
	cin>>othours;
	
	cout<<"enter the otrate:";
	cin>>otrate;
	
	switch(etype)
	{
		case 1:
			otrate =1000;
			break;
		case 2:
			otrate =1500;
			break;
		default:
			otrate =1700;
			break;
	}
	
	otpay = otrate * othours;
	netsalary = salary + otpay;
	
	cout<<"employee otpay:"<<setiosflags(ios::fixed)<<setprecision(2)<<otpay<<endl;
	cout<<"employee net salary:"<<setiosflags(ios::fixed)<<setprecision(2)<<netsalary<<endl;
	
	
	return 0;
}
