/*
//Hello World
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	cout<<"Hello World"<<endl;
	return 0;
}
*/

/*=============================================================================*/

/*
//Belajar variabel integer
#include <iostream>
using namespace std;

int main() {
	
	int a = 5; 	//ini proses inisialisasi
				//ini tipe data int (integer) atau bilangan bulat
	cout<< a <<endl;
				
	int b;		//ini proses deklarasi
	cout<< "Masukan nilai : ";
	cin >> b;	//cin adalah console input
	cout<< "Nilai yang anda masukan adalah : ";
	cout<< b <<endl;
	
	return 0;
}
*/

/*=============================================================================*/

/*
//Belajar tipe data
#include <iostream>
#include <limits>
using namespace std;

int main() {
	
	// bilangan bulat
	int   a = 5; // 32 Bit
	long  b = 6; // 64 Bit? ternyata 32 Bit?
	short c = 7; // 16 Bit
	
	cout<< a <<endl;
	cout<< sizeof(a) << " byte" <<endl;
	cout<< numeric_limits<int>::max() <<endl; //=  2147483647 (unsigned,letakkan di <..int>)
	cout<< numeric_limits<int>::min() <<endl; //= -2147483648
	
	cout<< "" <<endl;
	
	cout<< b <<endl;
	cout<< sizeof(b) << " byte" <<endl;
	cout<< numeric_limits<long>::max() <<endl; //=  2147483647
	cout<< numeric_limits<long>::min() <<endl; //= -2147483648
	
	cout<< "" <<endl;
		
	cout<< c <<endl;
	cout<< sizeof(b) << " byte" <<endl;
	cout<< numeric_limits<short>::max() <<endl; //=  32767
	cout<< numeric_limits<short>::min() <<endl; //= -32769

	///unsigned berfungsi untuk menghilangkan + atau -
	//Maka dari itu, jika perhitungan kita tidak lebih dari
	//32767 gunakanlah short saja. Agar lebih hemat memori
	
	// bilangan decimal
	float  d = 1.0;
	double e = 2.5;
	
	// character
	char f = 'a'; // 1 Bit
	
	// boolean
	bool g = true; // true atau false
	
	return 0;
}
*/

/*=============================================================================*/

/*
//Belajar aritmatika
#include <iostream>
using namespace std;

int main() {
	
	int a = 6;
	int b = 4; //float
	int hasil; //float
	
	// operator +, -, *, /, %
	
	// penjumlahan
	hasil = a + b;
	cout<< a << "+" << b << "=" << hasil << endl;
	
	// pengurangan
	hasil = a - b;
	cout<< a << "-" << b << "=" << hasil << endl;
	
	// perkalian
	hasil = a * b;
	cout<< a << "x" << b << "=" << hasil << endl;
	
	// pembagian
	hasil = a / b;
	cout<< a << "/" << b << "=" << hasil << endl; // jika ingin hasilnya lebih akurat, maka salah satu variabel harus bertipe data float, dan tipe data hasil diganti float juga.
	
	// modulus
	hasil = a % b;
	cout<< a << "%" << b << "=" << hasil << endl;
	
	// urutan eksekusi
	hasil = a + b * a;
	cout<< a << "+" << b << "*" << a << "=" << hasil << endl;
	
	return 0;
}
*/

/*=============================================================================*/

/*
//Belajar komparasi atau relasi untuk boolean
#include <iostream>
using namespace std;

int main() {
	
	int a = 3; // = adalah operator assignment. berfungsi untuk memasukkan nilai 2 ke variabel a.
	int b = 2;
	
	bool hasil1, hasil2, hasil3, hasil4, hasil5, hasil6;
	
	// komparasi, relation expression (membandingkan antara dua buah nilai)
	
	// sebanding (==)
	hasil1 = (a == b);
	// tidak sebanding (!=)
	hasil2 = (a != b);
	
	// kurang dari
	hasil3 = (a < b);
	// lebih dari
	hasil4 = (a > b);
	
	// kurang dari sama dengan
	hasil5 = (a <= b);
	// lebih dari sama dengan
	hasil6 = (a >= b);	
	
	cout<< hasil1 <<endl;
	cout<< hasil2 <<endl;
	cout<< hasil3 <<endl;
	cout<< hasil4 <<endl;
	cout<< hasil5 <<endl;
	cout<< hasil6 <<endl;
	
	return 0;
}
*/

/*=============================================================================*/

