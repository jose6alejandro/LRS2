#include "../biblioteca/pr1-ula.h"

int main()
{
    int id = conectarRobot(ROBOT);
  
    while(enviarMensaje(id));
  
    desconectarRobot(id);
}
