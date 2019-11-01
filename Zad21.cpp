#include<iostream>

using namespace std;
int main(){
	cout<<"Podaj liczbe: ";
	int n;
	cin>>n;
	float a=0;
	for(float i=1; i<=n; i++){
		a=a+i/(i+1);
	}
	cout<<a;	
}
