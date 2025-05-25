#include <iostream>
using namespace std;

class ContohAkses {
    private:
        int privateVar;
    
    protected:
        int protectedVar;

    public:
        int publicVar;

        // Contructor, Fungsi yang mempersiapkan objek saat pertama kali dibuat.
        ContohAkses() {
            privateVar = 1;
            protectedVar = 2;
            publicVar = 3;
        }

    void tampilkanSemua() {
        cout << "Akses dari dalam class : " << endl;
        cout << privateVar << endl;
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }
};

// kelas turunan, Kelas yang dibuat dengan mewarisi properti dari kelas lain kecuali kelas private
class Turunan : public ContohAkses {
    public: 
    void aksesProtected() {
        cout << "Akses publicVar" << publicVar << endl;
        cout << "Akses protectedVar" << protectedVar << endl;
    }
};

int main() {
    ContohAkses obj;
    obj.tampilkanSemua();

    cout << "Akses dari luar class : " << endl;
    cout << obj.publicVar << endl;
    // cout << obj.privateVar << endl; //eror
    // cout << obj.protectedVar<< endl;

    Turunan tur;
    tur.aksesProtected();

}
