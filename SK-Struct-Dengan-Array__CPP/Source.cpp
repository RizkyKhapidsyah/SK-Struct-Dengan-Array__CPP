#pragma warning(disable:4996)

/* Program Penggunaan structure pada function dengan array */

#include <iostream>
#include <conio.h>

using namespace std;

char ket(float n);

/* Created by Rizky Khapidsyah */

int main() {
	int i, j = 1, k = 1;

	struct {
		char nim[5];
		char nama[15];
		float nilai;
	} mhs[5];

	system("cls");
	for (i = 0; i < 2; i++) {
		cout << "Data Ke - " << j++ << endl;
		cout << "masukan NIM = "; cin >> mhs[i].nim;
		cout << "masukan Nama = "; cin >> mhs[i].nama;
		cout << "masukan Nilai Akhir = "; cin >> mhs[i].nilai;
		cout << endl;
	}
	
	system("cls");
	for (i = 0; i < 2; i++) {
		cout << "Data Ke - " << k++ << endl;
		cout << "NIM = " << mhs[i].nim << endl;
		cout << "Nama = " << mhs[i].nama << endl;
		cout << "Nilai Akhir = " << mhs[i].nilai << endl;
		cout << "Keterangan yang didapat = ";
		cout << ket(mhs[i].nilai) << endl;
		cout << endl;
	}

	_getch();
	return 0;
}
char ket(float n) {
	if (n > 65) {
		return 'L';
	} else {
		return 'G';
	}
}