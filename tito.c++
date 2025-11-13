#include <iostream>
#include <cmath>

using namespace std;

// Kelas untuk Segitiga
class Segitiga {
private:
    double sisiA, sisiB, sisiC;

public:
    Segitiga(double a, double b, double c) : sisiA(a), sisiB(b), sisiC(c) {}

    double keliling() {
        return sisiA + sisiB + sisiC;
    }

    double luas() {
        double s = keliling() / 2;
        return sqrt(s * (s - sisiA) * (s - sisiB) * (s - sisiC));
    }
};

// Kelas untuk Bujur Sangkar
class BujurSangkar {
private:
    double sisi;

public:
    BujurSangkar(double s) : sisi(s) {}

    double keliling() {
        return 4 * sisi;
    }

    double luas() {
        return sisi * sisi;
    }
};

// Kelas untuk Persegi Panjang
class PersegiPanjang {
private:
    double panjang, lebar;

public:
    PersegiPanjang(double p, double l) : panjang(p), lebar(l) {}

    double keliling() {
        return 2 * (panjang + lebar);
    }

    double luas() {
        return panjang * lebar;
    }
};

int main() {
    // Input dan penghitungan untuk Segitiga
    double a, b, c;
    cout << "Masukkan sisi-sisi segitiga (a, b, c): ";
    cin >> a >> b >> c;
    Segitiga segitiga(a, b, c);
    cout << "Keliling Segitiga: " << segitiga.keliling() << endl;
    cout << "Luas Segitiga: " << segitiga.luas() << endl;

    // Input dan penghitungan untuk Bujur Sangkar
    double sisi;
    cout << "Masukkan sisi bujur sangkar: ";
    cin >> sisi;
    BujurSangkar bujurSangkar(sisi);
    cout << "Keliling Bujur Sangkar: " << bujurSangkar.keliling() << endl;
    cout << "Luas Bujur Sangkar: " << bujurSangkar.luas() << endl;

    // Input dan penghitungan untuk Persegi Panjang
    double panjang, lebar;
    cout << "Masukkan panjang dan lebar persegi panjang: ";
    cin >> panjang >> lebar;
    PersegiPanjang persegiPanjang(panjang, lebar);
    cout << "Keliling Persegi Panjang: " << persegiPanjang.keliling() << endl;
    cout << "Luas Persegi Panjang: " << persegiPanjang.luas() << endl;

    return 0;
}
