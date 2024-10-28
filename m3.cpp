#include<iostream>
using namespace std;

int main(){
	int x = 10;
	int y = 2;
	int hasil;
	float hasil_float;
	
	//penjumlahan	
	cout << "=== penjumlahan ===" << endl;
	hasil = x + y;
	cout << x << " + " << y << " = " << hasil << endl;
	cout << "=== pengurangan ===" << endl;
	cout << " - " << y << " = " << hasil << endl;
	hasil = x - y;
	cout << "=== kali ===" << endl;
	hasil = x * y;
	cout << x << " * " << y << " = " << hasil << endl;
	cout << "=== bagi ===" << endl;
	hasil = x / y;
	hasil_float = (float) x / y ;
	cout << "=== bagi tanpa tipe data float ===" << endl; 
	cout << x << " / " << y << " = " << hasil << endl; 
	cout << "=== bagi tipe float ===" << endl;
	cout << x << " / " << y << hasil_float << endl;
	cout << "=== modulus ===" << endl;
	hasil = x % y;
	cout << x << " % " << y << " = " << hasil << endl;
	
	
	
	
	return 0;
	
	
}
