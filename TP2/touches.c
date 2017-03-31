#include <GL/gl.h>
#include <GL/glu.h>
#include <glut.h>
#include "touches.h"

void gerer_clavier(unsigned char touche,int x,int y){
  switch(touche){
  case 43 :
    trans_axeZ = trans_axeZ + 1.0;
    break;
  case 45:
    trans_axeZ = trans_axeZ - 1.0;
  case 52 :
    angle_rotY = angle_rotY - 10;
    break;
  case 54 :
    angle_rotY = angle_rotY + 10;
    break;
  case 50 :
    angle_rotX = angle_rotX - 10;
    break;
  case 56 :
    angle_rotX = angle_rotX + 10;
    break;
  }
  glutPostRedisplay();
}

void specialClavier(unsigned char touche, int x,int y){
  switch(touche){
  case GLUT_KEY_UP :
    ky = ky *2 ;
    break;
  case GLUT_KEY_DOWN :
    ky = ky/2 ;
    break;
  case GLUT_KEY_LEFT :
    kx = kx/2 ;
    break;
  case GLUT_KEY_RIGHT :
    kx = kx *2;
    break;
  case GLUT_KEY_PAGE_DOWN :
    kz = kz/2 ;
    break;
  case GLUT_KEY_PAGE_UP :
    kz = kz*2;
    break;
  }
   glutPostRedisplay();
}
