#include<iostream>
using namespace std;

// membuat tipe data (struct) (gerbong awal)
struct note{
	int data;
	note* next;
};

int main (){
	//inisialisasi untk memakai
	note* head = nullptr;
	note* second = nullptr;
	note* third = nullptr;
	//cara kedua memberikan ruang bentuk
	head = new note();
	second = new note();
	third = new note();
	
	//cara mengisi interior
	
	head->data = 1;
	head->next = second;
	second->data = 2;
	second->next = third;
	third->data = 3;
	third->next = nullptr;
	
   //dikumpulkn
   note* masinis = head;
   
   cout << " apa saja yang ada di dalam lokomotif" << endl;
   //cetak
   while(masinis != nullptr){
   	cout << "data yang ada \t: " << masinis->data << endl;
   	cout << "lokomotif ke \t: " << masinis->next << endl;
   	masinis = masinis->next;
   }
	return 0;
}


