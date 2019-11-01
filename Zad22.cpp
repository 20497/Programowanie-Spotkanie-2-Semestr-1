#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	int currentNumber;
	int sum = 0;
	int counter = 0; 
	srand(time(NULL));
	while(true){
	counter ++;
	int x = rand()%20+1;
	sum += x;
	cout<<x<<endl;
	if(currentNumber==x){
		break;
	}
	if(currentNumber != x){
		currentNumber = x;
	}
	}
	cout<<"Wylosowano lacznie: "<<counter<<" liczb!";
	cout<<endl<<"Suma ich wszystkich to: "<<sum;
}
