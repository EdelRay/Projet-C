prog: bureau_de_vote.o main.o
	gcc bureau_de_vote.o main.o prog  -g
main.o:main.c
	gcc -c main.c
bureau_de_vote.o:bureau_de_vote.c
	gcc -c bureau_de_vote.c
