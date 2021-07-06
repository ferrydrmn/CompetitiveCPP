#include <bits/stdc++.h>
using namespace std;

//Kamus
int n;              //Input awal pengguna
int energi;         //variabel size array, 2n - 1
int sum_energi = 0; //variabel output untuk jumlah energi
int i = 0;          //variabel perulangan
int j = 0;          //variabel pengubahan energi yang bisa dilakukan

int main()
{
    cout << "Masukkan n: ";
    cin >> n;
    if (n >= 2) //jika kurang dari 2, maka energi (size array) akan bernilai nol dan tidak ada yang dapat diproses oleh program
    {
        energi = 2 * n - 1;
        int *arr = new int(energi); //variabel array dinamis
        for (i = 0; i < energi; i++)    //memasukkan nilai energi ke array dinamis
        {
            cout << "Masukkan energi ke-" << i + 1 << ": ";
            cin >> arr[i];
        }
        sort(arr, arr + energi);    //mengurutkan array dari yang terkecil, agar dapat memaksimalkan energi negatif yang diubah
        for (i = 0; i < n; i++)     //pengubahan energi negatif ke positif sejumlah input n, lalu dijumlahkan kumulatifnya
        {
            arr[i] *= -1;
            sum_energi += arr[i];
        }
        for (i = n; i < energi; i++)    //penambahan sisa energi lain
        {
            sum_energi += arr[i];
        }
        cout << "Energi yang dihasilkan " << sum_energi;    //output energi
    }
    else
    {
        cout << "Energi minimal adalah 2.";
    }
}
