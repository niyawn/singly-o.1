#include <iostream>
#include <string>
using namespace std;

struct nilaiSTD{
    double clo1, clo2, clo3, clo4;
    double nilaiAkhir;
    string indeks;
};

double hitungNilaiAkhir(double clo1, double clo2, double clo3, double clo4) {
    double hasil1 = clo1 * 0.3;
    double hasil2 = clo2 * 0.3;
    double hasil3 = clo3 * 0.2;
    double hasil4 = clo4 * 0.2;
    double sum = hasil1 + hasil2 + hasil3 + hasil4;
    return sum;
}

string tentukanIndeks(double nilaiAkhir) {
    if (nilaiAkhir >= 80) {
        return "A";
    } else if (nilaiAkhir >= 70) {
        return "AB";
    } else if (nilaiAkhir >= 65) {
        return "B";
    } else if (nilaiAkhir >= 60) {
        return "BC";
    } else if (nilaiAkhir >= 50) {
        return "C";
    } else if (nilaiAkhir >= 40) {
        return "D";
    } else {
        return "E";
    }
}

int main(){
    nilaiSTD mahasiswa;

    cout << "CLO 1: ";
    cin >> mahasiswa.clo1;
    cout << "CLO 2: ";
    cin >> mahasiswa.clo2;
    cout << "CLO 3: ";
    cin >> mahasiswa.clo3;
    cout << "CLO 4: ";
    cin >> mahasiswa.clo4;

    mahasiswa.nilaiAkhir = hitungNilaiAkhir(mahasiswa.clo1, mahasiswa.clo2, mahasiswa.clo3, mahasiswa.clo4);
    mahasiswa.indeks = tentukanIndeks(mahasiswa.nilaiAkhir);

    cout << "Nilai Akhir: " << mahasiswa.nilaiAkhir << endl;
    cout << "Indeks: " << mahasiswa.indeks << endl;

    return 0;
}