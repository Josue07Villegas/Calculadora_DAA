# Calculadora en C (Calculadora_DAA)

¡Bienvenido al repositorio de **Calculadora_DAA**! Este es un proyecto modular en lenguaje C que implementa una calculadora básica por consola utilizando una organización estructurada en archivos de cabecera (`.h`) independientes para cada operación matemática.

El repositorio ya cuenta con el binario precompilado listo para ser utilizado en entornos compatibles.

## 📁 Estructura del Proyecto

El repositorio está organizado con los siguientes archivos fundamentales:

* `calculadora`: Archivo ejecutable ya compilado listo para correr en consola.
* `calculadora.c`: Archivo principal que contiene el flujo de control, la función `main()` y el menú interactivo para el usuario.
* `suma.h`: Cabecera que declara/define la función para realizar adiciones (`suma()`).
* `resta.h`: Cabecera que declara/define la función para realizar sustracciones (`resta()`).
* `multiplicacion.h`: Cabecera que declara/define la función para realizar multiplicaciones (`multiplicacion()`).
* `division.h`: Cabecera que declara/define la función para realizar divisiones (`division()`).

---

## 🚀 Características y Funcionamiento

El flujo del programa principal (`calculadora.c`) despliega un menú interactivo en la terminal mediante la función `printf`. Utilizando una estructura de control condicional `switch-case`, el sistema redirige al usuario hacia la operación seleccionada según su entrada:

1.  **Sumar**: Llama a la función `suma()`
2.  **Restar**: Llama a la función `resta()`
3.  **Multiplicar**: Llama a la función `multiplicacion()`
4.  **Dividir**: Llama a la función `division()`

---
## 🛠️ Requisitos Previos

Para poder compilar y ejecutar este código localmente, es necesario disponer de un entorno de desarrollo para C o un compilador estándar como **GCC (GNU Compiler Collection)**.

### Instalar GCC

* **Linux (Ubuntu/Debian):**
    ```bash
    sudo apt update
    sudo apt install build-essential
    ```
* **macOS:**
    ```bash
    brew install gcc
    ```
* **Windows:**
    Se recomienda configurar un entorno como **MinGW-w64** o a través de **MSYS2**.

---

## 💻 Ejecución Directa

Dado que el proyecto ya incluye el archivo ejecutable (`calculadora`), no necesitas compilar el código fuente desde cero para probarlo. 

Abre tu terminal dentro de la carpeta del proyecto y ejecuta el siguiente comando según tu sistema operativo compatible:

* **Linux / macOS:**
    ```bash
    ./calculadora
    ```

> ⚠️ **Nota:** Si la terminal te deniega el acceso por falta de permisos de ejecución en sistemas Unix, otorga los permisos correspondientes ejecutando: `chmod +x calculadora` y luego vuelve a lanzarlo.

---

## 🛠️ Recompilación (Opcional)

Si realizas cambios en el código fuente de cualquiera de las cabeceras o en el archivo principal y deseas regenerar el ejecutable, necesitas tener instalado un compilador como **GCC**.

### Comando para compilar:
```bash
gcc calculadora.c -o calculadora