/*
//Belajar operator logika (and, or, dan not)
#include <iostream>
using namespace std;

int main() {
	
	int a = 3;
	int b = 2;
	bool hasil;
	
	// not
	cout<< "untuk not \n";
	cout<< ( !(a == 3) )<<endl; 
	cout<< ( !(a==3) and (b==2) )<<endl; // true dan true
	cout<< ( !(a==3) or (b==2) )<<"\n"<<endl; // true dan true
	
	// and (kedua nilai benar untuk menghasilkan true)
	cout<< "untuk and \n";
	cout<< ( (a==3) and (b==2) )<<endl; // true dan true
	cout<< ( (a==4) and (b==2) )<<endl; // false dan true
	cout<< ( (a==3) && (b==3) )<<endl; // true dan false
	cout<< ( (a==4) && (b==3) )<<"\n"<<endl; // false dan false
	
	// or (salah satu nilai true maka hasil true)
	cout<< "untuk or \n";
	cout<< ( (a==3) or (b==2) )<<endl; // true dan true
	cout<< ( (a==4) or (b==2) )<<endl; // false dan true
	cout<< ( (a==3) || (b==3) )<<endl; // true dan false
	cout<< ( (a==4) || (b==3) )<<endl; // false dan false
	
	return 0;
}
*/

/*=============================================================================*/

/*
//Belajar if statement
#include <iostream>
using namespace std;

int main() {
	
	int a;
	
	cout<< "masukkan angka = ";
	cin>> a;
	
	cout<< "angka yang anda masukkan adalah "<< a <<endl;
	
	//kondisi dalam bentuk boolean
	if (a > 5)
	{
		cout<< "angka yang anda masukkan bernilai lebih dari 5"<<endl;
	}

	return 0;
}
*/

/*=============================================================================*/

/*
//Belajar if else
#include <iostream>
using namespace std;

int main() {
	
	int umur;
	
	cout<< "masukkan umur = ";
	cin>> umur;
	
	//kondisi dalam bentuk boolean
	if (umur <= 16) {
		cout<< "anda masih anak-anak"<<endl;
	}
	else if (umur <= 20){
		cout<< "anda remaja"<<endl;
	}
	else if (umur <= 40){
		cout<< "anda dewasa"<<endl;
	}
	else if (umur <= 100){
		cout<< "anda sudah tua"<<endl;
	}
	else {
		cout<< "kenapa anda masih hidup?"<<endl;
	}
	// if di dalam if disebut dengan masting if (kalo gak salah denger)

	return 0;
}
*/

/*=============================================================================*/

/*
//Belajar if else
#include <iostream>
using namespace std;

int main() {

	int a;
	cout<<"masukkan nilai = ";
	cin>> a;
	
	switch(a) {
		case 1:
			cout<<"a = 1"<<endl;
			break;
		case 2:
			cout<<"a = 2"<<endl;
			break;
		case 3:
			cout<<"a = 3"<<endl;
			break;
		case 4:
			cout<<"a = 4"<<endl;
			break;
		case 5:
			cout<<"a = 5"<<endl;
			break;
		default:
			cout<<"default"<<endl;
	}
	
	// kalo semua dibreak-break, kenapa gak pake if else aja?
	// jika kalian butuhnya nilai integer 1,2,3? pake switch case
	// kalo boolean pake if else, bisa juga, terserah kalian
	// ini adalah tools, terserah kalian
	
	cout<<"akhir dari program"<<endl;
	return 0;
}
*/

/*=============================================================================*/

/*
//Belajar membuat kalkulator sederhana
#include <iostream>
using namespace std;

int main() {
	
	float a,b,hasil;
	char aritmatika;
	
	cout<<"Selamat datang di program kalkulator sederhana \n\n";
	
	// input dari user
	cout<<"Masukkan nilai pertama : ";
	cin>>a;
	cout<<"Pilih operator +, -, *, / : ";
	cin>>aritmatika;
	cout<<"Masukkan nilai kedua : ";
	cin>>b;
	
	cout<<"\n";
	cout<<"Hasil perhitungan \n";
	
	if (aritmatika == '+') {
		hasil = a + b;
			cout<< a <<" "<< aritmatika <<" "<< b <<" "<< "=" <<" "<< hasil;
	} else if (aritmatika == '-') {
		hasil = a - b;
			cout<< a <<" "<< aritmatika <<" "<< b <<" "<< "=" <<" "<< hasil;
	} else if (aritmatika == '*') {
		hasil = a * b;
			cout<< a <<" "<< aritmatika <<" "<< b <<" "<< "=" <<" "<< hasil;
	} else if (aritmatika == '/') {
		hasil = a / b;
			cout<< a <<" "<< aritmatika <<" "<< b <<" "<< "=" <<" "<< hasil;
	} else {
		cout<<"Anda salah input!";
	}
	
	return 0;
}
*/

/*=============================================================================*/

