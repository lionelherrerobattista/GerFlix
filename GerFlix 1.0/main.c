#include <stdio.h>
#include <stdlib.h>
#include "Usuario.h"
#define TAMSERIE 20
#define TAMUSUARIO 100

int main()
{
    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];

    inicializarSeriesEstado(listaDeSeries, TAMSERIE);
    inicializarSeriesHardCode(listaDeSeries);

    inicializarUsuariosEstado(listaDeUsuarios,TAMUSUARIO);
    inicializarUsuariosHardCode(listaDeUsuarios);

    /*
    //Mostrar lista de series:
    mostrarListaSeries(listaDeSeries, TAMSERIE);

    printf("\n");

    //Mostrar lista de usuarios:
    mostrarListaUsuarios(listaDeUsuarios, TAMUSUARIO);

    //Mostrar usuario con su serie:

    mostrarUsuarioConSuSerie(listaDeUsuarios, TAMUSUARIO, listaDeSeries, TAMSERIE);*/

    //Mostrar, por cada serie, el nombre de los usuarios que la ven:
    altaUsuario(listaDeUsuarios, TAMUSUARIO, listaDeSeries, TAMSERIE);
    printf(" \n");

    mostrarSeriesConUsuarios(listaDeSeries,TAMSERIE,listaDeUsuarios,TAMUSUARIO);
    printf(" \n");

    bajaUsuario(listaDeUsuarios, TAMUSUARIO);
    printf(" \n");

    /*
    modificarUsuario(listaDeUsuarios, TAMUSUARIO, listaDeSeries, TAMSERIE);*/
    mostrarSeriesConUsuarios(listaDeSeries,TAMSERIE,listaDeUsuarios,TAMUSUARIO);



/*  1. Mostrar el listado de series
    2. Mostrar el listado de usuarios
    3. Mostrar el listado de Usuarios con el nombre de la serie que ve
    4. Mostrar por cada serie, el nombre de los usuarios que la ven.
*/




    return 0;
}
