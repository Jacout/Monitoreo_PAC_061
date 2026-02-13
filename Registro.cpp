#include "Registro.h"
#include <fstream>
#include <ctime>

void guardarRegistro(
    const std::string& archivo,
    const std::vector<Proceso>& procesos,
    const std::vector<ProcesoRiesgo>& riesgos
) {

    std::ofstream out(archivo);

    if (!out.is_open()) {
        throw std::runtime_error("No se pudo abrir el archivo.");
    }

    time_t ahora = time(0);
    out << "Fecha y hora: " << ctime(&ahora) << "\n";

    out << "Total procesos: " << procesos.size() << "\n\n";

    out << "=== Lista de Procesos ===\n";
    for (const auto& p : procesos) {
        out << "PID: " << p.pid
            << " | Nombre: " << p.nombre
            << " | Memoria: " << p.memoria << "\n";
    }

    out << "\n=== Procesos Sospechosos ===\n";
    for (const auto& r : riesgos) {
        out << "PID: " << r.proceso.pid
            << " | Nombre: " << r.proceso.nombre
            << " | Nivel: " << r.nivel
            << " | Razón: " << r.razon << "\n";
    }

    out.close();
}
