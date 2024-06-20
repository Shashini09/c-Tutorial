#include<iostream>
using namespace std;

long Factorial(int no);
long nCr(int n, int r);

int main() 
{
int n, r;
cout << "Enter a value for n ";
cin >> n;
cout << "Enter a value for r ";
cin >> r;
cout << "nCr = "<< nCr(n,r)<<endl;

return 0;
}


