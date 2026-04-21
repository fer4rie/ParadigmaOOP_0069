#include <iostream>
using namespace std;

class Barang{
    public:
        string nama;
        int jumlah;
        string kategori;
        string tanggalProduksi;
        void printData(){ 
            cout <<"------Data Barang------"<<endl;
            cout << "Nama             =    "<< nama <<endl;
            cout << "Jumlah           =    "<< jumlah <<endl;
            cout << "Kategori         =    "<< kategori <<endl;
            cout << "Tanggal Produksi =    "<< tanggalProduksi <<endl;
            
            cout << endl;
        }
};
int main(){
    Barang elektronik;

    elektronik.nama = "Handphone";
    elektronik.jumlah = 12;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "21 September 2025";

    Barang nonElektronik;
    
    nonElektronik.nama = "Majalah";
    nonElektronik.jumlah = 8;
    nonElektronik.kategori = "nonElektronik";
    nonElektronik.tanggalProduksi = "20 Juli 2023";

    elektronik.printData();
    nonElektronik.printData();

    return 0;
}