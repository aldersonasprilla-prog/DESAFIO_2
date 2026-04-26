#include "Equipo.h"
#include "Memoria.h"

void Equipo::crear(string n, int r){
    nombre = n;
    ranking = r;
    GF = GC = puntos = 0;

    jugadores = new Jugador[26];

    sumarMemoria(sizeof(Equipo));
    sumarMemoria(sizeof(Jugador)*26);

    for(int i=0;i<26;i++){
        jugadores[i].crear(i+1);
        contarIteracion();
    }
}
