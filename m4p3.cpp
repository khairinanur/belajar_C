#include<iostream>
#include<unordered_map>

using namespace std;

void format_cetak(string pesan, unordered_map<string,int> hash_map){
	cout << pesan << endl;
	cout << "|key\t\t|value\t\t|"<<endl;
	for(const auto&value  : hash_map){
		cout << "|" << value.first << "\t\t|" << value.second << "\t\t|" << endl;
	}
	
} 




int main(){
	//inisialisasi hash_map
	unordered_map<string,int> hash_map;
	
	//cara isi variabel
	hash_map["one"] = 1;
	hash_map["tree"] = 3;
	hash_map["two"] = 2;
	hash_map["four"] = 4;
	
	
	//cetak semua nilai
	format_cetak("elemen yang ada pada hash_map :", hash_map);
	
	//untuk mencetak spesifik panggil key
	cout << "elemen yang ada pada key one adalah :" << hash_map["one"] << endl;
	
	//update
	hash_map["one"] = 10;
	format_cetak("elemen yang ada hash_map setelah di update : ", hash_map);
	
	//delete
	hash_map.erase("four");
	format_cetak("elemen yang ada pada hash_map setelah di delete : ", hash_map);
	
	return 0;
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	

