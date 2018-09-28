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
    int flag=0;


    do
    {
        printf("\nIngrese una opcion:\n");
        printf("1. Mostrar el listado de series\n");
        printf("2. Mostrar el listado de usuarios\n");
        printf("3. Mostrar el listado de Usuarios con el nombre de la serie que ve\n");
        printf("4. Mostrar por cada serie, el nombre de los usuarios que la ven\n");
        printf("5. Editar usuarios/series\n");
        printf("6. Salir\n");

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
            case 5:
                flag=1;
                break;
        }


    }while (respuesta != 5 && respuesta!= 6);

    while(flag==1)
    {
        respuesta=0;

        printf("\nIngrese una opcion:\n");
        printf("1.Alta usuario\n");
        printf("2.Modificar usuario\n");
        printf("3.Baja usuario\n");
        printf("4.Salir\n");

        printf("\nOpcion: ");
        scanf("%d", &respuesta);

        switch(respuesta)
        {
            case 1:
                altaUsuario(listaDeUsuarios, TAMUSUARIO, listaDeSeries, TAMSERIE);
                break;
            case 2:
                modificarUsuario(listaDeUsuarios, TAMUSUARIO, listaDeSeries, TAMSERIE);
                break;
            case 3:
                bajaUsuario(listaDeUsuarios, TAMUSUARIO);
                break;
            case 4:
                flag=0;
                break;


        }
    }

    /*
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
