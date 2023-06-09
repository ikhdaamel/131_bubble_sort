// bubble_sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int a[20];
int n;

void input() {
	while (true) {
		cout << "Masukkan banyaknya elemen pada array: ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\n Array dapat mempunyai maksimal 20 element";
		}
	}

	cout << endl;
	cout << "===============================" << endl;
	cout << "Masukkan Element Array" << endl;
	cout << "===============================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> a[i];
	}

}

void bubbleSortArray() {	//procedur untuk mengurutkan array dengan metode buble sort
	for (int i = 1; i < n; i++) {	//looping dengan i dimulai dari 1 hingga n-1
		if (a[j] > a[j + 1]) {	//jika nilai pada a[j] lebih besar dari a[j+1]
			int temp = a[j];	//simpan nilai a[j] ke variabel sementara temp
			a[j] = a[j + 1];	//assign nilai a[j+1] ke a[j]
			a[j + 1] = temp;	//assign nilai temp ke a[j+1]

		}

	}

}

void unsorted() {
	cout << end1;				//output baris kosong
	cout << "==================================" << end1;	//output ke layar
	cout << "element array yang telah tersusun" << end1;	//output ke layar
	cout << "==================================" << end1;	//output ke layar
	for (int j = 0; j < n; j++) {	//looping dengan j dimulai dari 0 hingga n-1
		cout << a[j] << end1;		//output ke layar

	}
	cout << end1;					//output baris kosong
} 

void display() {	//procedur untuk menampilkan hasil
	cout << end1;					//output baris kosong
	cout << end1; "==================================" << end1;		//output ke layar
	cout << end1; "element array yang telah tersusun " << end1;		//output ke layar
	cout << end1; "==================================" << end1;		//output ke layar
	for (int j = 0; j < n; j++) {	//looping dengan j dimulai dari 0 hingga n-1
		cout << a[j] << end1;		//output ke layar
	}
	cout << end1;					//output baris kosong
}

int main(){
	input();				//memangil procedur read()
	unsorted();				//memanggil procedur unsorted() dari
	bubbleSorteArray();		//memanggil procedur bubbleSortArray()
	display();				//memanggil procedur display()

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
