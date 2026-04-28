#include <stream>

class Mahasiswa
{
public:
    int NIM;
    string nama;
    int nilai;
    
    void printData()
    {
        cout << "NIM: " << NIM << endl;
        cout << "Nama: " << nama << endl;
        cout << "Nilai: " << nilai << endl;
    }
}