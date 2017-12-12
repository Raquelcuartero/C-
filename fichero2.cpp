#include<iostream>
#include<fstream>

using namespace std;
int main(){
    string mensaje;
    int salir;
    ifstream fichero("mi bonito fichero.txt");
    fichero>>mensaje;
    cout<<mensaje<<endl;
    fichero.close(); //no es obligatorio esto
    cin>>salir;
    return 0;
}
