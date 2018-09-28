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
void mostrarListaUsuarios(eUsuario usuario[], int cantidad)
{
    int i;
    int k=1;

    printf("\nUsuarios:\n");

    for(i=0; i<cantidad; i++)
    {
        if(usuario[i].estado==1)
        {
            printf("%d--%s\n", k++, usuario[i].nombre);
        }
    }

}


//Dar de baja usuarios
void bajaUsuario(eUsuario usuario[], int cantidadUsuarios)
{
    int idUsuario;
    int i;
    char respuesta= 'n';

    //pido el id del usuario
    printf("\nIngrese el id del usuario que desea dar de baja: ");
    scanf("%d", &idUsuario);

    printf("Esta seguro que quiere darse de baja? (s/n)\n");
    fflush(stdin);
    scanf("%c", &respuesta);

    if(respuesta=='s')
    {
        //busco el id y cambio el estado a 0 (baja)
        for (i=0; i<cantidadUsuarios; i++)
        {
            if (usuario[i].idUsuario==idUsuario)
            {
                usuario[i].estado=0;
                break;
            }
        }

        printf("Se dio de baja el usuario.\n");
    }


}
