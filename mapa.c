#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ncurses.h>
#include <time.h>

#include "mapa.h"


void gerar(PLAYER *s) {
	s->pos.posX = 10;
	s-> pos.posY = 10;
	s->nivel = 1;
	s->vida = 50;
	s->vidamaxima = 50;
	s->defesa = 12;
	s->flechas = 5;
	s->ataqueespada = 1;
	s->ataquearco = 1;
	s->pocoesvida = 1;
	s->aguabenta = 0;
}
