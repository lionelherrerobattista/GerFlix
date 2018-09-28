#include "usuarioserie.h"
#include <string.h>
#include <stdio.h>


//Lista de usuarios con el nombre de la serie que ven
void mostrarUsuarioConSuSerie(eUsuario usuario[], int cantidadUsuario, eSerie serie[], int cantidadSerie)
{
    int i;//usuario
    int j;//serie
    int k = 1;

    printf("\n%-5s  %-15s","Nro.", "Usuario:");
    printf("%s\n","Serie:");


    //recorro la lista, usuario por usuario
    for(i=0; i<cantidadUsuario; i++)
    {
        //for anidado para buscar los id de las series
        for (j=0; j<cantidadSerie; j++)
        {
            //busco que los id sean iguales
            if(usuario[i].idSerie==serie[j].idSerie && usuario[i].estado==1)
            {
                //tabulado a la derecha
                printf("%-8d%-15s",k++, usuario[i].nombre);
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
    int k;

    printf("\n");
    for (i=0; i<cantidadSeries; i++)
    {
        if (series[i].estado == 1)
        {
            printf("%s:\n", series[i].nombre);

            k=1;
            //flag para no imprimir la serie sin usuarios?
            for (j=0; j<cantidadUsuarios; j++)
            {
                if(series[i].idSerie==usuarios[j].idSerie && usuarios[j].estado==1)
                {
                    printf("%d-%s\n", k++, usuarios[j].nombre);
                }
            }
            printf("\n");
        }

    }
}


void altaUsuario(eUsuario usuario[], int cantidadUsuarios, eSerie series[], int cantidadSeries)
{
    int index;
    int i;


    //busco posición libre y la guardo en index
    for (i=0; i<cantidadUsuarios; i++)
    {
        if (usuario[i].idUsuario==0)
        {
            index=i;
            break;
        }
    }

    //le asigno un id
    usuario[index].idUsuario=index+1000;

    //pido el nombre
    printf("\nIngrese su nombre: ");
    fflush(stdin);
    gets(usuario[index].nombre);
    printf("\nSeries:\n");

    //Muestro las series con el id y le pregunto qué serie quiere ver
    for (i=0; i<cantidadSeries; i++)
    {
        if (series[i].estado==1)
        {
            printf("%d.%s\n",series[i].idSerie, series[i].nombre);
        }
    }
    printf("\nIngrese el id de la serie que desea ver: ");
    scanf("%d", &usuario[index].idSerie);

    //pongo el estado en 1
    usuario[index].estado=1;

    //aviso que el usuario se dio de alta
    printf("\nSe registro con exito. Su id es: %d\n",usuario[index].idUsuario);

}

/*
//Modificar usuario
void modificarUsuario(eUsuario usuario[], int cantidadUsuarios, eSerie series[], int cantidadSeries)
{
    int idUsuario;
    int i;
    int j;

    printf("Ingrese su id de usuario: ");
    scanf("%d", &idUsuario);

    for (i=0; i<cantidadUsuarios; i++)
    {
        if (usuario[i].idUsuario==idUsuario)
        {
            printf("Ingrese su nombre:");
            fflush(stdin);
            gets(usuario[i].nombre);

            printf("\n");

            for (j=0; j<cantidadSeries; j++)
            {
                if (series[j].estado==1)
                {
                    printf("%d.%s\n",series[j].idSerie, series[j].nombre);
                }
            }

            printf("\n");

            printf("Ingrese el id de la serie que desea ver: ");
            scanf("%d", &usuario[i].idSerie);

            printf("\nSe modificó el usuario.\n");

            break;
        }

    }


}
*/
