#include <iostream>
using namespace std;

int main(){
	int n;
	
	cout<<"masukan bilangan bulat: ";
	cin>> n;
	
	if (n % 2 == 0) {
		cout << "adalag bilangan genap. " <<endl;
	}else  {
		cout << n << " adalah bilangan ganjil " <<endl;
	}
	return 0;
}
