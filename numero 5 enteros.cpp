//Vamos a aprender a hacer arrays
using namespace std;
/* Esto hace no repetir std siempre*/ 
/* vamos a hacer un programa que guarde 5 numeros enteros*/

#include<iostream>

int main(){
    int javi[5];
    int cont;
    int salir;
/*Esto significa que en la memoria del ordenador se reservan 5 posiciones para 
5 numeros*/
     for(cont=0;cont<5;cont++){
         cout<<"Dime un numero cari:";
         cin>>javi[cont];
     }
     cout<<"Mira mi bonito vector relleno: ";
     for(cont=0;cont<5;cont++){
         cout<< "javi["<<cont<<"]="<<javi[cont]<<endl;
/* << se utiliza como las comas en phyton*/ /*endl cambio de linea*/
     }
     cout<<"toca cualquier letra: ";
     cin>>salir;
     return 0;
}       