/*
//Belajar operator assignment (=)
#include <iostream>
using namespace std;

int main() {
	
	// assignment
	int a = 10;
	
	cout<<"Nilai awal dari a adlah : "<< a <<endl;
	
	// assignment operator
	// variabel = variabel, operator, ekspresi
	//    a     =    a         -         3
	// variabel, operator = ekspresi
	//    a          +=        3 
	
	a+=3;
	cout<<"ditambah 3 menjadi "<< a <<endl;
	
	a-=3;
	cout<<"dikurangi 3 menjadi "<< a <<endl;

	a/=3;
	cout<<"dibagi 3 menjadi "<< a <<endl;
	
	a*=3;
	cout<<"dikali 3 menjadi "<< a <<endl;
	
	a%=3;
	cout<<"dimodulus 3 menjadi "<< a <<endl;
	
	return 0;
}
*/

/*=============================================================================*/

/*
//Belajar increment dan decrement
#include <iostream>
using namespace std;

int main() {

	// increment dan decrement (increment itu dibagi menjadi dua, decrement pun sama dibagi menjadi dua)
	// increment = preincrement dan postincrement (preincrement itu sebelum, dan postincrement itu sesudah)
	// decrement = predecrement dan postdecrement (predecrement itu sebelum, dan postdecrement itu sesudah)
	
	int a = 5;
	int b = 5;
	int c = 5;
	int d = 5;
	
	// jadi gini, kalo kalian mau make preincrement atau postincrement sebenernya gak ada bedanya
	// cuman kalo dia berada di skop yang.. gimana ya? dia ada di dalem sebuah fungsi ekspresi yang khusus, dia akan dieksekusi dulu atau diprint dulu
	
	// incrementnya seperti apa?  misalkan gini
	
	cout<< a <<endl;
	
	cout<< ++a <<endl; // ini adalah preincrement, ini sama saja dengan a = a + 1;
					   // kenapa disebut preincrement? karna ++ berada sebelum a
					   // kenapa hasilnya 6? karena ++a, (++) dia tambahkan dulu. Lalu baru (a) diprint
	
	cout<< a <<endl<<endl;
	
	// ----------------------------
	
	cout<< b <<endl;
	
	cout<< b++ <<endl; // ini adalah postincrement, ini sama saja dengan b = b + 1;
		 			   // kenapa disebut postincrement? karna ++ berada sesudah b
		 			   // kenapa hasilnya 5? karena b++, (b) dia print dulu. Lalu baru (++) ditambahkan
	
	cout<< b <<endl;
	
	// jadi konsepnya adalah, kita ingin menambahkan data dengan peningkatannya adalah 1 (satu)
	
	
	cout<<" "<<endl;// ******************************************************************************************************************
	
	
	// decrementnya seperti apa?  misalkan gini
	
	cout<< c <<endl;
	
	cout<< --c <<endl; // ini adalah predecrement, ini sama saja dengan c = c - 1;
					   // kenapa disebut predecrement? karna -- berada sebelum c
					   // kenapa hasilnya 4? karena --c, (--) dia kurangkan dulu. Lalu baru (c) diprint
	
	cout<< c <<endl<<endl;
	
	// ----------------------------
	
	cout<< d <<endl;
	
	cout<< d-- <<endl; // ini adalah postdecrement, ini sama saja dengan d = d - 1;
		 			   // kenapa disebut postdecrement? karna -- berada sesudah d
		 			   // kenapa hasilnya 5? karena d--, (d) dia print dulu. Lalu baru (--) dikurangkan
	
	cout<< d <<endl;
	
	// jadi konsepnya adalah, kita ingin mengurangi data dengan penurunannya adalah 1 (satu)
	
	return 0;
}
*/

/*=============================================================================*/

/*
//Belajar while loop (syarat dulu baru aksi)
#include <iostream>
using namespace std;

int main() {
	
	int a = 5;
	
	while(a<=10) { 			// ini syarat
	
		cout<<"hore";		// ini aksi
		cout<< a <<endl;	// ini aksi
		a += 1;				// ini aksi
		
	}
	
	cout<<"selesai"<<endl;
	
	return 0;
}
*/

/*=============================================================================*/

/*
//Belajar do while loop (aksi dulu baru syarat)
#include <iostream>
using namespace std;

int main() {
	
	int a = 1;
	
	do{
		
		cout<<"hore";		//ini aksi
		cout<< a << endl;	//ini aksi
		a++;				//ini aksi
		
	}while(a <= 10);		//ini syarat
	
	cout<<"Selesai"<<endl;
	
	return 0;
}
*/

/*=============================================================================*/

