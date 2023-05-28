/*
    ADELIA PUTRI WIDYASARI
    A11.2022.14426 | A11.4212
    Dian Nuswantoro University
    2023.05.22 Semarang
    Tugas 4 Rekursif
*/

#include <iostream>

using namespace std;

//Penjumlahan Rekursif
int penjumlahanRekursif(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return penjumlahanRekursif(a + 1, b - 1);
    }
}

//Pengurangan Rekursif
int penguranganRekursif(int a2, int b2) {
    if (b2 == 0) {
        return a2;
    } else {
        return penguranganRekursif(a2 - 1, b2 - 1);
    }
}

//Perkalian Rekursif
int perkalianRekursif(int a3, int b3) {
    if (b3 == 0) {
        return 0;
    } else {
        return a3 + perkalianRekursif(a3, b3 - 1);
    }
}

//Pembagian Rekursif
int pembagianRekursif(int a4, int b4) {
    if (a4 < b4) {
        return 0;
    } else {
        return 1 + pembagianRekursif(a4 - b4, b4);
    }
}

//Pangkat Rekursif
double pangkatRekursif(double bilangan, int pangkat) {
    if (pangkat == 0) {
        return 1;
    } else {
        return bilangan * pangkatRekursif(bilangan, pangkat - 1);
    }
}

int main()
{
    cout << "Penjumlahan Rekursif" << endl;
    int bil1, bil2;
    cout << "Masukkan bilangan pertama: ";
    cin >> bil1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bil2;
    int hasil = penjumlahanRekursif(bil1, bil2);
    cout << "Hasil penjumlahan: " << hasil << endl;

    cout << endl;
    cout << "Pengurangan Rekursif" << endl;
    int bil3, bil4;
    cout << "Masukkan bilangan pertama: ";
    cin >> bil3;
    cout << "Masukkan bilangan kedua: ";
    cin >> bil4;
    int hasil2 = penguranganRekursif(bil3, bil4);
    cout << "Hasil pengurangan: " << hasil2 << endl;

    cout << endl;
    cout << "Perkalian Rekursif" << endl;
    int bil5, bil6;
    cout << "Masukkan bilangan pertama: ";
    cin >> bil5;
    cout << "Masukkan bilangan kedua: ";
    cin >> bil6;
    int hasil3 = perkalianRekursif(bil5, bil6);
    cout << "Hasil perkalian: " << hasil3 << endl;

    cout << endl;
    cout << "Pembagian Rekursif" << endl;
    int bil7, bil8;
    cout << "Masukkan bilangan pertama: ";
    cin >> bil7;
    cout << "Masukkan bilangan kedua: ";
    cin >> bil8;
    int hasil4 = pembagianRekursif(bil7, bil8);
    cout << "Hasil pembagian: " << hasil4 << endl;

    cout << endl;
    cout << "Pangkat Rekursif" << endl;
    double bil9;
    int pangkat;
    cout << "Masukkan bilangan: ";
    cin >> bil9;
    cout << "Masukkan pangkat: ";
    cin >> pangkat;
    double hasil5 = pangkatRekursif(bil9, pangkat);
    cout << "Hasil pangkat: " << hasil5 << endl;

    return 0;
}
