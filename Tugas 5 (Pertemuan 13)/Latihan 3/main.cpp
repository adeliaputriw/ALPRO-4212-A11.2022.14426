/*
    ADELIA PUTRI WIDYASARI
    A11.2022.14426 | A11.4212
    Dian Nuswantoro University
    2023.06.21 Semarang
*/


/*  LATIHAN 3
    Hitung fungsi berikut menggunakan structure dengan member:
    Luas Persegi Panjang = panjang x lebar
    Luas Lingkaran = 22/7 * r * r
    Volume Kerucut = 1/3 * phi * r2 * t
    Volume Bola = 4/3 * phi * r3
    Gunakan typedef dalam deklarasi variable
*/


#include <iostream>
using namespace std;

typedef struct {
    float panjang;
    float lebar;
} PersegiPanjang;

typedef struct {
    float radius;
} Lingkaran;

typedef struct {
    float radius;
    float tinggi;
} Kerucut;

typedef struct {
    float radius;
} Bola;

float hitungLuasPersegiPanjang(PersegiPanjang persegiPanjang) {
    return persegiPanjang.panjang * persegiPanjang.lebar;
}

float hitungLuasLingkaran(Lingkaran lingkaran) {
    return 22.0 / 7.0 * lingkaran.radius * lingkaran.radius;
}

float hitungVolumeKerucut(Kerucut kerucut) {
    return 1.0 / 3.0 * 3.1415 * kerucut.radius * kerucut.radius * kerucut.tinggi;
}

float hitungVolumeBola(Bola bola) {
    return 4.0 / 3.0 * 3.1415 * bola.radius * bola.radius * bola.radius;
}

int main() {
    PersegiPanjang persegiPanjang;
    Lingkaran lingkaran;
    Kerucut kerucut;
    Bola bola;

    // Input untuk persegi panjang
    cout << "Masukkan panjang persegi panjang: ";
    cin >> persegiPanjang.panjang;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> persegiPanjang.lebar;

    // Input untuk lingkaran
    cout << "Masukkan radius lingkaran: ";
    cin >> lingkaran.radius;

    // Input untuk kerucut
    cout << "Masukkan radius kerucut: ";
    cin >> kerucut.radius;
    cout << "Masukkan tinggi kerucut: ";
    cin >> kerucut.tinggi;

    // Input untuk bola
    cout << "Masukkan radius bola: ";
    cin >> bola.radius;

    // Luas persegi panjang
    cout << "Luas Persegi Panjang: " << hitungLuasPersegiPanjang(persegiPanjang) << endl;

    // Luas lingkaran
    cout << "Luas Lingkaran: " << hitungLuasLingkaran(lingkaran) << endl;

    // Volume kerucut
    cout << "Volume Kerucut: " << hitungVolumeKerucut(kerucut) << endl;

    // Volume bola
    cout << "Volume Bola: " << hitungVolumeBola(bola) << endl;

    return 0;
}
