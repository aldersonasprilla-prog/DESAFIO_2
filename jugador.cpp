#include "Jugador.h"

void Jugador::crear(int n){
    numero = n;
    goles = 0;
}
void Jugador::anotarGol(){ goles++; }
