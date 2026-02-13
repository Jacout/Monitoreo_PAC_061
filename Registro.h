#ifndef REGISTRO_H
#define REGISTRO_H

#include "Procesos.h"
#include "Analisis.h"
#include <vector>
#include <string>

void guardarRegistro(
    const std::string& archivo,
    const std::vector<Proceso>& procesos,
    const std::vector<ProcesoRiesgo>& riesgos
);

#endif
