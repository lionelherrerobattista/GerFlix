#include "usuarioserie.h"
#include <string.h>
#include <stdio.h>


//Lista de usuarios con el nombre de la serie que ven
void mostrarUsuarioConSuSerie(eUsuario usuario[], int cantidadUsuario, eSerie serie[], int cantidadSerie)
{
    int i;//usuario
    int j;//serie

    printf("\n%-10s", "Usuario:");
    printf("Serie:\n");


    //recorro la lista, usuario por usuario
    for(i=0; i<cantidadUsuario; i++)
    {
        //for anidado para buscar los id de las series
        for (j=0; j<cantidadSerie; j++)
        {
            //busco que los id sean iguales
            if(usuario[i].idSerie==serie[j].idSerie && usuario[i].estado==1)
            {
                printf("%-10s", usuario[i].nombre);
                printf("%s\n", serie[j].nombre);
                break; //xq es una serie por persona
            }


        }

    }
}

//Series y usuarios:
void mostrarSeriesConUsuarios(eSerie series[], int cantidadSeries, eUsuario usuarios[], int cantidadUsuarios)
{
    int i;//series
    int j;//usuarios

    printf("\n");
    for (i=0; i<cantidadSeries; i++)
    {
        if (series[i].estado == 1)
        {
            printf("%s:\n", series[i].nombre);


            for (j=0; j<cantidadUsuarios; j++)
            {
                if(series[i].idSerie==usuarios[j].idSerie && usuarios[j].estado==1)
                {
                    printf("-%s\n", usuarios[j].nombre);
                }
            }
            printf("\n");
        }

    }
}
