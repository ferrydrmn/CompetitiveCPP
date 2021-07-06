//Algoritma Urutan Aneh
#include <bits/stdc++.h>
using namespace std;

//Kamus
int inputPanjangBaris; //variabel yang menampung input jumlah angka dari pengguna
int arr[1000];         //array untuk menampung kumpulan angka
int temp;              //variabel untuk menampung sementara angka yang dimasukkan untuk dicek
int i;                 //variabel perulangan
int j;                 //variabel perulangan
bool cekAngka;         //variabel cek angka (harus lebih dari 0 dan kurang dari 100) yang akan dimasukkan ke array

int main()
{
    cout << "Masukkan panjang baris angka: ";
    cin >> inputPanjangBaris;
    if (inputPanjangBaris >= 2 && inputPanjangBaris <= 1000) //input dari pengguna harus di antara 2 dan 1000
    {
        for (i = 0; i < inputPanjangBaris; i++)
        {
            cekAngka = true;
            while (cekAngka) //harus memasukkan angka ke barisan di antara 0 dan 100
            {
                cout << "Masukkan angka ke-" << i + 1 << ": ";
                cin >> temp;
                if (temp >= 0 && temp <= 100)
                {
                    arr[i] = temp;
                    cekAngka = false;
                }
                else
                {
                    cout << "Masukkan angka antara 0 dan 100\n";
                }
            }
        }
        for (i = 0; i < inputPanjangBaris; i++) //sorting menggunakan bubblesort
        {
            for (j = 0; j < inputPanjangBaris - 1 - i; j++)
            {
                if (arr[j] % 10 > arr[j + 1] % 10) //jika sisa bagi lebih kecil
                {
                    arr[j] = arr[j] + arr[j + 1];
                    arr[j + 1] = arr[j] - arr[j + 1];
                    arr[j] = arr[j] - arr[j + 1];
                }
                if ((arr[j] % 10) == (arr[j + 1] % 10)) //jika angka lebih kecil
                {
                    if (arr[j] > arr[j + 1])
                    {
                        arr[j] = arr[j] + arr[j + 1];
                        arr[j + 1] = arr[j] - arr[j + 1];
                        arr[j] = arr[j] - arr[j + 1];
                    }
                }
            }
        }
        for (i = 0; i < inputPanjangBaris; i++)
        {
            cout << "[" << arr[i] << "] ";
        }
    }
    else
    {
        cout << "Input panjang baris angka harus bernilai 2 sampai 1000.";
    }
    return 0;
}
