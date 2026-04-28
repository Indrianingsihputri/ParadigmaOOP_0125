#include <iostream>
using namespace std;

class Barang
{
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void printData()
    {
        cout << "-----------------------------" << endl;
        cout << "Nama Barang      : " << nama << endl;
        cout << "Jumlah           : " << jumlah << endl;
        cout << "Kategori         : " << kategori << endl;
        cout << "Tanggal Produksi : " << tanggalProduksi << endl;
        cout << "-----------------------------" << endl;
    }
};

main ()
{
    // Object elektronik
    Barang elektronik;
    elektronik.nama = "Laptop";
    elektronik.jumlah = 10;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "2024-01-15";

    // Object nonElektronik
    Barang nonElektronik;
    nonElektronik.nama = "Kursi";
    nonElektronik.jumlah = 20;
    nonElektronik.kategori = "Non Elektronik";
    nonElektronik.tanggalProduksi = "2023-11-10";

    // Output
    elektronik.printData();
    nonElektronik.printData();

    return 0;
    
}