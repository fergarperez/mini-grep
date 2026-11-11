# minigrep-c

Una implementación minimalista y eficiente de la utilidad de línea de comandos `grep` escrita en C puro. Diseñada para buscar coincidencias de texto exactas en archivos línea a línea con una huella de memoria ultra baja.

## 🚀 Características

- **Sin dependencias externas:** Desarrollado utilizando únicamente la librería estándar de C (`stdio.h`, `string.h`).
- **Eficiencia de memoria:** Lee el archivo línea por línea mediante un búfer de tamaño fijo (1 KB), evitando cargar archivos completos en RAM.
- **Validación de errores:** Manejo de argumentos por consola e inspección de punteros de archivos.

## 🛠️ Requisitos e Instalación

Necesitas un compilador de C como `gcc` o `g++`.

### 1. Clonar el repositorio

```bash
git clone [https://github.com/tu-usuario/minigrep-c.git](https://github.com/tu-usuario/minigrep-c.git)
cd minigrep-c
```
