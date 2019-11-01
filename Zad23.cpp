#include<iostream>

using namespace std;
int main(){
	int x,n,wynik = 1;
	cout<<"Podaj liczbe: ";
	cin>>x;
	cout<<"Podaj potege: ";
	cin>>n;
	for(int i=0; i<n; i++)
		wynik *= x;
	cout<<wynik;
}
