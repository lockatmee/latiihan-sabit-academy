#include <iostream>
#include <string>
using namespace std;

int main() {
    string jenisKendaraan;
    int detik, jam, menit, totalBiaya;
    char lanjut;

    do {
        cout << "Masukkan jenis kendaraan (motor/mobil): ";
        cin >> jenisKendaraan;

        cout << "Masukkan waktu parkir dalam detik: ";
        cin >> detik;

        jam = detik / 3600;
        detik %= 3600;
        menit = detik / 60;
        detik %= 60;

        totalBiaya = 1000; // biaya sejam pertama

        // biaya tambahan + sesuai dengan kendaraan
        if (jam > 0) {
            if (jenisKendaraan == "motor") {
                totalBiaya += (jam * 2000);
            } else if (jenisKendaraan == "mobil") {
                totalBiaya += (jam * 3000);
            } else {
                cout << "Jenis kendaraan tidak ada. Silakan masukkan 'motor' atau 'mobil'." << endl;
                continue;
            }
        }

        cout << "Jenis kendaraan: " << jenisKendaraan << endl;
        cout << "Waktu parkir: " << jam << " jam, " << menit << " menit, " << detik << " detik." << endl;
        cout << "Total biaya parkir: Rp " << totalBiaya << endl;

        cout << "Apakah Anda ingin menghitung biaya parkir lagi? (y/n): ";
        cin >> lanjut;

    } while (lanjut == 'y' || lanjut == 'Y');

    cout << "Terima kasih telah menggunakan program ini!" << endl;

    return 0;
}
