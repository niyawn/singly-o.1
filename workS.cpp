#include <iostream>
using namespace std;
struct nilaiSTD{
    int clo1;
    int clo2;
    int clo3;
    int clo4;
    double nilaiAkhir;
    string indeks;
};

double hitungNilaiAkhir(double clo1, double clo2, double clo3, double clo4) {
    double hasil1 = clo1 * 0.3;
    double hasil2 = clo2 * 0.3;
    double hasil3 = clo3 * 0.2;
    double hasil4 = clo4 * 0.2;
    cout << "Hasil CLO1: " << hasil1 << endl;
    cout << "Hasil CLO2: " << hasil2 << endl;
    cout << "Hasil CLO3: " << hasil3 << endl;
    cout << "Hasil CLO4: " << hasil4 << endl;
    double sum = hasil1 + hasil2 + hasil3 + hasil4;
    return sum;
}

int main() {
    nilaiSTD mahasiswa;
    cout << "Masukkan nilai CLO1: ";
    cin >> mahasiswa.clo1;
    cout << "Masukkan nilai CLO2: ";
    cin >> mahasiswa.clo2;
    cout << "Masukkan nilai CLO3: ";
    cin >> mahasiswa.clo3;
    cout << "Masukkan nilai CLO4: ";
    cin >> mahasiswa.clo4;
    mahasiswa.nilaiAkhir = hitungNilaiAkhir(mahasiswa.clo1, mahasiswa.clo2, mahasiswa.clo3, mahasiswa.clo4);

    cout << mahasiswa.nilaiAkhir << endl;
    return 0;
}