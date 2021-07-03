#include<iostream>
using namespace std;


int main(void){
	int n,i;
	cin>>n;	
		
while(n>=1 && n<=100000)
{
	int edades[n];
	int edad[n];
	for(i=0;i<n;i++){
		edad[i]=0;
	}
	for(i=0;i<n;i++){
		cin>>edades[i];
	
	}
	for(i=0;i<n;i++)
	{
		edades[edad[i]]++;
	}	
	for(i=0;i<n;i++)
	{
		cout<<edades[i];
	}
		
}

}





