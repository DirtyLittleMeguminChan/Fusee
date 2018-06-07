#ifdef LAUNCHER_H
#define LAUNCHER_H 

#include <stdio.h>
#include <stdlib.h>

typedef struct designVariables
{
  float Coef_trainee;
  float Surf_prise_air;
  int Rayon_tuyere;
  float Masse_vide;
  float Volume_reservoir;

}DesignVariables;

typedef struct launchVariable
{
 float Init_volume_eau;
 float Pression_init_eau;
 
}



#endif
