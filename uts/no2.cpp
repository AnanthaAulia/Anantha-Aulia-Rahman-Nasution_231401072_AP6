#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int angka,jumlah;
    cout << "Masukkan angka: ";
    cin >> angka;


    while (angka!= 0)
    {
        jumlah += angka % 10;
        angka/=10;
    }
    
    cout <<"jumlah: "<<jumlah<<endl;
    return 0;
}