/*
//Belajar for while loop
#include <iostream>
using namespace std;

int main() {
	
	int i;
	
	cout<<"Loop 1 \n";
	
	for(i=1; i <= 10; i++) {
		
		cout<< i <<endl;
	}
	
	cout<<"\nLoop 2 \n";
	
	for(i=1; i <= 10; i += 2) {
		
		cout<< i <<endl;
	}
	
	cout<<"\nLoop 3 \n";
	
	for(i=-1; i >= -10; i--) { 
		
		cout<< i <<endl;
	}
	
	cout<<"\nLoop 4 \n";
	
	int total = 0;
	
	for(i=1; i <= 10; i++, total += i) { 
		
		cout<< i <<"||"<< total <<endl;
	}
	
	cout<<"\nakhir dari program";
	
	return 0;
}
*/

/*=============================================================================*/

/*
//Belajar break dan continue
#include <iostream>
using namespace std;

int main() {
	
	int i = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	
	for (i; i <= 10; i++) {
		
		if(i==5) {
			//break;		// langsung keluar dari perulangan
			continue;		// 5 di skip atau diloncatin
		}
		
		cout<< i <<endl;
	}
	
	cout<<"selesai\n"<<endl;
	
	while (b <= 10) {
		b++;
		if(b==5) {
			//break;		// langsung keluar dari perulangan
			continue;		// 5 di skip atau diloncatin
		}
		
		cout<< b <<endl;
		//b++;
	}
	
	cout<<"selesai\n"<<endl;
	
	do{
		if(c==5) {
			break;			// langsung keluar dari perulangan
			//continue;		// 5 di skip atau diloncatin
		}
		
		cout<< c <<endl;
		c++;
		
	}while (c <= 10);		
	
	cout<<"Selesai\n"<<endl;
	
	do{
		d++;
		if(d==5) {
			//break;		// langsung keluar dari perulangan
			continue;		// 5 di skip atau diloncatin
		}
		
		cout<< d <<endl;
		
	}while (d <= 10);	
	
	cout<<"Selesai\n"<<endl;	
	
	return 0;
}
*/

/*=============================================================================*/

/*
//Belajar deret fibonacci
#include <iostream>
using namespace std;

int main() {
	
	// f_n = f_n1 + f_n2
	
	int i, n, f_n, f_n1, f_n2;
	
	cout<< "Program Deret Fibonacci\n";
	cout<< "Masukkan nilai n : ";
	cin>> n;
	
	f_n1 = 1;
	f_n2 = 1;
	
	cout<< f_n1 <<" ";
	cout<< f_n2 <<" ";
	
	for(i=2; i<n; i++) {

		f_n = f_n1 + f_n2;
		f_n2 = f_n1;
		f_n1 = f_n;
		
		cout<< f_n <<" ";
	}
	
	cout<< "\n";
	
	return 0;
}
*/

/*=============================================================================*/

/*
//Belajar membuat segitiga (siku-siku dan sama kaki)
#include <iostream>
using namespace std;

int main() {
	
	int n, i, j, k;
	
	cout<< "Masukkan panjang pola : ";
	cin>> n; cout<<endl;
	cout<< "Pola 1\n";					
	
	for(i=1; i<=n; i++) {
		
		for(j=1; j<=i; j++) {
			cout<<"*";
		}
		
		cout<<endl;
	}
	
	cout<<endl;
	
	cout<< "Pola 2\n";
	
	for(i=1; i<=n; i++) {
		
		for(j=n; j>=i; j--) {
			cout<<"*";
		}
		
		cout<<endl;
	}
	
	cout<<endl;
	
	cout<< "Pola 3\n";
	
	for(i=1; i<=n; i++) {
		
		for(j=1; j<i; j++) {
			cout<<" ";
		}
		
		for(k=n; k>=i; k--) {
			cout<<"*";
		}
		
		cout<<endl;
	}
	
	cout<<endl;
	
	cout<< "Pola 4\n";
	
	for(i=1; i<=n; i++) {
		
		for(j=n; j>i; j--) {
			cout<<" ";
		}
		
		for(k=1; k<=i; k++) {
			cout<<"*";
		}
		
		cout<<endl;
	}
	
	cout<<endl;
	
	cout<< "Pola 5\n";
	
	for(i=1; i<=n; i++) {
		
		for(j=n; j>i; j--) {
			cout<<" ";
		}
		
		for(k=1; k<=(2*i-1); k++) {
			cout<<"*";
		}
		
		cout<<endl;
	}
	
	cout<<endl;
	
	cout<< "Pola 6\n";
	
	for(i=1; i<=n; i++) {
		
		for(j=1; j<i; j++) {
			cout<<" ";
		}
		
		for(k=n; k>=(2*i-5); k--) {   // atau (2*i-n)
			cout<<"*";
		}
		
		cout<<endl;
	}
	
	cout<<endl;
		
	cout<< "Pola 7\n";
	
	for(i=1; i<=n; i++) {
		
		for(j=n; j>i; j--) {
			cout<<" ";
		}
		
		for(k=1; k<=(2*i-1); k++) {
			cout<<"*";
		}
		
		cout<<endl;
	}
	
	for(i=2; i<=n; i++) {
		
		for(j=1; j<i; j++) {
			cout<<" ";
		}
		
		for(k=n; k>=(2*i-5); k--) {   // atau (2*i-n)
			cout<<"*";
		}
		
		cout<<endl;
	}
	
	return 0;
}
*/

