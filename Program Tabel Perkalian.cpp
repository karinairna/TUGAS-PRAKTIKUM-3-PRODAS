//--------------------------//
//Nama  : Karina Irna Della
//Prodi : Manajemen Informatika
//Kelas : 2020B
//NIM   : 20051397030
//--------------------------//

#include <iostream>
using namespace std;

int main()
{
int nilaikolom,nilaibaris,c,d;
char ulang;
	
	menu:
	cout<<("********************************************\n");
	cout<<("          Program Tabel Perkalian             ") << endl;
	cout<<("********************************************\n"); cout<<endl;
    printf("Masukan Nilai Untuk Baris (Angka Menurun): ");scanf("%d", &c); cout<<endl;
    printf("Masukan Nilai Untuk Kolom (Angka Mendatar): ");scanf("%d", &d); cout<<endl;
    for(nilaikolom=1;nilaikolom<=c;nilaikolom++){
        for(nilaibaris=1;nilaibaris<=d;nilaibaris++){
            printf("%d\t", nilaibaris*nilaikolom);
        }
        printf("\n");
    }
cout<<endl<<"#############################################" <<endl; cout<<endl;
cout<<"Ingin mengulang? [Y/T] ";cin>>ulang; cout<<endl;
cout<<endl;
cout<<endl;
	if (ulang == 'Y'||ulang == 'y')
    goto menu;
        else goto keluar; 
        keluar:
        cout<< "\          SAMPAI JUMPA<3<3 ";
}
