#include <iostream>
#include <string>
#include <array>
using namespace std;

int main () {
        system("CLS");
        // Array Declaration & initialization = array declaration Mendeklarasikan array dan ukurannya dan initalization Memberi nilai awal pada array saat deklarasi.
        /* 2 cara membuat array */

        // cara 1 : array kosong 
        // string nama[5];

        // nama[0] = "nolan";
        // nama[1] = "julian";
        // nama[2] = "lukas";
        // nama[3] = "lancelot";

        // cara 2 : array yang langsung diisi
        // string nama[5] = {"nolan", "julian", "lukas", "lancelot"};
        // string nama[] = {"nolan", "julian", "lukas", "lancelot"};
        
        // Ascending element in Array = mengurutkan elemen-elemen dalam array dari nilai terkecil ke terbesar.
        // cout << nama[0] << endl;
        // cout << nama[1] << endl;
        // cout << nama[2] << endl;
        // cout << nama[3] << endl;
        // cout << nama[4] << endl;

        // Menggunakan Looping, perulangan
        // for(int = i = 0; i < 5; i++) {
        //     cout << nama[i] << endl;
        // }

        // Descending element in Array use Looping, mengurutkan elemen array dengan descending, mengurutkan dari yang terbesar ke terkecil
        // for (int i = 4; i >=0; i--) {
        //     cout << nama[i] << endl;
        // }

        //Multidimensional Array, array yang mempunyai baris dan kolom
        // 1 3 5 
        // 2 4 6

        // int matrix[2][3] = {(1,3,5),(2,4,6)};
        // foe (int i = 0; i < 2; i++) {
        //     for(int j=0; j<3; j++) {
        //         cout << matrix[i][j] << " ";
        //     }
        //     cout << endl;
        // }

        // int matrix[4][6] = {{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24}};
        // for(int i = 0;i < 4;i++) {
        //     for(int j = 0;j < 6;j++) {
        //         cout << matrix[i][j] << "\t";
             // }
            // cout << endl;
        // }

        // (String Array of Caracter), menyimpan kalimat atau kata sebagai array karakter.
        // string nama = "imam";
        // cout << nama[0] << endl;
        // cout << nama[2] << endl;

        // for (int i = 0; i< nama.length(); i++) {
        //     cout << nama[i] << endl;
        // }

        // string s1 = "Hello";
        // string s2 = "Word";

        /*1. s1 = s2*/
        // s1 = s2;
        // cout << "s1= " << s1 << endl;

        /*2. s1 = s1 + s2*/
        // s1 = "Hello"; // reset nilai di s1
        // cout << "Hasil : " << s1 + s2 << endl;

        /*3. s1. length()*/
        // cout << s1.length() << endl;
        // cout << (s1 + s2).length() << endl;

        /*4. s1 substr(n,m)*/
        // cout << s1.substr(2,3) << endl;
        // cout << (s1 + s2).substr(5,3) << endl;

        // Operator sizeof, untuk mengembalikan jumlah byte yang dipakai oleh sebuah tipe data atau variabel di memori.
        // int angka = 10;
        // cout << sizeof(angka);

        // int nilai[] = (10, 20, 30, 40, 50);
        // cout << sizeof(nilai);

        // string s = "imam";
        // cout << sizeof(s);

        // Array library
        // array<float, 5> nilai = {87.5,90,100,100,95.7,78.3};
        // cout << "Nilai : ";

        // for ( int i = 0; i < nilai.size(); i++){
        //     cout << nilai[i] << " ";
        // }
        // for (float n : nilai) {
        //     cout << n << " ";
        // }

}
