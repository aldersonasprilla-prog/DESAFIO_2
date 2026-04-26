#ifndef PARTIDO_H
#define PARTIDO_H
#include "Equipo.h"

class Partido{
public:
    Equipo* e1;
    Equipo* e2;
    int g1,g2;

    void configurar(Equipo*,Equipo*);
    void simular();
    Equipo* ganador();
    void mostrar();
};

#endif
