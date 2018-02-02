//Programa para guardar nombres: lista Manejo de punteros
#include<stdio.h>
#include<stdlib.h>//si hay malloc esto es necesraio
int main(){
    int salir;
    char *lista[3];//*punteros a letras
    lista[0]=(char *) malloc(8*sizeof(char));//1 letra ocupa 1 bytes. Se necesitan 8 bytes para la palabra
    lista[1]=(char *) malloc(7*sizeof(char));
    lista[2]=(char *) malloc(9*sizeof(char));
    printf("\nPrimer rey mago: ");
    scanf("%s",lista[0]); //scanf equivalente a cin. Cuando el ordenador lee scanf va a la memoria del ordenador
    printf("\nSegundo rey mago: ");
    scanf("%s",lista[1]);
    printf("\nTercer rey mago: ");
    scanf("%s",lista[2]);
    
    printf("\nLos tres Reyes magos son: ");
    printf("%s, ",lista[0]);  //%s es string
    printf("%s y ",lista[1]);
    printf("%s,",lista[2]);
    
    printf("\nToca cualquier letra: ");
    scanf("%i",&salir);
}

