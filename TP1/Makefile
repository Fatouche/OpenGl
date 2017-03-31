tp1:	tp1.o graphique.o clavier.o souris.o menu.o
	gcc -o tp1 tp1.o graphique.o clavier.o souris.o menu.o -lglut -lGLU -lGL -lm
tp1.o:	tp1.c
	gcc -c tp1.c -I /usr/include/GL
graphique.o:	graphique.c
	gcc -c graphique.c -I /usr/include/GL
clavier.o:	clavier.c
	gcc -c clavier.c -I /usr/include/GL

souris.o:	souris.c
	gcc -c souris.c -I /usr/include/GL
menu.o:		menu.c
	gcc -c menu.c -I /usr/include/GL
