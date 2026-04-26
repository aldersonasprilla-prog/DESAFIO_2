#ifndef EQUIPO_H
#define EQUIPO_H
#include <string>
#include "Jugador.h"
using namespace std;

class Equipo{
public:
    string nombre;
    int ranking, GF, GC, puntos;
    Jugador* jugadores;

    void crear(string n, int r);
};

#endif
