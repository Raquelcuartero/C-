//Este programa trata sobre estructuras 
#include<iostream>
using namespace std;

int main(){
    //declaro un nuevo tipo de dato
    struct persona {
       string nombre;
       int edad;
       char colorPelo;
    };
    //Declaro una variable tipo persona
    persona amigo1;
    persona amigo2;
    persona amigo3;
    cout<<"Como se llama tu amigo?: ";
    cin>>amigo1.nombre;
    cout<<"Cuantos años tiene?: ";
    cin>>amigo1.edad;
    cout<<"De que color es el pelo?: ";
    cin>>amigo1.colorPelo;
    
    

}
