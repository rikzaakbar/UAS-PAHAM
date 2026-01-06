#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
    string nama[10];
    int jenis[10], jumlah=0;
    float berat[10], total[10];
    char lanjut;

    do{
        cout<<"\n=== INPUT DATA LAUNDRY ===\n";
        cout<<"Nama Pelanggan  : "; cin>>nama[jumlah];
        cout<<"Jenis (1.Reg / 2.exp) "; cin>>jenis[jumlah];
        cout<<"Berat (kg) : "; cin>>berat[jumlah];
        
        if(jenis[jumlah]==1) total[jumlah]=berat[jumlah]*5000;
        else total[jumlah]=berat[jumlah]*8000;
    
    jumlah++;
    cout<<"tambah data lagi? (y/n) : ";
cin>>lanjut;
    }while(lanjut=='y'||lanjut=='Y');

cout<<"\n===DAFTAR TRANSAKSI LAUNDRY ===\n";
cout<<left<<setw(15)<<"Nama"
    <<setw(12)<<"layanan"
    <<setw(8)<<"Berat"
<<"Total\n";

for(int i=0;i<jumlah;i++){
    cout<<left<<setw(15)<<nama[i]
        <<setw(12)<<(jenis[i]==1?"Reguler":"express")
        <<setw(8)<<berat[i]
        <<setw(10)<<total[i]<<endl;
    }
    return 0;
}