#include <iostream>
using namespace std;

int main(){
		long long detik;
	
	cout << "Masukan angka > 1 (dalam satuan deetik) = ";
	cin >> detik;
	
	long long jam                   = detik        /      3600;
	long long sisa_detik            = detik        %      3600;
	long long menit                 = sisa_detik   /      60;
	long long detik_akhir           = sisa_detik   %      60;
	
	cout <<  endl;
	cout << "Hasil Konversi : " << endl;
	cout << " " << "Detik = " << " " << jam << " " << " jam, " << menit << " " << "Menit, " << detik_akhir << " "<< "detik. " << endl;
	
	return 0;
	
	
	
}
