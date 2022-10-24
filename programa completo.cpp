#include <iostream> 
using namespace std;

main(){
//int i=0; 
for (int i=0;i<10;i++){ 
cout<<i<<endl;
}
for (int i=0;i<10;i=i+2){ 
cout<<i<<endl;
}
for (int i=10;i>0;i--){ 
cout<<i<<endl;

}
for (int i=0;i<10;i++){ 
if(i==5){ 
cout<<"i: "<<i<<endl; 
continue; 

} 
cout<<i<<endl;
}
for (int i=0;i<10;i++){ 
if(i==5){ 
cout<<"i: "<<i<<endl; 
break; 
} 
cout<<i<<endl;
}
 
 
// int 4 bytes  	
int datos[]={10,40,100,250};  
  for (int i :datos){  	
  cout<<i<<endl;
 } 
    
    /*
    int tama = (sizeof(datos)/sizeof(datos[0]));
    
    for (int i=0;i<tama;i++){     
	cout<<datos[i]<<endl;
}
*/ 
int inicio=0,fin=0,res=0; 
cout <<"Ingrese tabla inicial:"; 
cin>>inicio; 
cout <<"Ingrese tabla final:"; 
cin>>fin;
for (int rango=inicio; rango<=fin;rango++){ 
cout<<"tabla del"<<rango<<endl; 
for (int i=1;i<=10;i++){ 
res =rango * i;
	 	cout<<rango<<" X "<< i <<" = "<<res<<endl;
} cout<<endl; 
}
          int i = 5; while(i<5){ 
		  cout<<"while: "<<i<<endl; 
		  i++;
}

char respuesta= 's';
while(respuesta=='s' || respuesta=='S' ){ 
cout<<"desea ingresar otro valor (s/n) "; 
cin>>respuesta; 
} 
   
system("pause");

} 


