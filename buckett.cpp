#include <iostream>

using namespace std;

int main(void){
	int n,k,aux,i;
	cin>>n;
	if(n<1 || n>10000){
		while(n<1 || n>10000){
		cin>>n;
	}
	}
	int arreglo[n];
	int edad[101];
	for(i=0;i<101;i++){
		edad[i]=0;
	}
	for(i=0;i<n;i++){
		cin>>arreglo[i];
		if(arreglo[i]<0 || arreglo[i]>100000){
		while(arreglo[i]<0 || arreglo[i]>100000){
		cin>>arreglo[i];
	}
	}
	}
	for(i=0;i<n;i++){
		edad[arreglo[i]]++;
	}	
	cin>>k;
	for(i=0;i<k;i++){
		cin>>aux;
		cout<<edad[aux]<<endl;
	}
}

