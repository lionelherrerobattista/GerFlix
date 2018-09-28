#include <stdio.h>
#include <stdlib.h>
#include "usuarioserie.h"
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

    int respuesta = 1;

    do
    {
        printf("\nIngrese una opcion:\n");
        printf("1. Mostrar el listado de series\n");
        printf("2. Mostrar el listado de usuarios\n");
        printf("3. Mostrar el listado de Usuarios con el nombre de la serie que ve\n");
        printf("4. Mostrar por cada serie, el nombre de los usuarios que la ven\n");
        printf("5. Salir\n");

        printf("\nOpcion: ");
        scanf("%d", &respuesta);

        switch (respuesta)
        {
            case 1:
                mostrarListaSeries(listaDeSeries, TAMSERIE);
                break;
            case 2:
                mostrarListaUsuarios(listaDeUsuarios, TAMUSUARIO);
                break;
            case 3:
                mostrarUsuarioConSuSerie(listaDeUsuarios, TAMUSUARIO, listaDeSeries, TAMSERIE);
                break;
            case 4:
                mostrarSeriesConUsuarios(listaDeSeries, TAMSERIE, listaDeUsuarios, TAMUSUARIO);
                break;
        }


    }
    while (respuesta != 5);

    /*
    //Mostrar lista de series:
        mostrarListaSeries(listaDeSeries, TAMSERIE);

    printf("\n");

    //Mostrar lista de usuarios:
    mostrarListaUsuarios(listaDeUsuarios, TAMUSUARIO);

    //Mostrar usuario con su serie:

    mostrarUsuarioConSuSerie(listaDeUsuarios, TAMUSUARIO, listaDeSeries, TAMSERIE);

    //Mostrar, por cada serie, el nombre de los usuarios que la ven:

    altaUsuario(listaDeUsuarios, TAMUSUARIO, listaDeSeries, TAMSERIE);
    printf(" \n");

    mostrarSeriesConUsuarios(listaDeSeries,TAMSERIE,listaDeUsuarios,TAMUSUARIO);
    printf(" \n");

    bajaUsuario(listaDeUsuarios, TAMUSUARIO);
    printf(" \n");*/

    /*
    modificarUsuario(listaDeUsuarios, TAMUSUARIO, listaDeSeries, TAMSERIE);*/
    //mostrarSeriesConUsuarios(listaDeSeries,TAMSERIE,listaDeUsuarios,TAMUSUARIO);



    /*  1. Mostrar el listado de series
        2. Mostrar el listado de usuarios
        3. Mostrar el listado de Usuarios con el nombre de la serie que ve
        4. Mostrar por cada serie, el nombre de los usuarios que la ven.
    */




    return 0;
}
