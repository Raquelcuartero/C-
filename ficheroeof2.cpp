//lectura hasta el final
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    string linea;
    string nombre;
    int salir;
    cout<<"Dime la ruta del fichero";
    getline(cin,nombre);
    ifstream fichero(nombre.c_str());
    if(fichero.fail()==1){
       cout<<"ERROR.No existe la ruta";
       exit(1);
    }
    while(fichero.eof()==0){
      getline(fichero,linea);
      cout<<linea<<endl;
    }
    fichero.close();
    cin>>salir;
    return 0;
}
