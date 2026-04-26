#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Torneo.h"
#include "Memoria.h"

using namespace std;

int main(){

    srand(time(0));

    Torneo t;

    int op;

    do{
        cout<<"\n1.Cargar\n2.Bombos\n3.Grupos\n4.Simular\n5.Metricas\n0.Salir\n";
        cin>>op;

        switch(op){
        case 1: t.cargar(); break;
        case 2: t.crearBombos(); break;
        case 3: t.crearGrupos(); break;
        case 4: t.simular(); break;
        case 5: mostrarMetricas(); break;
        }

    }while(op!=0);

    return 0;
}
