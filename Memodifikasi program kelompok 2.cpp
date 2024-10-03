#include <iostream>

using namespace std;

int main() {
    int b = 0, i = 0;

    do{
        cout << "Masukan jumlah buku : ";
        cin >> i;
        b = b + i;

        if (i % 2 == 0) {
            cout << "Buku yang dimasukkan tidak berjumlah ganjil!" << endl;
            cout << "Coba lagi!" << endl;
            b = b - i;
        }

        else {
            cout << "Memasukan " << i << " buku" << endl;
        }

        cout << endl << "Jumlah Buku " << b << endl;
        cout << "============" << endl;
    }
    while (b < 30);
    cout << "Lemari Buku telah penuh";

    return 0;
}
