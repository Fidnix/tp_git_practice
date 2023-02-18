
# Sobre esto

Tan solo es un proyecto random para practicar C++ y Git. No tiene un objetivo claro xd

[Enlace al notion de esto](https://www.notion.so/TP-Git-7a4dcc386ec947aa96892afaa07a06c3?pvs=4)

# Instalación

Para tener el proyecto y poder usarlo, primero necesitarás descargar MinGw que es un compilador de C++ para windows

Luego de instalarlo deberás escribir el siguiente comando en tu consola para clonar el repositorio:

```bash
git clone https://github.com/Fidnix/tp_git_practice
```

# Build

Para compilar el trabajo necesitarás usar la siguiente estructura de comando:

```bash
gcc -g [file1.cpp] [file2.cpp] [...] -o build/build.exe -lstdc++
```

Todo el comando es necesario. Actualmente el comando que puedes copiar para compilarlo es:

```bash
gcc -g src/main.cpp src/main_display/main_display.cpp src/maths/maths.cpp -o build/build.exe -lstdc++
```

> Si has hechos cambios en el repositorio añadiendo archivos .cpp, por favor actualiza el nuevo comando en este archivo

Para ejecutar el proyecto tan solo usa:
```bash
./build/build.exe
```
