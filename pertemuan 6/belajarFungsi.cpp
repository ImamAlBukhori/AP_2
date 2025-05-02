#include <iostream>
using namespace std;

void sapa(string nama) { //parameter formal
    cout << "Halo " << nama <<"! Selamat Datang di AP 2 !" << endl;
}

int main () {
    string namaPengguna = "Imam";

    sapa(namaPengguna); //parameter aktual

    return 0;
}