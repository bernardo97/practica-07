#include "funcionesblack.h"

void bienvenida(){
 	printf("\t\tBIENVENIDO AL CASINO ROYALE\n");
 }
 void ayuda(){
 	printf("Primero tienes que esperar a que te den tus 2 cartas, ya teniendolas revisas si tienes 21 puntos si tienes menos puedes pedir otra carta,y llegar a 21 si te pasas pierdes,si llega a 21 ganas");
 }
 void cartas(char otra,int puntos,int punt,int *vect,int carta){
    int i;
    char s,S,N,n;
	srand(time(NULL));
    
	
    for(i= 1; i <= 5; i++)
    {
         vect[i]= 1 + rand() % (12 - 1);
    }
    
	printf("Repartiendo cartas\n");
    printf("\nTus cartas son: [%d],[%d]\n",vect[1],vect[2]);
    if(puntos<21){
		printf("Puedes pedir otra carta\n");
		printf("Quieres una? s-si n-no\t");
		scanf("%c",&otra);
		getchar();
		if(otra==n || otra==N){
			printf("Cuenta tus cartas\n");
			puntos=vect[1]+vect[2];
		}
	if(otra==s || otra==S){
	for(i=1; i <= 5; i++){
         vect[i]= 1 + rand() % (12 - 1);
    		}
    printf("Tu carta es: [%d]\n",vect[3]);
		}
		punt+=puntos+vect[3];
	}
	printf("Tu puntaje es: %d\n",punt);
 }
 void puntaje(){
 	int puntos;
 	if(puntos==21){
		printf("Ya ganaste Felicidades!!\n");
		printf("Tu puntaje es: %d\n",puntos);
	}
	if(puntos>21){
		printf("Perdiste");
		printf("Tu puntaje es: %d\n",puntos);
	}
	
 }
