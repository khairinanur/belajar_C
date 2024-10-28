#include<iostream>
using namespace std;

int main(){
	// Tipe data desimal
	float floatNumber = 3.14f;
	double doubleNumber = 2.718828;
	long double longDobuLeNumber = 1.6180339887;
	
	
	cout <<"Tipe data float : " << floatNumber << endl;
	cout <<"Tipe data double : " << doubleNumber << endl;
	cout <<"Tipe data long double : " << longDobuLeNumber << endl;


	char karakter = 'A';
	cout << "Tipe data char : " << karakter << endl;
	bool boolean = true;
	cout << "Tipe data boolean tempat conversi :" << boolean << endl;
	cout << "Tipe data boolean : " << boolalpha << boolean << endl;
	
	
	//tipe data non primitif
	char kata [63]= "selamat kamu sudah paham dengan tipe data ini";
	cout << "belajar menulis string : " << endl;
	cout << kata << endl;
	// tipe data string ini kadang masuk ke dalam primitif
	string kata_string = "selamat kamu sudah paham cara menggunakan tipe data ini";
	cout << "belajar menulis string_non_primitif : " << endl;
	
	return 0;
}
