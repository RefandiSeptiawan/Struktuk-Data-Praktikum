#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

main(){
	int y,w,ya=0,p,p2=0;
	float rata,sd,v;
	
	cout<<"Masukan banyaknya data = ";cin>>w;
	int a[w];
	
	for(y=0;y<w;y++){
		cout<<"Masukkan data ke-"<<y+1<<" = ";cin>>a[w];
		ya=ya+a[w];	
		p2=p2+pow(a[w],2);
	}
	rata=ya/w;
	p=pow(ya,2);
	v=(w*p2-p)/(w*(w-1));
	sd=sqrt(v);
	cout<<endl;
	cout<<"Rata-rata = "<<rata<<endl;
	cout<<"Varian = "<<v<<endl;
	cout<<"Standar Deviasi = "<<sd;

	getch();
	return 0;
}
