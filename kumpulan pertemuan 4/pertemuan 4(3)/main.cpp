#include <iostream>
using namespace std;

int main() {
    char s2[] = {'H', 'e', 'l', 'l', 'o', '\0'}; // Array karakter, bisa dimodifikasi

    // Mengubah karakter kedua dalam array
    s2[2] = 'y';
    s2[3] = 'y';
    s2[1] = 'a';
    // Menampilkan hasil perubahan
    cout << "Array karakter s2 setelah modifikasi: " << s2 << endl;

    return 0;
}