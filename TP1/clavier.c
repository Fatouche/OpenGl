#include <gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdio.h>
#include "geometrie.h"
#include "graphique.h"
#include "globales.h"
#include "clavier.h"
#include "souris.h"

void gestionClavier(unsigned char touche, int x, int y){
  switch(touche){
  case 43 :
    taillePoint = taillePoint + 1;
    printf("taille point : %f",taillePoint);
    glutPostRedisplay();
    break;

  case 45 :
    if(taillePoint <= 1){
    taillePoint = taillePoint;
    printf("taille point : %f",taillePoint);
    break;
    }else{
      taillePoint = taillePoint -1;
      printf("taille point : %f",taillePoint);
      glutPostRedisplay();
      break;
    }

  case GLUT_KEY_DOWN :
    printf("%d %d \n",x,y);
    pointEcran.x = (0.0);
    pointEcran.y = (-0.1);
    break;

  case GLUT_KEY_UP :
    printf("%d %d \n",x,y);
    pointEcran.x = (0.0);
    pointEcran.y = (0.1);
    break;

  case GLUT_KEY_LEFT :
    printf("%d %d \n",x,y);
    pointEcran.x = (-0.1);
    pointEcran.y = (0.0);
    break;

 case GLUT_KEY_RIGHT :
    printf("%d %d \n",x,y);
    pointEcran.x = (0.1);
    pointEcran.y = (0.0);
    break;  
  }
}
