#include "../biblioteca/pr1-ula.h"

int main()
{
    int id = conectarRobot(ROBOT);
  
    hablarRobot(id, "Hola mundo");
  
    desconectarRobot(id);
}