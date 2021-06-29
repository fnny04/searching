#include <iostream>
using namespace std;

int main() {

    cout<<"==== PROGRAM SEARCHING ====="<<endl;

    int n,bil_cari,Data[10];
    int i,ketemu;

    cout<<"Jumlah array yang dimasukan : ";
    cin>>n;
    cout<<endl;
    for(int c=0; c<n; c++)

    {
        cout<<"Elemen data Array ke : ";
        cin>>Data[c];

    }
    i=0;
    cout<<"\n\n Inputkan bilangan yang dicari =";cin>>bil_cari;
    ketemu=0;

    while((i<10)&&(ketemu==0))
    {
        if(Data[i] == bil_cari)
        {
            ketemu=1;
            cout<<"\n Pencarian sequntial"<<bil_cari<<"Ada pada indeks ke -"<<i;
        }
        else i=i+1;
    }
    if(ketemu == 1)
    cout<<"\n Data ada dan tersedia "<<endl;
    else cout << "\n Data tidak ada dan tidak tersedia"<<endl;
}
