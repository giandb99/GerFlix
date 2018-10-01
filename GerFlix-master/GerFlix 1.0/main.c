#include <stdio.h>
#include <stdlib.h>
#include "Usuario.h"
#define TAMSERIE 20
#define TAMUSUARIO 100
#define CANTIDAD 5
#define USUARIOS 15

int main()
{
    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];

    inicializarSeriesEstado(listaDeSeries, TAMSERIE);
    inicializarSeriesHardCode(listaDeSeries);

    inicializarUsuariosEstado(listaDeUsuarios,TAMUSUARIO);
    inicializarUsuariosHardCode(listaDeUsuarios);

    //mostrarListaSeries(listaDeSeries,CANTIDAD);
    //mostrarListaUsuarios(listaDeUsuarios,USUARIOS);

    mostrarUsuarioConSuSerie(listaDeUsuarios, USUARIOS, listaDeSeries, CANTIDAD);
/*  1. Mostrar el listado de series
    2. Mostrar el listado de usuarios
    3. Mostrar el listado de Usuarios con el nombre de la serie que ve
    4. Mostrar por cada serie, el nombre de los usuarios que la ven.
*/




    return 0;
}
