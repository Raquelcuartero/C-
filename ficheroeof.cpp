//lectura hasta el final
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string linea;
    int salir;
    ifstream fichero("Tufichero.txt");
    if(fichero.fail()==1){
       cout<<"ERROR.No existe la ruta";
       cin>>salir;
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
