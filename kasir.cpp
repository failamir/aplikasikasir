#include <iostream>
#include<conio.h>  // File Header untuk getch();
#include<windows.h>

using namespace std;

// Animasi
void gotoxy(int, int);
void Delay(void);

void gotoxy(int x, int y) {
HANDLE hConsoleOutput;
COORD dwCursorPosition;
dwCursorPosition.X = x;
dwCursorPosition.Y = y;
hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}

void Delay(void) {
int i = 0;
while(i < 100000000) {
++i;
}
}
// Script Akhir Animasi

int main()
{
char pilih,harga,p;
double harga1,total,bayar,sisa;
int beli;
bool keluar=false;

// Script Animasi
MessageBox(NULL,”AKSES APLIKASI PENJUALAN”,”Welcome’s”,MB_ICONINFORMATION | MB_OK);

int x = 0, y = 0, max = 40, end = 79;
while(x <= max && !GetAsyncKeyState(VK_ESCAPE)) {
system(“CLS”);
system(“color A”);
gotoxy(x,y);
cout<<“SELAMAT DATANG,     Proses Loading Program,,,”<<endl;
//        cout<<“TUNGGU SEBENTAR YA”<endl;

Delay();
++x;
/* if(x == end) {

gotoxy(x,y);
printf(“SELAMAT DATANG DI APLIKASI SAYA”);
Delay();
x=0;

}*/
}

// Akhir Script Animasi

system(“color A”);
menu:
system(“cls”);
cout << “===========================================================================”<<endl<<endl;
cout << “\t\tAPLIKASI TRANSAKSI PEMBELIAN BARANG TOKO KELONTONG\t\t” << endl<<endl;
cout << “===========================================================================”<<endl<<endl;

cout << “DAFTAR MENU BARANG”<<endl;
cout << “——————“<<endl<<endl;
cout << “(A). Susu Dancow”<<endl;
cout << “(B). Susu Bendera”<<endl;
cout << “(C). Susu SGM “<<endl;
cout << “(x). Exit Program”<<endl<<endl;
cout << “Pilih {A/B/C/x/} = “;cin>>pilih;
switch(pilih)
{
case ‘A’:
system(“cls”);
// system(“color B”);

cout << “DAFTAR HARGA SUSU DANCOW”<<endl;
cout << “************************”<<endl<<endl;

cout << “1. Ukuran Kecil”<<endl;
cout << “2. Ukuran Sedang”<<endl;
cout << “3. Ukuran Besar”<<endl<<endl;
balik:

cout << “Input Jenis Ukuran [1,2,3] = “;cin>>harga;
cout<<endl<<endl;
if(harga==’1′)
{
//   cout <<“Harga Rp. 20.000″<<endl;
cout<<“Jumlah Pembelian = “;cin>>beli;
cout<<endl<<endl;
cout << “\t\t\tTAMPILKAN HASIL BELANJA \t\t” << endl;
cout << “===========================================================================”<<endl<<endl;
harga1=20000;
total=beli*harga1;
cout <<“Harga SUSU\t\t= Rp. “<<harga1<<endl<<endl;
cout <<“Jumlah Yang Dibeli\t= “<<beli<<” Kaleng”<<endl<<endl;
cout <<“————————————- = “<<endl;
cout <<“Total Pembayaran\t= Rp. “<<total<<endl<<endl;
cout <<“Uang Dibayar\t= Rp. “;cin>>bayar;
cout <<endl;
sisa=bayar-total;
cout <<“Uang Dikembalikan\t= Rp. “<<sisa<<endl<<endl;
cout<<endl;
cout <<“Ingin Balik Kemenu atau exit program?”<<endl;
cout <<“[y], Balik Menu”<<endl;
cout <<“[t], exit program”<<endl;
cout <<“Pilih = “;cin>>p;
if(p==’y’)
goto menu;
if(p==’t’)
cout <<“Makasih Mas,,,,,,,”<<endl<<endl;
keluar=true;
}
else if(harga==’2′)
{
cout<<“Jumlah Pembelian = “;cin>>beli;
cout<<endl<<endl;
cout << “\t\t\tTAMPILKAN HASIL BELANJA \t\t” << endl;
cout << “===========================================================================”<<endl<<endl;
harga1=25000;
total=beli*harga1;
cout <<“Harga SUSU\t\t= Rp. “<<harga1<<endl<<endl;
cout <<“Jumlah Yang Dibeli\t= “<<beli<<” Kaleng”<<endl<<endl;
cout <<“————————————- = “<<endl;
cout <<“Total Pembayaran\t= Rp. “<<total<<endl<<endl;
cout <<“Uang Dibayar\t= Rp. “;cin>>bayar;
cout <<endl;
sisa=bayar-total;
cout <<“Uang Dikembalikan\t= Rp. “<<sisa<<endl<<endl;
cout<<endl;
cout <<“Ingin Balik Kemenu atau exit program?”<<endl;
cout <<“[y], Balik Menu”<<endl;
cout <<“[t], exit program”<<endl;
cout <<“Pilih = “;cin>>p;
if(p==’y’)
goto menu;
if(p==’t’)
cout <<“Makasih Mas,,,,,,,”<<endl<<endl;
keluar=true;
}

else if(harga==’3′)
{
cout<<“Jumlah Pembelian = “;cin>>beli;
cout<<endl<<endl;
cout << “\t\t\tTAMPILKAN HASIL BELANJA \t\t” << endl;
cout << “===========================================================================”<<endl<<endl;
harga1=30000;
total=beli*harga1;
cout <<“Harga SUSU\t\t= Rp. “<<harga1<<endl<<endl;
cout <<“Jumlah Yang Dibeli\t= “<<beli<<” Kaleng”<<endl<<endl;
cout <<“————————————- = “<<endl;
cout <<“Total Pembayaran\t= Rp. “<<total<<endl<<endl;
cout <<“Uang Dibayar\t= Rp. “;cin>>bayar;
cout <<endl;
sisa=bayar-total;
cout <<“Uang Dikembalikan\t= Rp. “<<sisa<<endl<<endl;
cout<<endl;
cout <<“Ingin Balik Kemenu atau exit program?”<<endl;
cout <<“[y], Balik Menu”<<endl;
cout <<“[t], exit program”<<endl;
cout <<“Pilih = “;cin>>p;
if(p==’y’)
goto menu;
if(p==’t’)
cout <<“Makasih Mas,,,,,,,”<<endl<<endl;
keluar=true;

}
else
{
cout <<“Salah Pilih”<<endl;
goto balik;
}

break;
case ‘B’:
cout << “Anda Pilih Susu Bendera”<<endl;
cout << “Daftar Harga”<<endl;
cout << “1. Kecil = Rp. 20.000″<<endl;
cout << “2. Sedang = Rp. 25.000″<<endl;
cout << “3. Besar = Rp. 30.000″<<endl;
balek:
cout << “Ketikkan [1,2,3]”<<endl;
cout << “Pilih Harga = “;cin>>harga;
if(harga==’1′)
{
cout <<“Harga Rp. 20.000″<<endl;
cout <<“Ingin Balik Kemenu atau exit program?”<<endl;
cout <<“[y], Balik Menu, [t], exit program”<<endl;
cout <<“Pilih = “;cin>>p;
if(p==’y’)
goto menu;
if(p==’t’)
cout <<“Makasih Mas,,,,,,,”<<endl<<endl;
keluar=true;
}
else if(harga==’2′)
{
cout <<“Harga Rp. 25.000″<<endl;
cout <<“Ingin Balik Kemenu atau exit program?”<<endl;
cout <<“[y], Balik Menu, [t], exit program”<<endl;
cout <<“Pilih = “;cin>>p;
if(p==’y’)
goto menu;
if(p==’t’)
keluar=true;
}

else if(harga==’3′)
{
cout <<“Harga Rp. 30.000″<<endl;
cout <<“Ingin Balik Kemenu atau exit program?”<<endl;
cout <<“[y], Balik Menu, [t], exit program”<<endl;
cout <<“Pilih = “;cin>>p;
if(p==’y’)
goto menu;
if(p==’t’)
keluar=true;

}
else
{
cout <<“Salah Pilih”<<endl;
goto balek;
}
break;
case ‘C’:
cout << “Anda Pilih Susu SGM”<<endl;
cout << “Daftar Harga”<<endl;
cout << “1. Kecil = Rp. 20.000″<<endl;
cout << “2. Sedang = Rp. 25.000″<<endl;
cout << “3. Besar = Rp. 30.000″<<endl;
baliek:
cout << “Ketikkan [1,2,3]”<<endl;
cout << “Pilih Harga = “;cin>>harga;
if(harga==’1′)
{
cout <<“Harga Rp. 20.000″<<endl;
cout <<“Ingin Balik Kemenu atau exit program?”<<endl;
cout <<“[y], Balik Menu, [t], exit program”<<endl;
cout <<“Pilih = “;cin>>p;
if(p==’y’)
goto menu;
if(p==’t’)
cout <<“Makasih Mas,,,,,,,”<<endl<<endl;
keluar=true;
}
else if(harga==’2′)
{
cout <<“Harga Rp. 25.000″<<endl;
cout <<“Ingin Balik Kemenu atau exit program?”<<endl;
cout <<“[y], Balik Menu, [t], exit program”<<endl;
cout <<“Pilih = “;cin>>p;
if(p==’y’)
goto menu;
if(p==’t’)
keluar=true;
}

else if(harga==’3′)
{
cout <<“Harga Rp. 30.000″<<endl;
cout <<“Ingin Balik Kemenu atau exit program?”<<endl;
cout <<“[y], Balik Menu, [t], exit program”<<endl;
cout <<“Pilih = “;cin>>p;
if(p==’y’)
goto menu;
if(p==’t’)
keluar=true;

}
else
{
cout <<“Salah Pilih”<<endl;
goto baliek;
}
break;
case ‘x’:
keluar=true;
MessageBox(NULL,”Thank Mas atas Kunjungan Nya”,”Exit’s”,MB_ICONINFORMATION | MB_OK);
break;
default:
cout <<“Salah Input Mas,,,, Ulang ya!”<<span style="display: inline-block; width: 0px; overflow: hidden; line-height: 0;" data-mce-type="bookmark" class="mce_SELRES_start"></span><endl;
getch();
goto menu;
}
system(“pause”);
return 0;
}