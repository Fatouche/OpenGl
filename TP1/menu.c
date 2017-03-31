#include <gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdio.h>
#include "geometrie.h"
#include "souris.h"
#include "clavier.h"
#include "graphique.h"
#include "globales.h"


void gerer_menu(int cle){

switch(cle){
 case 1:
  glClear(GL_COLOR_BUFFER_BIT);
  break;

 case 2:
    glutLeaveMainLoop();
    break;
}
}
