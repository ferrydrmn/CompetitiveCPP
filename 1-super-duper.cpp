#include <bits/stdc++.h>
using namespace std;

//Kamus
const int n_min = 2; //variabel batas minimal energi adalah 2
int n;
int energi;
int sum_energi = 0; //variabel output untuk jumlah energi
int i = 0;          //variabel perulangan
int j = 0;          //variabel pengubahan energi yang bisa dilakukan

int main()
{
    cout << "Masukkan n: ";
    cin >> n;
    if (n >= n_min)
    {
        energi = 2 * n - 1;
        int *arr = new int(energi); //variabel array dinamis
        for (i = 0; i < energi; i++)
        {
            cout << "Masukkan energi ke-" << i + 1 << ": ";
            cin >> arr[i];
        }
        sort(arr, arr + energi);
        for (i = 0; i < n; i++)
        {
            arr[i] *= -1;
            sum_energi += arr[i];
        }
        for (i = n; i < energi; i++)
        {
            sum_energi += arr[i];
        }
        cout << "Energi yang dihasilkan" << sum_energi;
    }
    else
    {
        cout << "Energi minimal adalah 2.";
    }
}