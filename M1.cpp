#include<iostream>
using namespace std;

int main(){
	string value;
	cout << "Hello ini program pertama saya " << endl;
	cout << "Masukkan nama anda : " ;
	getline(cin, value);
	cin.ignore();
	cout << "Hello " << value << endl;
	return 0;
	
}
