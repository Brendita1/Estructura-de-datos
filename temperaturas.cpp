#include<iostream>
using namespace std;
void temperaturaMayor(float temperaturas[ ],int n);
void temperaturaMenor(float temperaturas[ ],int n);
void promedio(float temperaturas[ ],int n);
void moda(float temperaturas[ ],int n);
int main()
{
 float  moda,menor,mayor;
 int n;
 cin>>n;
 float temperaturas[n];
  for(int i=0;i<n;i++)
  {
  	cin>>temperaturas[i];
  }	
  temperaturaMayor(temperaturas,n);
 
  temperaturaMenor(temperaturas,n);
  
  promedio(temperaturas,n);
   
  
}
void temperaturaMayor(float temperaturas[ ],int n)
{
	int temperatura[101];
	for(int i=0;i<101;i++){
		temperatura[i]=0;
	}
	
	for(int i=0;i<n;i++)
	{
		temperaturas[temperatura[i]]++;
	}	

		cout<<temperaturas[0];
}
		

	
void temperaturaMenor(float temperaturas[ ],int n)
{
	
	int temperatura[n];
	for(int i=0;i<n;i++){
		temperatura[i]=0;
	}

	for(int i=0;i<n;i++)
	{
		temperaturas[temperatura[i]]++;
	}	
	for(int i=0;i<n;i++)
	{
		cout<<temperaturas[i];
	}
		
		
}
void promedio(float temperaturas[ ], int n)
{
	float promedio;
	float suma=0;
	for(int i=0;i<n;i++)
	{
		suma+=temperaturas[i];
		
	}
	promedio= suma/n;
}
int moda(int temperaturas[ ],int n)
{ int aux;
  float cont[n];
  int arre[n];
  for(int i=0;i<n;i++)
  { 
        aux = arre[i ];
  	for(int j=0;i<n;j++)
	  {
  		if (aux == arre[j])
  		{
  			 cont[i]+=1;
		}
  		
	  }
	  
  }
  temperaturaMenor(cont,n);
  
	return cont[0];	
}
