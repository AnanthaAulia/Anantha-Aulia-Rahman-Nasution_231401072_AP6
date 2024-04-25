#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int i,n,j,p;
    
    p = 1;


    cout << "Masukkan jumlah: ";
    cin >> n;

    for (i=1;i<=n;i++)
    {
        for (j=0;j<i;j++)
        {
            cout << p <<" ";
            p++;
            
        }
        cout << endl;
    }

}   