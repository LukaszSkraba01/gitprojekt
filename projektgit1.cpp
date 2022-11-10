#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
	double A, B, C, mz;
	cout<<"Podaj A: ";
	cin>>A;
	cout<<"Podaj B: ";
	cin>>B;
	cout<<"Podaj C: ";
	cin>>C;
	cout<<"Postac funkcji: "<<A<<"x+"<<B<<"y+"<<C<<"=0";
	cout<<"\n oraz mz =C/-A";
	cout<<endl;
	mz=C/-A;	
	
	//
	if (A!=0)
	{
		cout<<"Miejsce zerowe funkcji liniowej: x="<<mz;
	}
	else 
		cout<<"Brak miejsc zerowych";
	
	
	return 0;
}
