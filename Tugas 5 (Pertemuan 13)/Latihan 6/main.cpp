/*
    ADELIA PUTRI WIDYASARI
    A11.2022.14426 | A11.4212
    Dian Nuswantoro University
    2023.06.21 Semarang
*/

/*  LATIHAN 6
    Buatlah contoh implementasi Enum dari hal yang ada di
    sekitar anda, misalnya cuaca, gear kendaraan, nilai, dsb.
*/


#include <iostream>
using namespace std;

enum Cuaca {
    Cerah,
    Mendung,
    Hujan,
    Berawan,
    Badai
};

int main() {
    Cuaca kondisiCuaca = Mendung;

    switch (kondisiCuaca) {
        case Cerah:
            cout << "Cuaca saat ini cerah." << endl;
            break;
        case Mendung:
            cout << "Cuaca saat ini mendung." << endl;
            break;
        case Hujan:
            cout << "Cuaca saat ini hujan." << endl;
            break;
        case Berawan:
            cout << "Cuaca saat ini berawan." << endl;
            break;
        case Badai:
            cout << "Cuaca saat ini badai." << endl;
            break;
        default:
            cout << "Tidak diketahui kondisi cuaca saat ini." << endl;
    }

    return 0;
}
