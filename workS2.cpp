#include <iostream>
using namespace std;

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
int main() {
    cout << "jika nilai mahasiswa 85 maka indeksnya adalah: " << tentukanIndeks(85) << endl;
    cout << "jika nilai mahasiswa 77 maka indeksnya adalah: " << tentukanIndeks(77) << endl;
    cout << "jika nilai mahasiswa 68 maka indeksnya adalah: " << tentukanIndeks(68) << endl;
    cout << "jika nilai mahasiswa 63 maka indeksnya adalah: " << tentukanIndeks(63) << endl;
    cout << "jika nilai mahasiswa 55 maka indeksnya adalah: " << tentukanIndeks(55) << endl;
    cout << "jika nilai mahasiswa 45 maka indeksnya adalah: " << tentukanIndeks(45) << endl;
    cout << "jika nilai mahasiswa 45 maka indeksnya adalah: " << tentukanIndeks(45) << endl;
    cout << "jika nilai mahasiswa 35 maka indeksnya adalah: " << tentukanIndeks(35) << endl;
    return 0;
}