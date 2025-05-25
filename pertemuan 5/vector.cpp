#include <iostream>
#include <vector>
using namespace std;

int main () {
    // Vector Declaration & Initialization, array dinamis yang bisa menambah atau menghapus elemen secara otomatis.
    vector<string> nama_karyawan = {"nolan", "julian", "lukas", "lancelot"};

    // Ascending Element of Vector, Mengurutkan elemen-elemen dalam vector dari nilai terkecil ke terbesar
    // for (int i=0; i < nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i] << endl;
    // }

    // for (string karyawan : nama_karyawan){
    //     cout << karyawan << endl;
    // }

    // Add data to vector, menambahkan data ke vector
    nama_karyawan.push_back("imam");
    // for (int i=0; i < nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i] << endl;
    // }

    // Delete data from vector, menghapus data dari vector.
    nama_karyawan.pop_back();
    nama_karyawan.erase(nama_karyawan.begin() + 3);
    
    for (int i=0; i < nama_karyawan.size(); i++){
        cout << nama_karyawan[i] << endl;
    }

}
