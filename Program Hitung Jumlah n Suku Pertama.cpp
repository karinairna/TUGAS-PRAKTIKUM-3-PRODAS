//--------------------------//
//Nama  : Karina Irna Della
//Prodi : Manajemen Informatika
//Kelas : 2020B
//NIM   : 20051397030
//--------------------------//

#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
	int b,c,i,jumlah;
    cout<<"       Program Hitung Jumlah n Suku Pertama dari        "; cout<<endl;
    cout<<"------------- Barisan Bilangan Pangkat 3 -------------- "; cout<<endl;
    cout<<endl;
    cout<<"````````````````````````````````````````````````````````"; cout<<endl;
    printf ("Masukkan Batas Pangkat:  "); 
	scanf ("%i",&b); 
	cout<<endl;
	jumlah=jumlah-1;
	for (i=1;i<=b;i++) 
	{
		c=((i*i)*i); 
		printf ("%i ",c);
		jumlah=jumlah+c;	
	}
	cout<<endl;
	cout<<endl;
    cout<<"Jumlah Suku di Atas : ";
    cout<<jumlah; 
    cout<<endl;
    cout<<endl;
    cout<<"````````````````````````````````````````````````````````"; cout<<endl;
    cout<<           "      \n .....TERIMAKASIH..... ";
    return 0;
}
