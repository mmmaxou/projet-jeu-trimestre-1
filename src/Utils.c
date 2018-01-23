#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header.h"
#define LARG 18
#define LONG 12
#define ROUGE 'R'/* Identifiant du premier joueur */
#define BLEU 'B' /* Identifiant du deuxieme joueur */
#define SERF 's'/* Identifiant du Serf */
#define GUERRIER 'g'/* Identifiant du Guerrier */
#define REINE 'r'/* Identifiant de la Reine */
#define OEUF 'o'/* Identifiant de l'oeuf */

int abs ( int x ) {
	return x < 0 ? -x : x;
}

char* format2( int n ) {
	char *s = malloc(3 * sizeof(char));
	s[0] = '0';
	s[1] = '0';
	s[2] = '\0';
	
	if ( n == 0 ) {
		return "00";
	}
	
	s[1] += n % 10;
	if( n >= 10) {
		s[0] += (n-(n%10)) / 10;
	}
	return s;
}

char* format3( int n ) {
	char *s = malloc(4 * sizeof(char));
	s[0] = '0';
	s[1] = '0';
	s[2] = '0';
	s[3] = '\0';
	
	if ( n == 0 ) {
		return "000";
	}
	
	s[2] += n % 10;
	if( n >= 10) {
		s[1] += (n-(n%10)) / 10;
	}
	return s;
}

char* genre( char c ) {
	switch( c ) {
		case REINE:
			return "Reine";
			break;
		case OEUF:
			return "Oeuf";
			break;
		case SERF:
			return "Serf";
			break;
		case GUERRIER:
			return "Guerrier";
			break;
		default:
			return "?";
			break;
	}
	return "?";
}

