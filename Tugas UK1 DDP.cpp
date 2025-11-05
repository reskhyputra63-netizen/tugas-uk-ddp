#include <iostream>
using namespace std;

int main() {
    int totalDetik;
    cout << "Masukkan jumlah detik: ";
    cin >> totalDetik;

    int jam = totalDetik / 3600;
    int menit = (totalDetik % 3600) / 60;
    int detik = totalDetik % 60;
    
    cout << endl;
    cout << "Hasil Konversi :";
    cout << jam << " jam, " << menit << " menit, " << detik << " detik." << endl;

    return 0;
}
