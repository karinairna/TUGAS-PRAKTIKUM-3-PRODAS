//--------------------------//
//Nama  : Karina Irna Della
//Prodi : Manajemen Informatika
//Kelas : 2020B
//NIM   : 20051397030
//--------------------------//

#include <iostream>
#include <conio.h> 
using namespace std;
int main()
{
	int x,y,angka;
    char ulang;
    menu:
    cout<<"~~~~~~~~~~~~~~~ Program Bentuk Segitiga ~~~~~~~~~~~~~~~ "; cout<<endl;
    cout<<endl;
    cout<<"Masukkan Angka Yang Diinginkan : "; 
	cin>>angka;
	cout<<endl;
for(x=1;x<=angka;x++)
{
for(y=1;y<=x;y++)
{
cout<<y<<"";
}
cout<<"\n";
}
for(y=1;y<=angka;y++)
{
for(x=1;x<=angka-y;x++)
{
cout<<x<<"";
}
cout<<"\n";;
}
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
cout<<"Ingin mengulang? [Y/T] ";cin>>ulang; cout<<endl;
cout<<endl;
cout<<endl;
	if (ulang == 'Y'||ulang == 'y')
    goto menu;
        else goto Keluar;
        Keluar :
        cout<< "```````Thankyou````````";
getch();
}
