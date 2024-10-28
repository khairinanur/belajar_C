#include<iostream>
#include<map>
using namespace std;
void format_cetak(string pesan , map<int,string> value_map){
		cout << pesan << endl;
		cout << "|\key\t|value\t|" << endl;
		for(const auto& value : value_map){
			cout << "|\t"<<value.first<<"\t|\t"<<value.second<<"\t|"<< endl;
			
		}
}
int main (){
	//inisialisasi
	map<int,string> makanan;
	//input
	makanan [0] = "roti";
	makanan [2] = "ayam";
	makanan [1] = "nasi";
	makanan [3] = "roti bakar";	
	
	//cetak semua nilai
	format_cetak("elemen yang ada pada variabrl makanan : ",makanan);
	
	//cetak hanya 1 nilai
	cout << "apa value yang ada pada posisi ke 2 : " << makanan[1] << endl;
	
	//update
	makanan[3] = "roti bakar";
	format_cetak("elemen yang ada pada variabel makanan setelah di update : ", makanan) ;
	
	//delete
	makanan.erase(1);
	format_cetak("elemen yang ada pada variabel makanan setelah di delete posisi ke 1 : ", makanan) ;
	
	
	
	
	
	
	return 0;
}

