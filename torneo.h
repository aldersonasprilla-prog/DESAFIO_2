#ifndef TORNEO_H
#define TORNEO_H
#include "Grupo.h"

class Torneo{
public:
    Equipo* equipos;
    Equipo** bombos[4];
    Grupo grupos[12];

    void cargar();
    void crearBombos();
    void crearGrupos();
    void simular();
};

#endif