/*=============================================================================*/

/*
//Belajar fungsi (bisa disebut juga function atau method)
#include <iostream>
#include <cmath>
using namespace std;

// library cmath : referensi www.cppreference.com
// sin(x)		<- sinus
// cos(x)		<- cosinus
// tan(x)		<- tangen
// ceil(x)		<- pembulatan ke atas
// exp(x)		<- eksponen
// fabs(x)		<- nilai absolut dalam float
// floor(x)		<- pembulatan ke bawah
// fmod(x)		<- modulus dalam float
// log(x)		<- logaritma dengan batas natural
// log10(x)		<- logaritma dengan batas 10
// pow(x,y)		<- x pangkat y
// sqrt(x)		<- akar kuadrat

int main() {
	
	int x;
	
	cout<< "Menghitung akar dari x : ";
	cin>> x;
	
	double y = sqrt(x);
	cout<< "akarnya adalah : "<< y <<endl;
	
	return 0;
}
*/

/*=============================================================================*/

/*
//Belajar dadu acak (fungsi built-in)
#include <iostream>
#include <cstdlib>		// mengandung fungsi random
using namespace std;

int main() {
	
	char lanjut;
	
	while(true) {
		
		cout<< "Lempar dadu? (y/n) : ";
		cin>> lanjut;
		
		if(lanjut=='y') {
			cout<< 1 + (rand() % 6) <<endl;		// fungsi yang ada di cstdlib adalah rand() [random]
		} else if(lanjut=='n') {
			break;
		} else {
			cout<< "Warning: ketik y atau n dong kakak!!\n";
		}
	}
	
	return 0;
}
*/

/*=============================================================================*/

/*
//Belajar fungsi dengan kembalian (return)
//banyak orang menyebutnya reporter (jadi dia bisa melaporkan kembali sebuah nilai)
#include <iostream>
using namespace std;

int kuadrat(int x) { 		
	int y;
	y = x * x;
	return y;
}

int tambah(int a, int b) {
	int c;
	c = a + b;
	return c;
}

int main() {
	
	int input, hasil, a, b, c, hasil2;
	
	cout<< "Nilai kuadrat dari : ";
	cin>> input;
	
	hasil = kuadrat(input);
	cout<< "adalah " << hasil <<endl<<endl;
	
	cout<< "Masukkan nilai a : ";
	cin>> a;
	cout<< "Masukkan nilai b : ";
	cin>> b;
	
	hasil2 = tambah(a,b);								// atau ini dihapus
	cout<< "Ditambahkan menjadi " << hasil2 <<endl;		// diganti << tambah(a,b) <<endl;
	
	return 0;
}
*/

/*=============================================================================*/

/*
//Belajar fungsi tanpa kembalian (void)
//banyak orang menyebutnya worker (jadi dia hanya menjalankan saja tanpa memberikan feedback)
// apa itu void? void itu kosong
// void sebenarnya adalah tipe data tetapi kosong
// void tidak perlu return, karena dia tidak mengembalikan nilai apapun
// void bisa digunakan untuk melakukan sesuatu yang tidak perlu ada kembaliannya
#include <iostream>
using namespace std;

int kuadrat(int x) { 		
	int y;
	y = x * x;
	return y;
}

void tampilkan(int input) {
	cout<< "adalah " << input <<endl;
} 

int main() {
	
	int input, hasil;
	
	cout<< "Nilai kuadrat dari : ";
	cin>> input;
	
	hasil = kuadrat(input);
	
	tampilkan(hasil);
	
	return 0;
}
*/

/*=============================================================================*/

/*
//Belajar fungsi luas dan keliling persegi panjang
#include <iostream>
using namespace std;

// fungsi menghitung luas persegi panjang
double hitung_luas(double p, double l) {
	double luas = p * l;
	return luas;
}

// fungsi menghitung keliling persegi panjang
double hitung_keliling(double p, double l) {
	double keliling = 2 * (p + l);
	return keliling;
}

void tampilkan_luas(double p, double l) {
	cout<< "Luasnya adalah " << hitung_luas(p,l) <<endl;
}

void tampilkan_keliling(double p, double l) {
	cout<< "Kelilingnya adalah " << hitung_keliling(p,l) <<endl;
}

int main() {
	
	double panjang, lebar;
	
	cout<< "Program Hitung Luas & Keliling Persegi Panjang\n\n";
	
	cout<< "Masukkan panjangnya : ";
	cin>> panjang;
	cout<< "Masukkan lebarnya : ";
	cin>> lebar;
	cout<<endl;
	
	tampilkan_luas(panjang, lebar);
	tampilkan_keliling(panjang, lebar);
	
	return 0;
}
*/

