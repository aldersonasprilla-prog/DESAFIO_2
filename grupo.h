#ifndef GRUPO_H
#define GRUPO_H
#include "Equipo.h"

class Grupo{
public:
    char letra;
    Equipo* equipos[4];

    void init(char);
    void agregar(int,Equipo*);
    void simular();
    void ordenar();
    void mostrarTabla();
};

#endif
