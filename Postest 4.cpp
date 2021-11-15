#include <iostream> 
#include <cstdio> 
using namespace std; 
 
int main(){    

	int y;  
	cin>>y;     
	int a[y];  
	int juml;    
	
	for(int i=0; i<y; i++){      
		scanf("%d",&a[i]);    
 		printf("%d\n",a[i]);    
 		juml +=a[i];  
 	} 
	  
 	juml = juml/y;  
 	cout<<"Rata-Rata: "<< juml;   
 } 
