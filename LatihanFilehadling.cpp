#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
    // Deklarasi variabel untuk koefisien dan diskriminan
    double a, b, c, D, x1, x2;

    // Meminta input dari pengguna untuk koefisien a, b, dan c
    cout << "Masukkan koefisien a, b, dan c untuk persamaan ax^2 + bx + c = 0: ";
    cin >> a >> b >> c;

    // Validasi apakah a = 0 (bukan persamaan kuadrat)
    if (a == 0) {
        cout << "Persamaan ini bukan persamaan kuadrat karena a = 0." << endl;
        return 0;
    }

    // Menghitung diskriminan D = b^2 - 4ac
    D = b * b - 4 * a * c;

    // Membuka file untuk menyimpan hasil
    ofstream outputFile("hasil_persamaan.txt");

    // Jika diskriminan lebih besar atau sama dengan 0, hitung akar-akar persamaan
    if (D >= 0) {
        // Menghitung akar-akar persamaan
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);

        // Menulis hasil ke file
        if (D > 0) {
            outputFile << "Akar persamaan: x1 = " << x1 << ", x2 = " << x2 << endl;
        } else {
            outputFile << "Akar persamaan: x1 = x2 = " << x1 << endl;
        }

        cout << "Keberhasilan! Hasil telah disimpan ke file 'hasil_persamaan.txt'" << endl;
    } else {
        // Jika diskriminan negatif, tidak ada akar real
        outputFile << "Persamaan tidak memiliki akar real." << endl;
        cout << "Persamaan tidak memiliki akar real." << endl;
    }

    // Menutup file setelah selesai
    outputFile.close();

    return 0;
}
