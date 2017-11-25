#include <stdlib.h>
#include <time.h>
#include<iostream>
#include "funcionesblack.h"

int main()
{
 int carta, i,vect[5],puntos=0,punt=0;
 char otra;
     bienvenida();
     ayuda();
     cartas(otra,puntos,punt,vect,carta);
     puntaje();
    return 0;
}
