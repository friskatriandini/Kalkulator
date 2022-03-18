#include<iostream>
#include<fstream>
#include<conio.h>
#include "rumus.h"
#include "variabel.h"
#include "line.h"
int main(){
	hitung var;
	int i, j, pil, deret, triks;
	bool loop = true;
	ofstream header;
	header.open("history.txt", ios::out);
	header << "\tHISTORY PERHITUNGAN" <<endl;
	header << "======================================" <<endl;
	header.close();
	while(loop){
		cout << "PROGRAM KALKULATOR SEDERHANA" <<endl;
		line2(55);
		cout << "Pilih Perhitungan Yang Ingin Dilakukan" <<endl;
		cout << "1. Penjumlahan" <<endl;
		cout << "2. Pengurangan" <<endl;
		cout << "3. Perkalian" <<endl;
		cout << "4. Pembagian" <<endl;
		cout << "5. Pemangkatan" <<endl;
		cout << "6. Pengakaran" <<endl;
		cout << "7. Faktorial" <<endl;
		cout << "8. Penjumlahan Deret" <<endl;
		cout << "9. Perhitungan Matriks" <<endl;
		cout << "0. Keluar Dari Program" <<endl;
		line(55);
		cout << "Masukkan Pilihan Anda : ";
		cin >> pil;
		line2(55);
		switch(pil){
			case 1 :
				{
					cout << "PROGRAM PENJUMLAHAN" <<endl;
					line(55);
					cout << "Masukkan Bilangan Pertama\t: ";
					cin >> var.a;
					cout << "Masukkan Bilangan Kedua\t\t: ";
					cin >> var.b;
					cout << "Hasil Penjumlahan " << var.a << " + " << var.b << " = " << penambahan(var.a,var.b) <<endl;
					ofstream jumlah;
					jumlah.open("history.txt", ios::app);
					jumlah << "Hasil Penjumlahan " << var.a << " + " << var.b << " = " << penambahan(var.a,var.b) <<endl;
					jumlah << "--------------------------------------" <<endl;
					jumlah.close();
					line2(55);
					cout << "Tekan Apa Saja Untuk Melanjutkan Program" <<endl;
					line(55);
					getch();
				}
				break;
			case 2 :
				{
					cout << "PROGRAM PENGURANGAN" <<endl;
					line(55);
					cout << "Masukkan Bilangan Pertama\t: ";
					cin >> var.a;
					cout << "Masukkan Bilangan Kedua\t\t: ";
					cin >> var.b;
					cout << "Hasil Pengurangan " << var.a << " - " << var.b << " = " << pengurangan(var.a,var.b) <<endl;
					ofstream kurang;
					kurang.open("history.txt", ios::app);
					kurang << "Hasil Pengurangan " << var.a << " - " << var.b << " = " << pengurangan(var.a,var.b) <<endl;
					kurang << "--------------------------------------" <<endl;
					kurang.close();
					line2(55);
					cout << "Tekan Apa Saja Untuk Melanjutkan Program" <<endl;
					line(55);
					getch();
				}
				break;
			case 3 :
				{
					cout << "PROGRAM PERKALIAN" <<endl;
					line(55);
					cout << "Masukkan Bilangan Pertama\t: ";
					cin >> var.a;
					cout << "Masukkan Bilangan Kedua\t\t: ";
					cin >> var.b;
					cout << "Hasil Perkalian " << var.a << " x " << var.b << " = " << perkalian(var.a,var.b) <<endl;
					ofstream kali;
					kali.open("history.txt", ios::app);
					kali << "Hasil Perkalian " << var.a << " x " << var.b << " = " << perkalian(var.a,var.b) <<endl;
					kali << "--------------------------------------" <<endl;
					kali.close();
					line2(55);
					cout << "Tekan Apa Saja Untuk Melanjutkan Program" <<endl;
					line(55);
					getch();
				}
				break;
			case 4 :
				{
					cout << "PROGRAM PEMBAGIAN" <<endl;
					line(55);
					cout << "Masukkan Bilangan Pertama\t: ";
					cin >> var.a;
					cout << "Masukkan Bilangan Kedua\t\t: ";
					cin >> var.b;
					cout << "Hasil Pembagian " << var.a << " : " << var.b << " = " << pembagian(var.a,var.b) <<endl;
					ofstream bagi;
					bagi.open("history.txt", ios::app);
					bagi << "Hasil Pembagian " << var.a << " : " << var.b << " = " << pembagian(var.a,var.b) <<endl;
					bagi << "--------------------------------------" <<endl;
					bagi.close();
					line2(55);
					cout << "Tekan Apa Saja Untuk Melanjutkan Program" <<endl;
					line(55);
					getch();
				}
				break;
			case 5 :
				{
					cout << "PROGRAM PEMANGKATAN" <<endl;
					line(55);
					cout << "Masukkan Bilangan Pertama\t: ";
					cin >> var.c;
					cout << "Masukkan Bilangan Kedua\t\t: ";
					cin >> var.d;
					cout << "Hasil Pemangkatan " << var.c << " Pangkat " << var.d << " = " << pemangkatan(var.c,var.d) <<endl;
					ofstream pangkat;
					pangkat.open("history.txt", ios::app);
					pangkat << "Hasil Pemangkatan " << var.c << " Pangkat " << var.d << " = " << pemangkatan(var.c,var.d) <<endl;
					pangkat << "--------------------------------------" <<endl;
					pangkat.close();
					line2(55);
					cout << "Tekan Apa Saja Untuk Melanjutkan Program" <<endl;
					line(55);
					getch();
				}
				break;
			case 6 :
				{
					cout << "PROGRAM PENGAKARAN" <<endl;
					line(55);
					cout << "Masukkan Bilangan\t: ";
					cin >> var.c;
					cout << "Hasil Pengakaran " << var.c << " = " << akarPangkat(var.c) <<endl;
					ofstream akar;
					akar.open("history.txt", ios::app);
					akar << "Hasil Pengakaran " << var.c << " = " << akarPangkat(var.c) <<endl;
					akar << "--------------------------------------" <<endl;
					akar.close();
					line2(55);
					cout << "Tekan Apa Saja Untuk Melanjutkan Program" <<endl;
					line(55);
					getch();
				}
				break;
			case 7 :
				{
					cout << "PROGRAM FAKTORIAL" <<endl;
					line(55);
					cout << "Masukkan Bilangan\t: ";
					cin >> var.c;
					cout << "Hasil " << var.c << " Faktorial = " << faktorial(var.c) <<endl;
					ofstream faktor;
					faktor.open("history.txt", ios::app);
					faktor << "Hasil " << var.c << " Faktorial = " << faktorial(var.c) <<endl;
					faktor << "--------------------------------------" <<endl;
					faktor.close();
					line2(55);
					cout << "Tekan Apa Saja Untuk Melanjutkan Program" <<endl;
					line(55);
					getch();
				}
				break;
			case 8 :
				{
					cout << "PROGRAM PENJUMLAHAN DERET" <<endl;
					line(55);
					cout << "Pilih Perhitungan Deret Yang Ingin Dilakukan" <<endl;
					cout << "1. Penjumlahan Deret" <<endl;
					cout << "2. Penjumlahan Deret Genap" <<endl;
					cout << "3. Penjumlahan Deret Ganjil" <<endl;
					line(55);
					cout << "Masukkan Pilihan Anda : ";
					cin >> deret;
					line2(55);
					switch(deret){
						case 1 :
							{
								cout << "PENJUMLAHAN DERET" <<endl;
								line(55);
								cout << "Masukkan Bilangan\t: ";
								cin >> var.c;
								cout << "Hasil Penjumlahan Deret = " << jumlahDeret(var.c) <<endl;
								ofstream deret;
								deret.open("history.txt", ios::app);
								deret << "Hasil Penjumlahan Deret = " << jumlahDeret(var.c) <<endl;
								deret << "--------------------------------------" <<endl;
								deret.close();
								line2(55);
							}
							break;
						case 2 :
							{
								cout << "PENJUMLAHAN DERET GENAP" <<endl;
								line(55);
								cout << "Masukkan Bilangan\t: ";
								cin >> var.c;
								cout << "Hasil Penjumlahan Deret Genap = " << jumlahDeretGenap(var.c) <<endl;
								ofstream derett;
								derett.open("history.txt", ios::app);
								derett << "Hasil Penjumlahan Deret Genap = " << jumlahDeretGenap(var.c) <<endl;
								derett << "--------------------------------------" <<endl;
								derett.close();
								line2(55);
							}
							break;
						case 3 :
							{
								cout << "PENJUMLAHAN DERET GANJIL" <<endl;
								line(55);
								cout << "Masukkan Bilangan\t: ";
								cin >> var.c;
								cout << "Hasil Penjumlahan Deret Ganjil = " << jumlahDeretGanjil(var.c) <<endl;
								ofstream derettt;
								derettt.open("history.txt", ios::app);
								derettt << "Hasil Penjumlahan Deret Ganjil = " << jumlahDeretGanjil(var.c) <<endl;
								derettt << "--------------------------------------" <<endl;
								derettt.close();
								line2(55);
							}
							break;
					}
					cout << "Tekan Apa Saja Untuk Melanjutkan Program" <<endl;
					line(55);
					getch();
				}
				break;
			case 9 :
				{
					cout << "PERHITUNGAN MATRIKS" <<endl;
					line(55);
					cout << "Pilih Perhitungan Matriks Yang Ingin dilakukan" <<endl;
					cout << "1. Penjumlahan Matriks" <<endl;
					cout << "2. Pengurangan Matriks" <<endl;
					line(55);
					cout << "Masukkan Pilihan Anda : ";
					cin >> triks;
					line2(55);
					switch(triks){
						case 1 :
							{
								cout << "PENJUMLAHAN MATRIKS" <<endl;
								line(55);
								cout << "A. Menentukan Baris dan Kolom pada Matriks" <<endl;
								cout << "Masukkan Jumlah Baris : ";
								cin >> var.c;
								cout << "Masukkan Jumlah Kolom : ";
								cin >> var.d;
								int matriks[var.c][var.d], matriks2[var.c][var.d], total[var.c][var.d];
								cout << "Anda Menggunakan 2 Matriks " << var.c << "x" << var.d <<endl;
								line(55);
								cout << "B. Menentukan Nilai Matriks Pertama"<<endl;
								for(i=0;i<var.c;i++){
									for(j=0;j<var.d;j++){
										cout << "Masukkan data Baris ke - " << i << " Kolom ke - " << j << " : ";
										cin >> matriks[i][j];
									}
									line(55);
								}
								cout << "Model Matrix Pertama" <<endl;
								for(i=0;i<var.c;i++){
									for(j=0;j<var.d;j++){
										cout << matriks[i][j] << " ";
									}
									cout <<endl;
								}
								line(55);
								cout << "C. Menentukan Nilai Matriks Kedua"<<endl;
								for(i=0;i<var.c;i++){
									for(j=0;j<var.d;j++){
										cout << "Masukkan data Baris ke - " << i << " Kolom ke - " << j << " : ";
										cin >> matriks2[i][j];
									}
									line(55);
								}
								cout << "Model Matrix Kedua" <<endl;
								for(i=0;i<var.c;i++){
									for(j=0;j<var.d;j++){
										cout << matriks2[i][j] << " ";
									}
									cout <<endl;
								}
								line(55);
								cout << "D. Penjumlahan Matriks" <<endl;
								cout << "Matriks 1\t|\tMatriks 2" <<endl;
								for(i=0;i<var.c;i++){
									for(j=0;j<var.d;j++){
										cout << matriks[i][j] << " ";
									}
									cout << "\t\t|\t";
									for(j=0;j<var.d;j++){
										cout << matriks2[i][j] << " ";
									}
									cout <<endl;
								}
								cout << "Hasil Penjumlahan Kedua Matriks" <<endl;
								for(i=0;i<var.c;i++){
									for(j=0;j<var.d;j++){
										total[i][j] = matriks[i][j] + matriks2[i][j];
										cout << total[i][j] << " ";
									}
									cout <<endl;
								}
								ofstream jumtriks;
								jumtriks.open("history.txt", ios::app);
								jumtriks << "Penjumlahan Matriks" <<endl;
								jumtriks << "Matriks 1\t|\tMatriks 2" <<endl;
								for(i=0;i<var.c;i++){
									for(j=0;j<var.d;j++){
										jumtriks << matriks[i][j] << " ";
									}
									jumtriks << "\t\t|\t";
									for(j=0;j<var.d;j++){
										jumtriks << matriks2[i][j] << " ";
									}
									jumtriks <<endl;
								}
								jumtriks << "Hasil Penjumlahan Kedua Matriks" <<endl;
								for(i=0;i<var.c;i++){
									for(j=0;j<var.d;j++){
										total[i][j] = matriks[i][j] + matriks2[i][j];
										jumtriks << total[i][j] << " ";
									}
									jumtriks <<endl;
								}
								jumtriks << "--------------------------------------" <<endl;
								jumtriks.close();
								line2(55);
							}
							break;
						case 2 :
							{
								cout << "PENGURANGAN MATRIKS" <<endl;
								line(55);
								cout << "A. Menentukan Baris dan Kolom pada Matriks" <<endl;
								cout << "Masukkan Jumlah Baris : ";
								cin >> var.c;
								cout << "Masukkan Jumlah Kolom : ";
								cin >> var.d;
								int matriks3[var.c][var.d], matriks4[var.c][var.d], tot[var.c][var.d];
								cout << "Anda Menggunakan 2 Matriks " << var.c << "x" << var.d <<endl;
								line(55);
								cout << "B. Menentukan Nilai Matriks Pertama"<<endl;
								for(i=0;i<var.c;i++){
									for(j=0;j<var.d;j++){
										cout << "Masukkan data Baris ke - " << i << " Kolom ke - " << j << " : ";
										cin >> matriks3[i][j];
									}
									line(55);
								}
								cout << "Model Matrix Pertama" <<endl;
								for(i=0;i<var.c;i++){
									for(j=0;j<var.d;j++){
										cout << matriks3[i][j] << " ";
									}
									cout <<endl;
								}
								line(55);
								cout << "C. Menentukan Nilai Matriks Kedua"<<endl;
								for(i=0;i<var.c;i++){
									for(j=0;j<var.d;j++){
										cout << "Masukkan data Baris ke - " << i << " Kolom ke - " << j << " : ";
										cin >> matriks4[i][j];
									}
									line(55);
								}
								cout << "Model Matrix Kedua" <<endl;
								for(i=0;i<var.c;i++){
									for(j=0;j<var.d;j++){
										cout << matriks4[i][j] << " ";
									}
									cout <<endl;
								}
								line(55);
								cout << "D. Pengurangan Matriks" <<endl;
								cout << "Matriks 1\t|\tMatriks 2" <<endl;
								for(i=0;i<var.c;i++){
									for(j=0;j<var.d;j++){
										cout << matriks3[i][j] << " ";
									}
									cout << "\t\t|\t";
									for(j=0;j<var.d;j++){
										cout << matriks4[i][j] << " ";
									}
									cout <<endl;
								}
								cout << "Hasil Pengurangan Kedua Matriks" <<endl;
								for(i=0;i<var.c;i++){
									for(j=0;j<var.d;j++){
										tot[i][j] = matriks3[i][j] - matriks4[i][j];
										cout << tot[i][j] << " ";
									}
									cout <<endl;
								}
								ofstream kurtriks;
								kurtriks.open("history.txt", ios::app);
								kurtriks << "Pengurangan Matriks" <<endl;
								kurtriks << "Matriks 1\t|\tMatriks 2" <<endl;
								for(i=0;i<var.c;i++){
									for(j=0;j<var.d;j++){
										kurtriks << matriks3[i][j] << " ";
									}
									kurtriks << "\t\t|\t";
									for(j=0;j<var.d;j++){
										kurtriks << matriks4[i][j] << " ";
									}
									kurtriks <<endl;
								}
								kurtriks << "Hasil Pengurangan Kedua Matriks" <<endl;
								for(i=0;i<var.c;i++){
									for(j=0;j<var.d;j++){
										tot[i][j] = matriks3[i][j] - matriks4[i][j];
										kurtriks << tot[i][j] << " ";
									}
									kurtriks <<endl;
								}
								kurtriks << "--------------------------------------" <<endl;
								kurtriks.close();
								line2(55);
							}
							break;
					}
					cout << "Tekan Apa Saja Untuk Melanjutkan Program" <<endl;
					line(55);
					getch();
				}
				break;
			case 0 :
				cout << "Buka file history.txt untuk melihat history perhitungan yang telah anda lakukan" <<endl;
				cout << "Keluar Dari Program...";
				loop = false;
				break;
		}
	}
	return 0;
}
