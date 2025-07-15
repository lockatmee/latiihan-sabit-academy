#include <iostream>
#include <cmath>
using namespace std;

void durasi(int jam1, int menit1, int detik1, int jam2, int menit2, int detik2) {
    // total detik di waktu pertama
    int totalDetik1 = jam1 * 3600 + menit1 * 60 + detik1;
    // total detik di waktu kedua
    int totalDetik2 = jam2 * 3600 + menit2 * 60 + detik2;

    // durasi dalam detik
    int durasiDetik = abs(totalDetik2 - totalDetik1);

    // jam, menit, dan detik dari durasi
    int jam = durasiDetik / 3600;
    durasiDetik %= 3600;
    int menit = durasiDetik / 60;
    int detik = durasiDetik % 60;

    cout << "Durasi: ";
    if (jam < 10) cout << "0"; // + 0, jika jam < 10
    cout << jam << ":";
    if (menit < 10) cout << "0"; // + 0, jika menit < 10
    cout << menit << ":";
    if (detik < 10) cout << "0"; // + 0, jika detik < 10
    cout << detik << endl;
}

int main() {
    int jam1, menit1, detik1;
    int jam2, menit2, detik2;

    cout << "Masukkan waktu pertama (hh mm ss): ";
    cin >> jam1 >> menit1 >> detik1;

    cout << "Masukkan waktu kedua (hh mm ss): ";
    cin >> jam2 >> menit2 >> detik2;

    durasi(jam1, menit1, detik1, jam2, menit2, detik2);

    return 0;
}
