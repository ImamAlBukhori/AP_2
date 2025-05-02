#include <iostream>
using namespace std;

string namaGlobal = "Ilmu";

void namaVariable() {
    string namaLokal = "Komputer";

    //coba akses 
    cout << namaLokal << endl;

    //coba akses 
    cout << namaGlobal << endl;
}

int main () {
    namaVariable();

    //coba akses
    cout << namaGlobal << endl;

    //coba akses
    // cout << namaLokal << endl; // tidak bisa. harus pada fungsi tertentu
}