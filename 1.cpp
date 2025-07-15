#include <iostream>
using namespace std;

void jumlahBilanganGenap(int N) {
    int jumlah = 0;

    // hitung jumlah N bilangan genap pertama
    for (int i = 0; i < N; i++) {
        jumlah += 2 * i;
    }

    cout << "Jumlah " << N << " buah bilangan genap pertama adalah: " << jumlah << endl;
}

int main() {
    int N;

    cout << "Masukkan jumlah N: ";
    cin >> N;

    jumlahBilanganGenap(N);

    return 0;
}
