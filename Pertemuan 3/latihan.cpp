#include <iostream>
using namespace std;

int main() {
    int nilai;

    cout << "Masukkan nilai : ";
    cin >> nilai;
 
    if (nilai % 10 == 0) {
        cout << nilai << " adalah kelipatan dari 10" << endl;
    } else if (nilai % 5 == 0) {
        cout << nilai << " adalah kelipatan dari 5 tetapi bukan kelipatan dari 10" << endl;
    } else {
        cout << nilai << " bukan kelipatan dari 5 atau 10" << endl;
    }

    return 0;
}