/*=============================================================================*/

/*
//Belajar fungsi prototipe
#include <iostream>
using namespace std;

// prototipe (mengambil informasi yang cukup untuk si fungsi main ini untuk mengetahui bahwa fungsi itu ada) (ibaratnya seperti deklarasi) (fungsi prototipe akan berguna di multifile)
double hitung_luas(double p, double l);
void println(double x);

int main() {
	
	double panjang, lebar, luas;
	
	cin>> panjang;
	cin>> lebar;
	
	luas = hitung_luas(panjang, lebar);
	
	println(luas);
	
	return 0;
}

// dan ini inisialisasi nya
double hitung_luas(double p, double l) {
	return p * l;
}

void println(double x) {
	cout<< "hasil : " << x <<endl;
}
*/

/*=============================================================================*/

/*
//Belajar scope variabel (global, lokal, dan block)
#include <iostream>
using namespace std;

int x = 10;		// global scope

int ambil_global() {
	return x;	// mengambil variabel global
}

int x_lokal() {
	int x = 5;	// variabel local scopenya x_lokal()
	return x;
}

int main() {
	
	cout<< "1. variabel global : " << x <<endl;
	int x = 8;	// variabel lokal untuk main
	cout<< "2. variabel local main : "<< x <<endl;
	cout<< "3. variabel ambil_global : "<< ambil_global() <<endl;
	cout<< "4. variabel lokal main : "<< x <<endl;	
	cout<< "5. variabel x_lokal : "<< x_lokal() <<endl;
	cout<< "6. variabel lokal main : "<< x <<endl;
	cout<< "7. variabel lokal main : "<< x <<endl;
	{
		cout<< "8. variabel lokal main : "<< x <<endl;
		// block scope (setiap sesuatu yang berhubungan dengan brecket{} mau itu for atau if)
		int x = 1;
		cout<< "9. variabel lokal block : "<< x <<endl;
		cout<< "10. variabel global : "<< ambil_global() <<endl;	// atau pakai unery operator (::x)
	}
	
	cout<< "11. variabel lokal main : "<< x <<endl;
	
	return 0;
}
*/

/*=============================================================================*/

/*
//Belajar default argumen pada fungsi
#include <iostream>
using namespace std;

// fungsi prototipe
double volume_kubus(double p = 1, double l = 1, double t = 1);	// (= 1) adalah default argument atau nilai standar/defaultnya

int main() {
	
	cout<< "Volume kubus : " << volume_kubus(3, 4, 5) <<endl;	
	cout<< "Volume kubus : " << volume_kubus(3, 4) <<endl;	
	cout<< "Volume kubus : " << volume_kubus(3) <<endl;	
	cout<< "Volume kubus : " << volume_kubus() <<endl;	
	
	return 0;
}

double volume_kubus(double p, double l, double t) {
	return p * l * t;
}
*/

/*=============================================================================*/

/*
//Belajar overloading sebuah fungsi
#include <iostream>
using namespace std;

// overloading = menimpa

// basic function
int luas_kotak(int panjang, int lebar) {
	int luas = panjang * lebar;
	return luas;
}

//overload function
int luas_kotak(int sisi) {
	int luas = sisi * sisi;
	return luas;
}

double luas_kotak(double sisi) {
	double luas = sisi * sisi;
	return luas;
}

int main() {
	
	cout<< "luas kotak 2x3 : " << luas_kotak(2,3) <<endl;
	cout<< "luas kotak 2x2 : " << luas_kotak(2) <<endl;
	cout<< "luas kotak 2.5x2.5 : " << luas_kotak(2.5) <<endl;
	
	return 0;
}
*/

/*=============================================================================*/

/*
//Belajar fungsi rekursif
#include <iostream>
using namespace std;

int pangkatIterasi(int a, int b) {
	
	int hasil = a;
	
	for(int i = 1; i < b; i++) {
		
		hasil = hasil * a;
	}
	
	return hasil;
}

// fungsi rekursif terbatas
int pangkatRekursif(int a, int b) {
	
	if(b <= 1)
	{
		cout<< "akhir dari rekursif\n";
		return a;
	}
	
	else
	{
		cout<< "rekursif\n";
		return a * pangkatRekursif(a, (b-1));
	}
	
}

int main() {
	
	int a, b;
	
	cout<< "angka : ";
	cin>> a;
	cout<< "pangkat : ";
	cin>> b;
	
	cout<< "hasil iterasi = " << pangkatIterasi(a,b) <<endl;
	cout<< "hasil rekursif = " << pangkatRekursif(a,b) <<endl;
	
	return 0;
}
*/

