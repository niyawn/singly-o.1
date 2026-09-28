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
    nilaiSTD mahasiswa[3];
    cout << "=== STUDENT GRADE SYSTEM ===" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Mahasiswa"<< i + 1 << ":" << endl;
        cout << "CLO 1: ";
        cin >> mahasiswa[i].clo1;
        cout << "CLO 2: ";
        cin >> mahasiswa[i].clo2;
        cout << "CLO 3: ";
        cin >> mahasiswa[i].clo3;
        cout << "CLO 4: ";
        cin >> mahasiswa[i].clo4;

        mahasiswa[i].nilaiAkhir = hitungNilaiAkhir(mahasiswa[i].clo1, mahasiswa[i].clo2, mahasiswa[i].clo3, mahasiswa[i].clo4);
        mahasiswa[i].indeks = tentukanIndeks(mahasiswa[i].nilaiAkhir);
    }
    cout << endl << "=== HASIL ===" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Mahasiswa " << i + 1 << ":" << endl;
        cout << "Nilai Akhir: " << mahasiswa[i].nilaiAkhir << endl;
        cout << "Indeks: " << mahasiswa[i].indeks << endl;
    }

    return 0;
}