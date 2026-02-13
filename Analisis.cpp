#include "Analisis.h"
#include <algorithm>

bool contiene(const std::vector<std::string>& listam const std::string& nombre)
{
    return std::find(lista.begin(), lista.end(), nombre) != lista.end();
}

std::vector<PrcoesoRiesgo> analizarProcesos(
    const std::vector<Proceso>& procesos,
    int modo,
    const std::vector<std::string>& sospechososUsuario
)
{
    std::vector<ProcesoRiesgo> riesgos;

    for (conts auto& p : procesos){
        if (contiene(sospechososUsuario, p.nombre)){
            riesgos.push_back({p, "Proceso marcado por el usuario","Alto"});

        }
        if (modo == 2){
            if (p.nombre == "cmd.exe" || p.nombre == "powershell.exe"){
                riesgos.push_back({p, "Uso de consola potencialmente riesgoso", "Medio"});
            }
        }
    }

    return riesgos;
}