/*=============================================================================*/

/*
//Latihan fungsi rekursif (faktorial)
#include <iostream>
using namespace std;

// prototipe
int faktorial(int n);

int main() {
	
	int angka, hasil;
	cout<< "Menghitung faktorial dari : ";
	cin>> angka;
	
	hasil = faktorial(angka);
	cout<< "\nNilai faktorialnya adalah " << hasil <<endl;
	
	return 0;
}

int faktorial(int n) {
	
	if (n <= 1) {
		cout<< n;
		return n;
	}
	else {
		cout<< n << "*";
		return n * faktorial(n - 1);
	}
}
*/

/*=============================================================================*/

/*
//Latihan fungsi rekursif (fibonacci)
#include <iostream>
using namespace std;

int fibonacci(int n);

int main() {
	
	int angka, hasil;
	
	cout<< "Menghitung fibonacci ke : ";
	cin>> angka;
	
	hasil = fibonacci(angka);
	
	cout<< "\nNilainya adalah : " << hasil <<endl;
	
	return 0;
}

int fibonacci(int n) {
	
	if((n == 0) || (n == 1)) {
		return n;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}
*/

/*=============================================================================*/

/*
//Belajar pointer
// pointer adalah sebuah variabel yang digunakan untuk menyimpan alamat memori
// pointer dapat mengubah nilai dari alamat yang sama
// pointer akan selalu bertipe data integer (int)
#include <iostream>
using namespace std;

int main() {
	
	// penjelasan pertama
	
	int *a;
	int b;
	
	a = &b;
	b = 10;
	
	cout<< "nilai dari *a : " << *a <<endl; // karena a itu menyimpan dari alamatnya b, maka kita bisa mendapatkan nilai b nya
	cout<< "nilai dari b : " << b <<endl;
	cout<< "alamat dari a : " << a <<endl;	
	cout<< "alamat dari b : " << &b <<endl;	
	
	*a = 100;
	 
	cout<< "\nnilai dari *a : " << *a <<endl;
	cout<< "nilai dari b : " << b <<endl;
	cout<< "alamat dari a : " << a <<endl;	
	cout<< "alamat dari b : " << &b <<endl;	
	
	// penjelasan kedua
	
	int x = 5;  		// kita tahu bahwa int x mempunyai nilai dan alamat/address
	//int *y = &x;		// ini pointer
	int *y = nullptr;	// ini pointer yang memiliki address kosong atau masih blank
	y = &x;				// ini pointer
	
	cout<< "\nnilai dari x : " << x <<endl;
	cout<< "alamat dari x : " << y <<endl;	// mengambil address dari nilai x
	
	// bagaimana cara mengambil nilai dari alamatnya ?
	// menggunakan dereferencing (mengambil data dari sebuah pointer)
	
	x = 10;
	cout<< "mengambil nilai dari pointer y : " << *y <<endl;
	
	// jadi, pointer itu hanyalah alamat. yang berfungsi untuk
	// menaruh alamat dari sebuah variabel si x ini contohnya.
	// ini akan terpakai jika kita menggunakan fungsi yang menggunakan pointer.

	return 0;
}
*/

/*=============================================================================*/

/*
//Belajar reference
#include <iostream>
using namespace std;

int main() {
	
	int a = 5;
	
	cout<< "address dari a " << &a <<endl;
	cout<< "nilai dari a " << a <<endl<<endl;
	
	int &b = a;	// reference
	
	cout<< "nilai dari b " << b <<endl;
	cout<< "address dari b " << &b <<endl<<endl;
	
	b = 10;
	
	cout<< "nilai dari a " << a <<endl;
	cout<< "address dari b " << b <<endl<<endl;
	
	b = 20;
	
	cout<< "nilai dari a " << a <<endl;
	cout<< "address dari b " << b <<endl<<endl;
	
	return 0;
}
*/

/*=============================================================================*/

/*
//Belajar fungsi dengan pointer
#include <iostream>
using namespace std;

void fungsi(int *);
void kuadrat(int *);

int main() {
	
	int a = 5;
	
	cout<< "address a " << &a <<endl;
	cout<< "nilai a "<< a <<endl;
	
	kuadrat(&a);	// fungsi dengan input pointer
	
	cout<< "nilai a " << a <<endl;
	
	return 0;
}

void fungsi(int *b) {
	
	cout<< "address b " << b <<endl;
	cout<< "nilai b " << *b <<endl;		// dereferencing
}

void kuadrat(int *valPtr) {
	
	*valPtr = (*valPtr) * (*valPtr);
}
*/

