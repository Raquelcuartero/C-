// Matrices
#include<iostream>
using namespace std;
int main(){
    /*como se nombra la matriz*/
    int matriz [3] [3];
    int fila,col;
    int salir;
    for(fila=0;fila<3;fila++){
        for(col=0;col<3;col++){
          cout<<"matriz["<<fila<<"]["<<col<<"]";
          cin>>matriz[fila][col];
          }
    }
/* si se quiere poner en otra linea <<endl>>*/
cout<<endl<<"Hemos acabado";
cout<<endl<<"Toca cualquier letra";
cin>>salir;
return 0;
}
         
          
