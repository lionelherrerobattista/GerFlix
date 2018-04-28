
#include "Usuario.h"
#include <string.h>
#include <stdio.h>

void inicializarUsuariosEstado(eUsuario usuarios[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        usuarios[i].estado = 0;
    }
}
void inicializarUsuariosHardCode(eUsuario usuarios[])
{


    int id[15] = {1000,1001,1002,1003,1004, 1005,1006,1007,1008,1009, 1010,1011,1012,1013,1014};
    char nombre[][50]= {"Juan","Maria","Pedro","Vanesa","Jose","Luisa","Laura","Marcelo","German","Victoria","Dafne","Antonela","Gisele","Dario","Pedro"};

    int serie[15] = {100,100,101,101,102,100,100,103,101,102,103,101,100,100,101};



    int i;

    for(i=0; i<15; i++)
    {
        usuarios[i].idUsuario=id[i];
        usuarios[i].idSerie=serie[i];
        usuarios[i].estado = 1;
        strcpy(usuarios[i].nombre, nombre[i]);

    }

}

//Lista de usuarios
/*void mostrarListaUsuarios(eUsuario usuario[], int cantidad)
{
    int i;

    for(i=0; i<cantidad; i++)
    {
        if(usuario[i].estado==1)
        {
            printf("%s\n", usuario[i].nombre);
        }
    }

}*/

//Lista de usuarios con el nombre de la serie que ven
void mostrarUsuarioConSuSerie(eUsuario usuario[], int cantidadUsuario, eSerie serie[], int cantidadSerie)
{
   int i;//usuario
   int j;//serie


    for(i=0; i<cantidadUsuario; i++)
    {
        for (j=0; j<cantidadSerie; j++)
        {
            if(usuario[i].idSerie==serie[j].idSerie && usuario[i].estado==1)
            {
                printf("%-10s", usuario[i].nombre);
                printf("%s\n", serie[j].nombre);
                break; //xq es una serie por persona
            }


        }

    }
}

void mostrarSeriesConUsuarios(eSerie series[], int cantidadSeries, eUsuario usuarios[], int cantidadUsuarios)
{
    int i;//series
    int j;//usuarios

    for (i=0; i<cantidadSeries; i++)
    {
        if (series[i].estado == 1)
        {
            printf("%s:\n", series[i].nombre);


            for (j=0; j<cantidadUsuarios; j++)
            {
                if(series[i].idSerie==usuarios[j].idSerie && usuarios[j].estado==1)
                {
                    printf("%s\n", usuarios[j].nombre);
                }
            }
            printf("\n");
        }



    }


}