/*=============================================================================*/

/*
//Belajar fungsi dengan reference
#include <iostream>
using namespace std;

void fungsi(int &);
void kuadrat(int &);

int main() {
	
	int a = 5;

	cout<< "address a "	<< &a <<endl;
	cout<< "nilai a " << a <<endl;

	// fungsi(a);
	kuadrat(a);
	cout<< "nilai a "<< a <<endl;
	
	return 0;
}

void fungsi(int &b) {
	
	b = 10;
	cout<< "address b " << &b <<endl;
	cout<< "nilai b " << b <<endl;
}

void kuadrat(int &nilaiRef) {
	
	nilaiRef = nilaiRef * nilaiRef;
}
*/

/*=============================================================================*/

/*
//Belajar dasar array (kumpulan)
#include <iostream>
using namespace std;

int main() {
	
	// membuat array
	int nilai[6];
	
	nilai[0] = 0;
	nilai[1] = 1;
	nilai[2] = 2;
	nilai[3] = 3;
	nilai[4] = 4;
	
	cout<< &nilai[0] << " nilainya adalah : " << nilai[0] <<endl;
	cout<< &nilai[1] << " nilainya adalah : " << nilai[1] <<endl;
	cout<< &nilai[2] << " nilainya adalah : " << nilai[2] <<endl;
	cout<< &nilai[3] << " nilainya adalah : " << nilai[3] <<endl;
	cout<< &nilai[4] << " nilainya adalah : " << nilai[4] <<endl;
	
	int *ptr = nilai;
	*(ptr + 2) = 6;

	cout<<endl;
	cout<< &nilai[0] << " nilainya adalah : " << nilai[0] <<endl;
	cout<< &nilai[1] << " nilainya adalah : " << nilai[1] <<endl;
	cout<< &nilai[2] << " nilainya adalah : " << nilai[2] <<endl;
	cout<< &nilai[3] << " nilainya adalah : " << nilai[3] <<endl;
	cout<< &nilai[4] << " nilainya adalah : " << nilai[4] <<endl;	
	
	cout<<endl;
	cout<< "ukuran array = " << sizeof(nilai) << " byte" <<endl;
	cout<< "jumlah member array = " << sizeof(nilai) / sizeof(int) <<endl;
	
	return 0;
}
*/

/*=============================================================================*/

/*
//Belajar array || standard library
#include <iostream>
#include <array>
using namespace std;

int main() {
	
	// membuat array dengan menggunakan standard library
	// array <int, jumlahArray> namaArray
	
	array <int, 5> nilai;
	
	for(int i = 0; i <= 4; i++) {
		
		nilai[i] = i;
		cout<< "nilai [" << i << "] = " << nilai[i];
		cout<< "address : " << &nilai[i] <<endl;
	}
	
	cout<<endl;
	// ukuran array
	cout<< "ukuran : " << nilai.size() <<endl;
	// address awal dari array
	cout<< "address awal : " << nilai.begin() <<endl;
	// address akhir dari array
	cout<< "address akhir : " << nilai.end() <<endl;
	// nilai dengan index
	cout<< "niali ke 2 : " << nilai.at(2) <<endl; 
	
	return 0;
}
*/

/*=============================================================================*/

/*
//Latihan Array
#include <iostream>
#include <array>
using namespace std;

int main() {
	
	array <int, 10> nilai;
	
	cout<< "Program menampilkan grafik nilai" <<endl<<endl;
	
	for(int i = 0; i<=nilai.size(); i++) {
		
		cout<< "jumlah mahasiswa dengan nilai : ";
		
		if(i == 0) {
			cout<< "0-9  : ";
		} else if (i == 10) {
			cout<< "100  : ";
		} else {
			cout<< i*10 << "-" << (i*10) + 9 <<": ";
		}
		
		cin>> nilai[i];
	}
	
	cout<<endl;
	cout<< "Grafik nilai" <<endl<<endl;
	
	for(int i = 0; i<=nilai.size(); i++) {
		
		if(i == 0) {
			cout<< "0-9  : ";
		} else if (i == 10) {
			cout<< "100  : ";
		} else {
			cout<< i*10 << "-" << (i*10) + 9 <<": ";
		}
		
	for(int bintang = 0; bintang < nilai[i]; bintang++) {
		cout<< "*";
	}
	
		cout<<endl;
	}
	
	return 0;
}
*/

/*=============================================================================*/

//Belajar looping array









