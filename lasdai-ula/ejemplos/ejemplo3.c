#include "../biblioteca/pr1-ula.h"

int main()
{
    info inf = iniciarRobot();
    int id = conectarRobot(ROBOT);

    while(recibirMensaje(inf.t, id));
    
    finalizarRobot(inf);
    desconectarRobot(id);
}
