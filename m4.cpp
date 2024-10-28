#include<iostream>
#include<vector>
using namespace std;

int main(){
	//inisialisasi
	//format dasar
	vector<int> number;
	
	//untuk menginput data;
	number.push_back(2);
	number.push_back(1);
	number.push_back(3);
	//untuk mencetak
	cout << "elemen yang ada pada vector number saat ini: " << endl;
	for(int value : number){
		cout << value << endl;
	}
	//update
	number[1] = 4;
	cout << "elemen yang ada pada vector number ke 2  apakah sudah terupdate?: " << endl;
	for(int value : number){
		cout << value << endl;
		
		//untukmenghapus
		number.pop_back()
		
		
		
		
	return 0;
	
	
}
