#include <iostream>
using namespace std;
int main(){
	float v, s, t;
	
	cout<<"MENGHITUNG WAKTU YANG DITEMPUH BERDASARKAN KECEPATAN DAN JARAK"<<endl;
	cout<<"---------------------------------------------------------------"<<endl;
	cout<<"Deskripsi:"<<endl<< "v= Kecepatan"<<endl<< "s= Jarak tempuh"<<endl<< "t= Waktu tempuh"<<endl;
	cout<<"Masukkan kecepatan:";
	cin>>v;
	cout<<"Masukkan jarak yang ditempuh:";
	cin>>s;
	t= s/v;
	cout<<"waktu yang ditempuh:"<<t;
}
