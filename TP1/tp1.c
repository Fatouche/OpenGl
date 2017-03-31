#include <gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdio.h>
#include "geometrie.h"
#include "souris.h"
#include "graphique.h"
#include "globales.h"
#include "clavier.h"
#include "menu.h"

float PI = 3.1415926535897932384626433832795 ;
float taillePoint = 1.0 ;
point2D pointEcran;

int main(int argc,char *argv[]){
  printf("oui de base \n");
  glutInit(&argc, argv);
  glutInitWindowSize(256,256);
  glutInitWindowPosition(100,100);
  glutCreateWindow(argv[0]);
  glutDisplayFunc(dessiner);

  glutCreateMenu(gerer_menu);
  glutAddMenuEntry("effacer", 1);
  glutAddMenuEntry("quitter", 2);
  glutAttachMenu(GLUT_MIDDLE_BUTTON);
  
  glutKeyboardFunc(gestionClavier);
  glutMouseFunc(gestionSouris);
  
  glutMainLoop();
}
