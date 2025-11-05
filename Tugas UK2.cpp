#include <iostream>
using namespace std;

int main() {
    int total_detik;
    cout << "Masukkan total detik: ";
    cin >> total_detik;

    int hari = total_detik / (24 * 3600);
    int sisa_detik = total_detik % (24 * 3600);

    int jam = sisa_detik / 3600;
    sisa_detik %= 3600;

    int menit = sisa_detik / 60;
    int detik_akhir = sisa_detik % 60;
    
    cout << endl;
    cout << total_detik << " detik setara dengan:" << endl;
    cout << hari << " hari, " << jam << " jam, " << menit << " menit, " << detik_akhir << " detik." << endl;

    return 0;
}
