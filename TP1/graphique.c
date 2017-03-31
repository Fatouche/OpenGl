#include <gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdio.h>
#include <math.h>
#include "geometrie.h"
#include "globales.h"

void dessiner(void){
  glClearColor(0.75, 0.25, 0.25, 0.75);
  glClear(GL_COLOR_BUFFER_BIT);
  glFlush();
  glPointSize(taillePoint);
  glBegin(GL_POLYGON);
  int i ;
  for (i=0 ; i<100 ; i++) {
    float mycos = cos(i*2*PI/100)*0.9; 
    float mysin = sin(i*2*PI/100)*0.9;
    glVertex2f(mycos, mysin);
  }
  glEnd();

  glColor3f(0,1,1);
  glBegin(GL_POINTS);
    pointEcran.x = 0.0;
    pointEcran.y = 0.0;
    glVertex2f(pointEcran.x,pointEcran.y);
  glEnd();
  
  glFlush();
  
  return ;
}
