
#include "Serie.h"

typedef struct
{
    int idUsuario;
    char nombre[50];
    int idSerie;
    int estado;
}eUsuario;

void inicializarUsuariosEstado(eUsuario[], int);
void inicializarUsuariosHardCode(eUsuario[]);
void mostrarListaUsuarios(eUsuario[], int);
void mostrarSeriesConUsuarios(eSerie[], int, eUsuario[], int);
void altaUsuario(eUsuario[], int, eSerie[], int);

