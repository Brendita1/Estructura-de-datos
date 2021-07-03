#include<iostream>
using namespace std;

int main() { 
    int n; 
    int arc; 
 
    cin>>n; 
    int v[n];
	int frec[n]; 
   
    for(int i=0;i<n;i=i+1){         
        cin>>v[i]; 
        		
    } 
    
    for(int i=0;i<n;i++) 
    for(int j=i+1;j<n;j++) 
    
        if(v[i]<v[j]){     
            arc=v[i]; 
            v[i]=v[j]; 
            v[j]=arc; 
        } 
      
      cout<<v[0];
    for(int i=0;i<n;i++) 
    for(int j=i+1;j<n;j++) 
    
        if(v[i]>v[j]){     
            arc=v[i]; 
            v[i]=v[j]; 
            v[j]=arc; 
        } 
    cout<<v[n-1];
          


}




