/* Program Penjumlahan Matriks */

#include <iostream>

using namespace std;

int main (){
	int i,j,m,n, matriks1[10][10], matriks2[10][10], hasil[10][10];
	
	cout <<"=====================================\n";
	cout <<"| 	PROGRAM PENJUMLAHAN MATRIKS 	|\n";
	cout <<"=====================================\n\n";
	/* Input matriks */
	cout<<"Masukkan Jumlah Baris Matriks : "; cin>>m;
	cout<<"Masukkan Jumlah Kolom Matriks : "; cin>>n;
	
	/* Input Elemen Matriks */
	cout<<"Masukkan Elemen Matriks Pertama : \n"; 
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
		cin>>matriks1 [i][j];
		}
	}
	
	cout<<"Masukkan Elemen Matriks Kedua : \n";
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
		cin>>matriks2 [i][j];
		}
	}
	
	/* Menampilkan Hasil */
	cout<<"Hasil Penjumlahan Matriks: \n";
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			hasil[i][j]=matriks1 [i][j] + matriks2[i][j];
			cout<<hasil[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
