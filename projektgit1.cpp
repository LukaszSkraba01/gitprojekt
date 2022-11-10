#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
	double a, b, mz;
	cout<<"Podaj a: ";
	cin>>a;
	cout<<"Podaj b: ";
	cin>>b;
	cout<<endl;
	mz=-b/a;	
	
	
	if (a!=0)
	{
		cout<<"Miejsce zerowe funkcji liniowej: "<<mz;
	}
	else 
		cout<<"Brak miejsc zerowych";
	
	
	return 0;
}
