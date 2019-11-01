#include<iostream>

using namespace std;

int main(){
	cout<<"Podaj k: ";
	int k,n;
	cin>>k;
	cout<<endl<<"Podaj n: ";
	cin>>n;
	int silniaN = 1;
	int silniaK = 1;
	int silniaA = 1;
	int a = n-k;
	for(int i=1; i<=k; i++){
		silniaK = silniaK * i;
	}	
	for(int j=1; j<=n; j++){
		silniaN = silniaN*j;
	}
	for(int l=1; l<=a; l++){
		silniaA = silniaA*l;
	}
	
	
	cout<<endl<<"Wynik jest rowny: "<<silniaN / (silniaK * silniaA);
}
