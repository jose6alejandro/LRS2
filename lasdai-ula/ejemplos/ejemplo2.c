#include "../biblioteca/pr1-ula.h"

int main()
{

    int id = conectarRobot(ROBOT); 
  
    int entrada = recibirRobot(id);
  
    if (entrada == 1)
    {
        hablarRobot(id, "UNO");
    }
    else if(entrada == 2)
    {
        hablarRobot(id, "DOS");
    }
    else if (entrada == 3)
    {
        hablarRobot(id, "TRES");
    }

    desconectarRobot(id);
}
