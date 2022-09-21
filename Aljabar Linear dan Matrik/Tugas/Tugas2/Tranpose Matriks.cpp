/* Program Tranpose Matriks */

#include <iostream>

using namespace std;

main (){
	int i,j,m,n,matriks[10][10],tranpose[10][10],hasil[10][10];
	
	cout <<"====================================\n";
	cout <<"|	PROGRAM TRANPOSE MATRIKS	|\n";
	cout <<"====================================\n\n";
	
	/* Input Matriks */
	cout <<"Masukkan Jumlah Baris Matriks :"; cin>>m;
	cout <<"Masukkan Jumlah Kolom Matriks :"; cin>>n;
	
	/* Input Elemen Matriks */
	cout <<"Masukkan Elemen Matriks\n";
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			cin>>matriks[i][j];
		}
	}
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
		tranpose[j][i]=matriks[i][j];	
		}
	}
	
	/* Menampilkan Hasil */
	cout <<"Hasil Tranpose Matriks : ";
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			cout <<tranpose[i][j]<<"\t";
		}
		cout<<endl;
		}
}
