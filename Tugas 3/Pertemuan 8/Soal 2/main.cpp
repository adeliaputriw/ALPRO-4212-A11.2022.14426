/*
    ADELIA PUTRI WIDYASARI
    A11.2022.14426 | A11.4212
    Dian Nuswantoro University
    2023.05.17 Semarang
*/

/* SOAL 2
Buatlah program yang menerapkan 2 metode pengurutan (sorting) yang Anda ketahui
beserta contoh pemanggilannya di program main body (selain Bogosort). Pengurutan
dilakukan secara descending (besar ke kecil). Contoh: A[]={5,4,3,2,2,1,1}
*/

#include <iostream>

using namespace std;

void SelectionSort(int arr[], int n)
{
    for (int i=0; i<n-1; i++)
    {
     int maxIndex = i;
     for (int j= i+1; j<n; j++)
     {
        if (arr[j]>arr[maxIndex])
        {
            maxIndex = j;
        }
     }
     int temp = arr[i];
     arr[i] = arr[maxIndex];
     arr[maxIndex] = temp;
    }
}

void InsertionSort(int arr[], int m)
{
    for (int i = 1; i<m; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] <key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main()
{
    cout <<"Selection Sort" << endl;

    int numbers[] = {1,2,3,4,5,6};
    int n = sizeof(numbers)/ sizeof(numbers[0]);

    cout << "Sebelum Diurutkan : " << endl;
    for (int i= 0; i<n; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    SelectionSort(numbers, n);
    cout << "Setelah Diurutkan : " << endl;
    for (int i= 0; i<n; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
    cout << endl;

    cout << "Insertion Sort" << endl;

    int number[] = {3,5,4,1,5,7,9};
    int m = sizeof(number)/ sizeof(number[0]);

    cout << "Sebelum Diurutkan : " << endl;
    for (int i= 0; i<m; i++)
    {
        cout << number[i] << " ";
    }
    cout << endl;

    InsertionSort(number, m);
    cout << "Setelah Diurutkan : " << endl;
    for (int i= 0; i<m; i++)
    {
        cout << number[i] << " ";
    }
    cout <<endl;

    return 0;
}
