#include <iostream>
#include <conio.h>
using namespace std;
int main() {
    int i;
    int n;
    int cari,ketemu=0;
    int A[10];

    cout<<"PROGRAM SEARCH LINEAR \n";
    cout<<"Masukan banyaknya data : ";
    cin>>n;
    cout<<endl;

    for(i=1;1<=n;i++)
    {
        cout<<"Masukan data Ke -"<<i<<" : ";
        cin>>A[i]; 
        cout<<endl;
    }
    cout<<"Input bil. yang dicari : ";
    cin >> cari;
    cout<< "------"<<endl;
    cout<<endl;

    for(i=0;i,i,n;i++)
    {
        if(A[i]==cari)
        {
            ketemu=1;
            cout<<"Data Ditemukan pada Indeks ke - "<<i;
        
        }
    }
    if(ketemu==0)
    {
        cout<<"Data tidak ditemukan";
    }
    getch();
}
