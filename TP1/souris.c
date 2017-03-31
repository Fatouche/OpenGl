#include <gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdio.h>
#include "geometrie.h"
#include "souris.h"
#include "clavier.h"
#include "graphique.h"
#include "globales.h"

void gestionSouris(int bouton, int etat, int x,int y){
  if(bouton == GLUT_LEFT_BUTTON){
    if(etat == GLUT_UP){
      printf("%d %d \n", x,y);
      pointEcran.x = x/128 ;
      pointEcran.y = y/128 ;
    }
  }
  printf("%f , %f \n", pointEcran.x, pointEcran.y);
  glutPostRedisplay();
}
