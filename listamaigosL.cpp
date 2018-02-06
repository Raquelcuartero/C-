#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int medida(char aux[]){
    int l=0;
    while(aux[l]!='\0'){
          l++;
    }
    return l;
}

int main(){
    int salir;
    char *lista[5];//*punteros a letras
    char aux[15];
    int cont;
    int l;
    for(cont=0;cont<5;cont++){
        printf("\nNombre amigo %i: ",cont); // %i de valor, lo que viene son los amigos luego
        scanf("%s",aux);  //aux vector de 15 letras donde se guarda provisionalmente el nombre del amigo    
        l=medida(aux);
        printf(" %i\n",l);
        lista[cont]=(char *) malloc(l*sizeof(char));                
        strcpy(lista[cont],aux); //te lo copia entero stringcopy
    }                      
    for(cont=0;cont<5;cont++){
        printf("\n%s",lista[cont]);
    }
    printf("\nToca cualquier letra: ");
    scanf("%i",&salir);
}

