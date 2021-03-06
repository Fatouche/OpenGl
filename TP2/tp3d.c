#include <GL/gl.h>
#include <GL/glu.h>
#include <glut.h>

#include "graphique.h"
#include "touches.h"

/* dimensions initiales de la fen�tre d'affichage */
#define LARGEUR  256
#define HAUTEUR  256

float trans_axeZ;
float rot_axeY;
float rot_axeX;

float kx;
float ky;
float kz;

/**
 * Fonction d'initialisation des param�tres d'affichage
 */
static void init_screen(void)
{
  glViewport(0, 0, LARGEUR, HAUTEUR);
  
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluPerspective(60.0, 1, 1, 50);
  trans_axeZ = 0.0;
  rot_axeY = 0.0;
  rot_axeX = 0.0;

  kx = 1.0;
  ky = 1.0;
  kz = 1.0;
}


/**
 * Fonction principale qui cr�e et initialise la fen�tre
 * d'affichage et lance la boucle d'affichage Glut.
 * @param argc le nombre d'argument sur la ligne de commande
 * @param argv une table de cha�ne de caract�res contenant chacun
 * des arguments de la ligne de commande.
 */
int main (int argc, char *argv[])
{
  glutInit (&argc, argv);

  glutInitWindowPosition(100, 100); 
  glutInitWindowSize(LARGEUR, HAUTEUR); 

  glutInitDisplayMode(GLUT_DEPTH);

  glutCreateWindow(argv[0]);

  /* choix de la fonction de rafraichissement */
  glutDisplayFunc(dessiner);
  glutReshapeFunc(retailler);
  glutKeyboardFunc(gerer_clavier);
  glutSpecialUpFunc(gestionClavierSpecial);

  init_screen();

  glEnable(GL_DEPTH_TEST);
  glutMainLoop();
  

  return 0;
}


