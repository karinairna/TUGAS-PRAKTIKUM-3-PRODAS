//--------------------------//
//Nama  : Karina Irna Della
//Prodi : Manajemen Informatika
//Kelas : 2020B
//NIM   : 20051397030
//--------------------------//

#include <iostream>
#include <conio.h> 
using namespace std;
 
int main(){
    int a=3,c, jumlah=0, i, n;
    char ulang;
    menu:
    cout<<"^^^^^^^^^^^^^^^ Program Hitung Jumlah Deret Bilangan ^^^^^^^^^^^^^^^"; cout<<endl;
    cout<<"                              3,7,11,15,....                        "; cout<<endl;
    cout<<"--------------------------------------------------------------------"; cout<<endl;
    cout<<"Masukkan Jumlah Sampai Deret Ke-n : ";
    cin>>n; cout<<endl;
    cout<<"Deret ke-"<<n<<" : "; 
    cout<<a<<",";  
    jumlah=jumlah+3; 
    for(i=0; i<n-1; i++){
             c=a+4;
             a=c;
             cout<<c<<",";
             jumlah=jumlah+c;                      
    }
    cout<<endl;
    cout<<"\nJumlah deret ke-"<<n<<" : ";
    cout<<jumlah; 
    cout<<endl;
    cout<<endl;
    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"; cout<<endl;
    cout<<endl;
    cout<<"Ingin Mengulang? [Y/T] ";cin>>ulang; cout<<endl;
    cout<<endl;
    cout<<endl;
	if (ulang == 'Y'||ulang == 'y')
    goto menu; 
        else goto Keluar;
        Keluar :
        cout<<           "      \n ===== TERIMAKASIH =====";
    getch();
     
}
