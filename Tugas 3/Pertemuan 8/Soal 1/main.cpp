/*
    ADELIA PUTRI WIDYASARI
    A11.2022.14426 | A11.4212
    Dian Nuswantoro University
    2023.05.17 Semarang
*/

/* SOAL 1
Buatlah sebuah program yang mengimplementasikan sebuah prosedur yang dapat
mencetak nilai genap terkecil di dalam suatu deret bilangan bulat dengan jumlah
elemen dinamis, dan juga mencetak indexnya. Contoh: A[]={6,7,4,3,2}, maka akan mencetak
nilai 2 karena 2 adalah angka genap terkecil, serta akan mencetak di layar> index:4.
Buat fungsi untuk menguji apakah suatu bilangan adalah ganjil, fungsi ini nanti dapat
Anda panggil di fungsi utama.
*/

#include <iostream>

using namespace std;

void genapterkecil(int arr[], int n);
int ganjil(int x);

int main()
{
    int arr[]={7,8,5,7,8,2,10,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    genapterkecil (arr, n);
    return 0;
}
int ganjil(int x){
    return (x%2==1);
}

void genapterkecil(int arr[], int n){
int genapterkecil = 9999999999999;
int index = -1;

for (int i=0; i<n; i++){
    if (arr[i]%2==0 && arr[i]<genapterkecil)
    {
        genapterkecil = arr[i];
        index = i;
    }
}
    if (genapterkecil==99999999999999){
        cout << " tidak ada bilangan genap";
    }
    else{
        cout << "Bilangan genap terkecil adalah " <<
        genapterkecil << " dan terdapat pada index ke-"<< index<< endl;
    }
}
