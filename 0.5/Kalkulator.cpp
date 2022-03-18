#include <iostream>
using namespace std;

int main(){
	int angka1, angka2, hasil;
	char pilih;
	cout<<"Masukkan angka : ";
	cin>>angka1;
	cout<<"Pilih operasi  : "<<endl;
	cout<<"\t1. +\t2. -\t3. x\t4. :"<<endl;
	cin>>pilih;
	cout<<"Masukkan angka : ";
	cin>>angka2;

	if(pilih=='1'||pilih=='+'){
		hasil=angka1+angka2;
		cout<<"Hasilnya = "<<hasil<<endl;
	}else if(pilih=='2'||pilih=='-'){
		hasil=angka1-angka2;
		cout<<"Hasilnya = "<<hasil<<endl;
	}else if(pilih=='3'||pilih=='x'){
		hasil=angka1*angka2;
		cout<<"Hasilnya = "<<hasil<<endl;
	}else if(pilih=='4'||pilih==':'){
		hasil=angka1/angka2;
		cout<<"Hasilnya = "<<hasil<<endl;
	}else{
		cout<<"Pilihan tidak tersedia"<<endl;
	}
	cin.get();
	return 0;
}
