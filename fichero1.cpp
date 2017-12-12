//ficheros
#include<iostream>
#include<fstream>
/* propio de los ficheros*/
using namespace std;

int main(){
    //Abrimos el fichero
    ofstream fichero("mi bonito fichero.txt");
    /*Fichero de un fichero de texto*/
    fichero<<"En un lugar de la mancha"<<endl;
    fichero<<"de cuyo nombre no quiero...";
    fichero.close();
    cout<<"Ya esta. Fichero cerrado";
    return 0;
}
