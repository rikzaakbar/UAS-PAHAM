#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string nama[50];
    int pilih[50], j=0, A=0, B=0, C=0;
    char l;

    do{
        cout<<"\nNama Pemilih Ketua: "; cin>>nama[j];
        cout<<"1.A  2.B  3.C\nPilih: "; cin>>pilih[j];

        if(pilih[j]==1) A++;
        else if(pilih[j]==2) B++;
        else if(pilih[j]==3) C++;

        j++; cout<<"Tambah lagi? (y/n): "; cin>>l;
    }while(l=='y'||l=='Y');

    cout<<"\nDAFTAR PEMILIH\n";
    cout<<left<<setw(15)<<"Nama"<<"Pilihan\n";
    for(int i=0;i<j;i++)
        cout<<left<<setw(15)<<nama[i]
            <<(pilih[i]==1?"A":pilih[i]==2?"B":"C")<<endl;

    cout<<"\nHASIL\nA:"<<A<<"  B:"<<B<<"  C:"<<C<<endl;

    cout<<"Pemenang: ";
    if(A>B && A>C) cout<<"Kandidat A";
    else if(B>A && B>C) cout<<"Kandidat B";
    else if(C>A && C>B) cout<<"Kandidat C";
    else cout<<"Seri";

    return 0;
}