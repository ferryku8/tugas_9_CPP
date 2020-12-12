#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int x,z;
	cout<<"Inputkan Nilai X : ";
	cin>>x;
	z=0;
	do{
		cout<<z*5<<endl;
		z++;
	}
	while(z<=x);
}
