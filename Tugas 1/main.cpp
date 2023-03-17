/*
    ADELIA PUTRI WIDYASARI
    A11.2022.14426
    A11.4212 Algoritma dan Pemrograman
    TUGAS 1
*/

#include <iostream>

using namespace std;

//Penjumlahan
int tambah(int p, int q){
    int hasilTambah;
    hasilTambah = p+q;
    return hasilTambah;
    }

//Pengurangan
int kurang(int r, int s){
    int hasilKurang;
    hasilKurang = r-s;
    return hasilKurang;
    }

//Total Array
int hitungTotal(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

//Rata-rata Array
float hitungRataRata(int arr[], int n) {
   int sum = 0;
   for (int i = 0; i < n; i++) {
      sum += arr[i];
   }
   float avg = static_cast<float>(sum)/n;
   return avg;
}


int main()
{
    cout << "############################################################" << endl;
    cout << endl;

    int p, q;
    cout << "Input bilangan pertama : ";
    cin >> p;
    cout << "Input bilangan kedua : ";
    cin >> q;
    int hasilTambah = tambah(p,q);
    cout << "Hasil penjumlahan = " << hasilTambah << endl;

    cout << endl;
    cout << "############################################################" << endl;
    cout << endl;

    int r, s;
    cout << "Input bilangan pertama : ";
    cin >> r;
    cout << "Input bilangan kedua : ";
    cin >> s;
    int hasilKurang = kurang(r,s);
    cout << "Hasil pengurangan = " << hasilKurang << endl;

    cout << endl;
    cout << "############################################################" << endl;
    cout << endl;

    int n;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout << "Masukkan elemen ke-" << i+1 << ": ";
        cin >> arr[i];
    }
    int sum = hitungTotal(arr, n);
    cout << "Jumlah nilai total dari elemen dalam array adalah : " << sum << endl;
    float rataRata = hitungRataRata(arr, n);
    cout << "Rata-rata dari elemen dalam array adalah: " << rataRata << endl;


    cout << endl;
    cout << "############################################################" << endl;

    return 0;
}
