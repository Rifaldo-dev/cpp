#include <iostream>
using namespace std;

int volumekubus(int sisi, int volume){
volume = sisi*sisi*sisi ;
return volume;
}

main() {
	int sisi;
	cout << "panjang sisi kubus";
	cin >>  sisi;
   int volume = volumekubus(sisi, volume);
   cout << "volume kubus dengan sisi"<< "adalah " << volume << endl;
   return 0;
 
}

 
 
