#include <stdio.h>
#include <stdlib.h>
#include "Usuario.h"
#define TAMSERIE 20
#define TAMUSUARIO 100

int main()
{
    int i;
    int j;
    int index;

    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];

    inicializarSeriesEstado(listaDeSeries, TAMSERIE);
    inicializarSeriesHardCode(listaDeSeries);

    inicializarUsuariosEstado(listaDeUsuarios,TAMUSUARIO);
    inicializarUsuariosHardCode(listaDeUsuarios);

    for (i=0; i<5; i++)
    {
      printf("%d %10s %10s %10d %10d\n", listaDeSeries[i].idSerie, listaDeSeries[i].nombre, listaDeSeries[i].genero, listaDeSeries[i].cantidadTemporadas, listaDeSeries[i].estado);
    }

    printf(" \n");

    for (i=0; i<15; i++)
    {

      index=listaDeUsuarios[i].idSerie;

      for (j=0; j<5; j++)
      {
          if (index == listaDeSeries[j].idSerie)
          {
              serie=listaDeSeries==
          }

      }



      printf("%d %10s %10d %10d\n", listaDeUsuarios[i].idUsuario, listaDeUsuarios[i].nombre, listaDeUsuarios[i].idSerie, listaDeUsuarios[i].estado);
    }


/*  1. Mostrar el listado de series
    2. Mostrar el listado de usuarios
    3. Mostrar el listado de Usuarios con el nombre de la serie que ve
    4. Mostrar por cada serie, el nombre de los usuarios que la ven.
*/




    return 0;
}
