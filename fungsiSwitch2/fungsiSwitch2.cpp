#include <iostream>
using namespace std;

int bilangan1, bilangan2;

int penjumlahan(int a, int b)
{
    return a + b;
}

int pengurangan(int a, int b)
{
    return a - b;
}

int perkalian(int a, int b)
{
    return a * b;
}

float pembagian(float a, float b)
{
    return a / b;
}

void inputData()
{
    cout << "\nMasukkan bilangan pertama: "; //\n untuk buat line baru biar ga terlalu mepet
    cin >> bilangan1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bilangan2;
}

int main()
{
    int pilihan;
    do
    {
        system("CLS");
        cout << "Menu kalkulator sederhana" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Keluar" << endl;

    }
}