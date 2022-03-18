#include<iostream>
#include<math.h>
using namespace std;
float penambahan(float angka1, float angka2){
	float tambah;
	tambah = angka1+angka2;
	return tambah;
}
float pengurangan(float angka1, float angka2){
	float kurang;
	kurang = angka1-angka2;
	return kurang;
}
float perkalian(float angka1, float angka2){
	float kali;
	kali = angka1*angka2;
	return kali;
}
float pembagian(float angka1, float angka2){
	float bagi;
	bagi = angka1/angka2;
	return bagi;
}
int pemangkatan(int angka1, int angka2){
	int pangkat, i;
	pangkat = 1;
	for(i=0;i<angka2;i++){
		pangkat *= angka1;
	}
	return pangkat;
}
int akarPangkat(int x){
	int akar;
	akar = sqrt(x);
	return akar;
}
int faktorial(int n){
	int nilai = n;
	if(n == 1){
		return nilai;
	}else{
		return nilai*faktorial(n-1);
	}
}
int jumlahDeret(int a){
	if(a==0){
		return a;
	}else{
		return a+jumlahDeret(a-1);
	}
}
int jumlahDeretGenap(int a){
	if(a == 0){
		return a;
	}else{
		if(a % 2 == 0){
			return a + jumlahDeretGenap(a-1);
		}else{
			return jumlahDeretGenap(a-1);
		}
	}
}
int jumlahDeretGanjil(int a){
	if(a == 1){
		return a;
	}else{
		if(a % 2 != 0){
			return a + jumlahDeretGanjil(a-1);
		}else{
			return jumlahDeretGanjil(a-1);
		}
	}
}
