#include <iostream>
using namespace std;

int main() {
    int berat;
    cout << "Masukkan berat badan atlet:" << endl;
    cin >> berat;

    if(berat < 45) {
        cout << "Tidak memenuhi kualifikasi" << endl;
    }
    else if(berat < 50){
    cout << " kelas A" << endl;
    }
    else if(berat <= 55){
        cout << " kelas B" << endl;
    }
    else if(berat <= 60) {
        cout << " kelas C" << endl;
    }
    else if(berat <= 65) {
        cout << " kelas D" << endl;
    } else {
        cout << " kelas F" << endl;
    }

    return 0;
}