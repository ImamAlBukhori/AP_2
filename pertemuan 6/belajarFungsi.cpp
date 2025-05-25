#include <iostream>
using namespace std;

void sapa(string nama) { //parameter formal, Variabel yang dideklarasikan di definisi fungsi, sebagai tempat menerima nilai input saat fungsi dipanggil.
    cout << "Halo " << nama <<"! Selamat Datang di AP 2 !" << endl;
}

int main () {
    string namaPengguna = "Imam";

    sapa(namaPengguna); //parameter aktual, Nilai atau variabel yang dikirim ke fungsi saat dipanggil, untuk menggantikan parameter formal.

    return 0;
}
