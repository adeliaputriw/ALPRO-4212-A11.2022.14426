/*
    ADELIA PUTRI WIDYASARI
    A11.2022.14426 | A11.4212
    Dian Nuswantoro University
    2023.06.21 Semarang
*/


/*  LATIHAN 5
    Buat structure sepeda dengan member :
    Merk = “Polygon”
    Type = “Sepeda Gunung”
    Tahun = 2013
    Harga = “2.000.000”
    Lakukan akses member menggunakan pointer dalam structure
*/

#include <iostream>
#include <string>
using namespace std;

struct Sepeda {
    string merk;
    string type;
    int tahun;
    string harga;
};

int main() {
    Sepeda sepeda;

    // Mengisi data sepeda menggunakan pointer
    Sepeda* ptrSepeda = &sepeda;
    ptrSepeda->merk = "Polygon";
    ptrSepeda->type = "Sepeda Gunung";
    ptrSepeda->tahun = 2013;
    ptrSepeda->harga = "2.000.000";

    // Mencetak data sepeda menggunakan pointer
    cout << "Merk: " << ptrSepeda->merk << endl;
    cout << "Type: " << ptrSepeda->type << endl;
    cout << "Tahun: " << ptrSepeda->tahun << endl;
    cout << "Harga: " << ptrSepeda->harga << endl;

    return 0;
}
