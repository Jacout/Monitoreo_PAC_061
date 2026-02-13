# Proyecto: Monitor de Procesos en C++
## Descripción general
Este proyecto implementa un monitor real de procesos del sistema en C++. El programa
obtiene la lista de procesos activos, analiza cuáles podrían representar un riesgo y
registra los resultados en un archivo. El proyecto está dividido en módulos para la
obtención, análisis y registro de información. Basando en la información que arroja
el sistema y un ardua investigación, enfocado en SO Windows.
## Integrantes del equipo
- Jacob Misael Rodriguez Morales — Jacout
- Matthew Rosas Lailson — SuperCapish
- Cruz Eduardo Patiño Zuñiga — PapiCruz
- Jahir Guadalupe Salazar Esparza — Naizard
## Instrucciones de compilación y ejecución
### Requisitos
- Sistema operativo: [Windows/Linux/macOS]
- Compilador: g++, clang o MSVC
- Librerías utilizadas: Se utilizo tasklist usando popen()
### Compilación
```cmd or PowerShell
g++ main.cpp Procesos.cpp Analisis.cpp Registro.cpp -o monitor
```
Ejecución
```
monitor
```
### Entrada esperada
Modo de análisis (1 o 2)
Nombre del archivo de salida
Lista opcional de procesos sospechosos
### Enfoque técnico
Este proyecto utiliza popen() con tasklist para obtener procesos reales del sistema operativo Windows, asi para empezar a trabajar, principalmente para tener ese primer
contacto y trabajar con procesos reales y como se obtienen.
### Criterios para procesos sospechosos
Los criterios principales que se trabajaron fueron los procesos de consola o terminal ya sea en cmd o PowerShell.
###Salida generada
El archivo incluye:
Fecha y hora del análisis
Lista completa de procesos
Procesos sospechosos con justificación
### Referencias
https://www.man7.org/linux/man-pages/man3/popen.3.html
https://learn.microsoft.com/en-us/cpp/c-runtime-library/reference/popen-wpopen?view=msvc-170
https://github.com/MicrosoftDocs/cpp-docs/blob/main/docs/c-runtime-library/reference/popen-wpopen.md
