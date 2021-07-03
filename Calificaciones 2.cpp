#include<iostream>
using namespace std;


int main(void){
	int n,k,aux,i;
	cin>>n;

	int calificaciones[n];
	int cal[101];
	for(i=0;i<101;i++){
		cal[i]=0;
	}
	for(i=0;i<n;i++){
		cin>>calificaciones[i];
	
	}
	for(i=0;i<n;i++)
	{
		calificaciones[cal[i]]++;
	}	
	for(i=0;i<n;i++)
	{
		cout<<calificaciones[i];
	}
		
		
}

