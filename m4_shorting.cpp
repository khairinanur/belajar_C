#include<iostream>
using namespace std;


//fungsi angka acak
void GenerateRandomArray(int arr[], int n){
	for(int i = 0; i < n ; i++){
		arr[i] = rand() % 100 + 1;
	}
}

void print_format(string pesan,int arr[],int n){
	cout << pesan << endl;
	for(int i = 0; i < n ; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

//logika shoting
void bubbleSorting(int arr[], int n){
	for(int i = 0; i < n -1 ; 1++){
		for(int j = 0; j < n -i-1; j++){
			if(arr[j] > arr[j +1]) {
			}
		}
	}
}

int main(){
	int n;
	cout << "masukan jumlah data yg di inginkan : ";
	cin >> n;
	int arr[n]; 
	GenerateRandomArray(arr,n);
	print_format("data sblmm di acak", arr,n);
	
	return 0;
}
