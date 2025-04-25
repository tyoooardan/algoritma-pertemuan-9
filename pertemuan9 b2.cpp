#include <iostream>
#include <string.h>
using namespace std;

main(){
	
	int n;
	cout << "Masukkan bilangan : ";cin>>n;
	if(n % 2 == 0){
		cout << "Adalah bilangan Genap"<<endl;
	}else{
		cout << "Adalah bilangan Ganjil"<<endl;
	}
	return 0;
}
