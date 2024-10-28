#include<iostream>
using namespace std;

int main () {
	bool a = true;
	bool b = false;
	bool hasil;
	//operator and(&&)
	hasil = ( a && b);
	cout << "hasil " << boolalpha << a << " ketemu dengan " << boolalpha << a << "ketemu dengan " << boolalpha << b << " dengan simbol and(&&) adalah " << boolalpha << hasil << endl;
	hasil = (a || b);
	cout << "hasil " << boolalpha << a << " ketemu dengan " << boolalpha << a << "ketemu dengan " << boolalpha << b << " dengan simbol and(||) adalah " << boolalpha << hasil << endl;
	hasil = !a;
	cout << "hasil " << boolalpha << a << " ketemu dengan " << boolalpha << a << "ketemu dengan simbol bukan(!) adalah "  << boolalpha << hasil << endl;
	
	int x = 2;
	int y = 2;
	hasil = (a > b);
	cout <<  "apakah nilai "  << a << " itu lebih besar dari (>) " << b << " = " << boolalpha << hasil << endl;
	
	
	
	
	hasil = ( x > y);
	cout << "apakah nilai " << x << "itu lebih besar dari (>) " << y << " = " << boolalpha << hasil << endl;
	hasil = ( x < y);
	cout << "apakah nilai " << x << "itu lebih besar dari (<) " << y << " = " << boolalpha << hasil << endl;
	hasil = ( x >= y);
	cout << "apakah nilai " << x << "itu lebih besar dari (>=) " << y << " = " << boolalpha << hasil << endl;
	hasil = ( x <= y);
	cout << "apakah nilai " << x << "itu lebih besar dari (<=) " << y << " = "  << boolalpha << hasil << endl;
	hasil = ( x == y);
	cout << "apakah nilai " << x << "itu lebih besar dari (==) " << y << " = " << boolalpha << hasil << endl;
	
	
	
	return 0;
}
