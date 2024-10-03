#include <iostream>

using namespace std;

int main() {
    int k = 0, i = 0;

    do{
        cout << "Masukan kertas : ";
        cin >> i;
        k = k + i;

        if (i < 10) {
            cout << "Kertas yang dimasukan kurang " << 10 - i << endl;
            cout << "Coba lagi!" << endl;
            k = k - i;
        }

        else if (i > 10) {
            cout << "Kertas yang dimasukan lebih " << i - 10 << endl;
            cout << "Coba lagi!" << endl;
            k = k - i;
        }

        cout << endl << "Jumlah kertas " << k << endl;
        cout << "==================" << endl << endl;
    }
    while (k < 50);
    cout << "PENYIMPANAN KERTAS TELAH PENUH!";

    return 0;
}
