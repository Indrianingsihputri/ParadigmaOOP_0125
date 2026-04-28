#include <iostream>
using namespace std;

class Mahasiswa
{
public:
    int NIM;
    string nama;
    float nilai;

    void printData()
    {
        cout << "NIM: " << NIM << endl;
        cout << "Nama: " << nama << endl;
        cout << "Nilai: " << nilai << endl;
    }
};

int main()
{
    Mahasiswa Mhs;

    Mhs.NIM = 2024;
    Mhs.nama = "Sule";
    Mhs.nilai = 75.5;

    Mhs.printData();
}