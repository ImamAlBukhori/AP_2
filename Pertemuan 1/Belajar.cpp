#include <iostream> // header untuk c++
#include <conio.h> // header untuk fungsi getch() dan getche()
using namespace std;

int main() {
    string nama;
    char kom, jeniskelamin;
    string nim;
    float ip;
    
    /*ini untuk komen 
    beberapa line*/

    cout << "hello word" << endl;

    cout << "Masukkan nama anda : " << endl;
    // cin >> nama;
    getline(cin, nama); // agar karakter spasi bisa terbaca 

    cout << "Masukkan KOM : ";
    cin >> kom;

    cout << "Masukkan NIM : ";
    cin >> nim;

    cout << "Masukkan IP : ";
    cin >> ip;

    cout << "masukkan jenis kelamin (L/P) : ";
    jeniskelamin = getche(); //agar karakter langsung tampil, tanpa tekan enter


    /*untuk ouput*/
    cout << "\n" << nama << endl;
    cout << kom << endl;
    cout << nim << endl;
    cout << ip << endl;
    putchar(jeniskelamin); // untuk menampilkan karakter 

    getch(); // karakter yang dimasukkan tidak ditampilkan tapi disimpan di memori
 
}