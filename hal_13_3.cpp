#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
main(){
	char kata[20];
	int t,u,ap;
	cout<<"Masukan kata = ";cin>>kata;
	cout<<endl;
	ap=strlen(kata);
	
	for(t=ap;t>=0;t--){
		for(u=0;u<t;u++){
			cout<<kata[u];
		}
	cout<<endl;
	}
}
