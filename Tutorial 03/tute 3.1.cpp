#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n;
    float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
    char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};

    cout << setw(5) << "No" << setw(15) << "Name" << setw(10) << "Marks" << endl;


    for ( n= 0; n <5; n++) {
        cout << setw(5) << n+1<< setw(15) << names[n]<< setiosflags(ios::fixed) << setprecision(2) << setw(10) << marks[n] << endl;
    }

    return 0;
}

