#include <iostream> 
using namespace std; 
int main() { 
    int n; 
    int arc; 
    int mediana;
    cout<<"Ingresa cantidad de calificaciones"<<endl; 
    cin>>n; 
    int v[n]; 
    cout<<"Ingrese calificacion:: "<<endl; 
    for(int i=0;i<n;i=i+1){         
        cin>>v[i]; 
        cout<<" "<<endl;		
    } 
    
    for(int i=0;i<n;i++) 
    for(int j=i+1;j<n;j++) 
    
        if(v[i]>v[j]){     
            arc=v[i]; 
            v[i]=v[j]; 
            v[j]=arc; 
        } 
    
    cout<<" "<<endl;         
  
    for (int i=0;i<n;i++)
	{ 
         
        cout<<v[i]<<endl; 
     
    } 
      if(n%2==0)
    {
    	mediana=n/2;
    	cout<<"La mediana es "<<v[mediana-1];
	}
	else
	{
		mediana=n/2;
		cout<<"La mediana es "<<v[mediana];
	}
    return 0; 
} 

