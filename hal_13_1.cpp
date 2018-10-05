#include <iostream>
#include <conio.h>

using namespace std;

main(){
	int u,p;
	float rata,ta;
	
	cout<<"Masukan jumlah angka yang ingin dirata-rata kan = ";cin>>p;
	cout<<"-------------------------------------------------"<<endl;
	int a[p];
	
	for(u=0;u<p;u++){
		cout<<"Masukkan angka indeks ke-"<<1+u<<" = ";cin>>a[p];
		ta=ta+a[p];
	}
	cout<<endl;
	rata=ta/p;
	cout<<"Rata-rata dari angka-angka diatas = "<<rata;
	
	getch();
	return 0;
}
