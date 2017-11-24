/*Este prograama  sirve para leer 10 numeros enteros y devolver
el mayor*/
#include<iostream>

int main(){
    //Definicion de variable
    int cont;
    int numero;
    int mayor;
    int salir;
    
    //Bucle tipo for*cont=cont+1 es lo mismo que poner cont++
    //for(cont=10;cont>=0;cont--{....
    std::cout<<"dime un numero entero>>";
    std::cin>>numero;
    mayor=numero;
    for(cont=1;cont<10;cont=cont++){
          std::cout<<"dime un numero entero>>";
          std::cin>>numero;
          if(numero>mayor){
            mayor=numero;
          }
    }
    std::cout<<"El mayor es: "<<mayor;
    std::cout<<"Toca cualquier letra";
    std::cin>>salir;
    return 0;
}
          
    
