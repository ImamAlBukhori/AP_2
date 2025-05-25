#include <iostream>
using namespace std;

int main () {
    int nilai;

    system("CLS");

    cout << "Masukkan nilai : ";
    cin >> nilai;

    // // if statement, untuk menentukan kode suatu bilangan itu hanya satu kondisi tertentu.
    // if (nilai <= 65) {
    //     cout << "Anda vtidak lulus!" << endl;
    // }

    // // if - else statement = untuk membuat pilihan antara dua jalur eksekusi berdasarkan kondisi.
    // if (nilai <= 65) {
    //     cout << "Anda tidak lulus!" << endl;
    // } else {
    //     cout << "Anda lulus !" << endl;
    // }    

    // if -else - if statement = untuk memilih beberapa kondisi.
    // if (nilai == 100) {
    //     cout << "Anda Keceh" << endl;
    //     } else if (nilai <= 65) {
    //     cout << "Anda tidak lulus" << endl;
    //     } else {
    //     cout << "Anda Lulus!" << endl;
    // }

    // nested if = If statement yang ada di dalam if statement lain, berguna untuk memeriksa kondisi bertingkat secara berurutan.
    // if (nilai<= 65) {
    //     cout << "Anda tidak lulus" << endl;
    // } else {
    //     if (nilai==100) {
    //         cout << "Anda lulus dan anda hebat" << endl;
    //     } else {
    //         cout << "anda lulus" << endl;
    //     }
    // }

    // switch case = untuk memilih satu dari beberapa opsi berdasar nilai variabel.
    // switch (nilai) {
    //     case 1:
    //         cout << "senin" << endl;
    //         break;
        
    //     case 2:
    //         cout << "selasa" << endl;
    //         break;

    //     case 3:
    //         cout << "rabu" << endl;
    //         break;

    //     case 4:
    //         cout << "kamis" << endl;
    //         break;

    //     case 5:
    //         cout << "jumat" << endl;
    //         break;

    //     case 6:
    //         cout << "sabtu" << endl;
    //         break;

    //     case 7:
    //         cout << "minggu" << endl;
    //         break;
    //     default: // selain dari pernyataan yang ada
    //         cout << "inputan tidak valid!" << endl;
    //         break;
    // }

    // switch range = statement tidak bisa langsung digunakan untuk mengecek range nilai
    // switch (nilai) {
    //     case 85 ... 100 : cout << "A" << endl; break;
    //     case 80 ... 84 : cout << "B+" << endl; break;
    //     case 75 ... 79 : cout << "B" << endl; break;
    //     case 70 ... 74 : cout << "C+" << endl; break;
    //     case 65 ... 69 : cout << "C" << endl; break;
    //     case 60 ... 64 : cout << "D" << endl; break;
    //     default: cout << "E" << endl;
     
    // }

    // ternary operator = operator singkat untuk membuat if-else sederhana dalam satu baris kode.
    // if (nilai % 2 == 0) {
    //     cout << "genap" << endl;
    // } else {
    //     cout << "ganjil" << endl;
    // }

    // a > 5? 9 : 6 
    // string checkNum = (nilai % 2 == 0) ? "genap " : "ganjil ";
    // cout << nilai << " tuh bilangan " << checkNum << "sih" << endl;

    
 }
