#ifndef ANALISIS_H
#define ANALISIS_H

#include "Procesos.h"
#include <vector>
#include <string>

using namespace std;

struct ProcesoRiesgo{
    Proceso proceso;
    string razon;
    string nivel;
};


vector<ProcesoRiesgo> analizarProcesos(
    const vector<Proceso>& procesos,
    int modo_a,
    const vector<string>& sospechososUsuario
);

#endif