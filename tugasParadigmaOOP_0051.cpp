#include <iostream>
using namespace std;

class Barang
{
public:
    string nama;
    int jumlah;
    string kategori;
    string TanggalProduksi;

    void printdata()
    {
        cout << "Nama Barang :" << nama << endl;
        cout << "Jumlah :" << jumlah << endl;
        cout << "Kategori :" << kategori << endl;
        cout << "Tanggal Produksi :" << TanggalProduksi << endl;
    }
};

int main()
{
    Barang elektronik;
    elektronik.nama = "Laptop";
    elektronik.jumlah = 10;
    elektronik.kategori = "Elektronik";
    elektronik.TanggalProduksi = "2023.05";
    elektronik.printdata();
    cout << endl;

    Barang Non;
    Non.nama = "Buku";
    Non.jumlah = 20;
    Non.kategori = "Non Elektronik";
    Non.TanggalProduksi = "2023.06";
    Non.printdata();
}