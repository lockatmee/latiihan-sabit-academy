#include <iostream>
using namespace std;

int main() {
    int detik, jam, menit, totalBiaya;

    cout << "Masukkan waktu parkir dalam detik: ";
    cin >> detik;

    jam = detik / 3600;
    detik %= 3600;
    menit = detik / 60;
    detik %= 60;

    totalBiaya = 0;

    // biaya satu jam pertama
    totalBiaya += 1000;

    if (jam > 0) {
        totalBiaya += jam * 2000; // setiap jam kedepan di tambah Rp 2000
    }

    cout << "Waktu parkir: " << jam << " jam, " << menit << " menit, " << detik << " detik." << endl;
    cout << "Total biaya parkir: Rp " << totalBiaya << endl;

    return 0;
}
