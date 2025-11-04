#include <iostream>
using namespace std;

int main (){
	long  long detik;
	
	cout << "Masukan angka > 1 (dalam satuan detik) = ";
	cin >> detik;
	
	long long hari          = detik        /    86400;
	long long sisa_detik    = detik        %    86400;
	long long jam           = sisa_detik   /    3600;
	sisa_detik              = detik        &    3600;
	long long menit         = sisa_detik   /    60;
	long long detik_akhir   = sisa_detik   &    60;
	
	cout << endl;
	cout << "Hasil Konversi : " << endl;
	cout << " " << "Detik = " << " " << hari << " " << "Hari, " << jam << " " <<  "Jam, " << menit << " " << "Menit, " << detik_akhir << " " << "Detik. " << endl;
	
	return 0;
}
