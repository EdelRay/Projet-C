prog:reclamation.o main.o
	gcc reclamation.o main.o -o prog -g
main.o:main.c
	gcc -c main.c -g
fonctions.o:reclamation.c
	gcc -c reclamation.c –g
