//Algoritma Lagu Anak Ayam
#include <bits/stdc++.h>
using namespace std;

//Kamus
int inputJumlahAyam; //variabel input jumlah anak ayam oleh pengguna

//Fungsi dan Prosedur
void printLagu(int jumlahAyam)
{
    if (jumlahAyam > 0) //jika jumlahAyam <= 0 maka rekursi akan berhenti
    {
        if (jumlahAyam == 1) //jika jumlahAyam tinggal satu maka akan memberikan output khusus
        {
            cout << "Anak ayam turun " << jumlahAyam << " mati satu tinggal induknya\n";
        }
        else
        {
            cout << "Anak ayam turun " << jumlahAyam << " mati satu tinggal " << jumlahAyam - 1 << "\n";
            printLagu(jumlahAyam - 1);
        }
    }
}

int main()
{
    cout << "Masukkan jumlah anak ayam: ";
    cin >> inputJumlahAyam;
    if (inputJumlahAyam > 0) //input oleh pengguna harus lebih dari nol
    {
        cout << "Anak ayam turun " << inputJumlahAyam << "\n";
        printLagu(inputJumlahAyam); //menjalankan algoritma rekursi
    }
    else //jika input oleh pengguna tidak lebih dari nol
    {
        cout << "Input jumlah anak ayam minimal adalah 1.\n";
    }
    return 0;
}
