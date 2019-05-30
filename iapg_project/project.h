#ifndef IAPG_PROJECT_PROJECT_H
#define IAPG_PROJECT_PROJECT_H

#include <stdio.h>
#include <string.h>
#include <locale.h>





#define TAM_NOME 50        // tamanho max de char na string - MACRO
#define TAM_VECTOR 50    // numero de musicas que podem ser armazenadas em memoria

int music_num;            // numero de musicas no vector

 typedef struct artista {               // estruturas permitem definir novos tipos de dados - tipo de dados neste caso ira ter o nome artista - e composto por duas strings, nome e nacionalidade
    char nome[TAM_NOME];
    char nacionalidade[TAM_NOME];
}ARTISTA;

struct musica {             // estruturas permitem definir novos tipos de dados - tipo de dados neste caso ira ter o nome musica - e composto por duas strings e uma estrutura, titulo e artista
    char titulo[TAM_NOME];
    char artista[TAM_NOME];

    ARTISTA cantor;
};

struct musica vec_musicas[TAM_VECTOR];    // inicializa-se com a estrutura criada acima um vector de musicas
struct artista vec_artistas[TAM_VECTOR];    // inicializa-se com a estrutura criada acima um vector de artistas


//MENU_PRINCIPAL
int menu_pr();
void lista_todas_musicas();
void imprime_musica();
void gravar_ficheiro();
void carregar_ficheiro();

//MENU_MUSIC
int menu_music();
void music_list();
void music_search();
void music_add(struct musica *m);
void music_edit();
void music_remove(struct musica *m);
void music_print(struct musica *m);
void music_load();
void music_save();
void music_input(char *temp);

//MENU_ARTIST
int menu_artist();
void artist_list();
void artist_search();
void artist_add(struct artista *a);
void artist_remove();
void artist_edit();
void artist_load();
void artist_print(struct artista *a);
void artist_save();
void artist_input(char *temp);

//MENU_SEARCH
int menu_search();



int menu_temp(struct musica *m);

#endif