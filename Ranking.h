#ifndef RANKING_H_INCLUDED
#define RANKING_H_INCLUDED
#include <stdio.h>
#include <limits.h>
#include "Mapa.h"
#include "ContainerPalavras.h"
#define TAMANHO_MAXIMO_PALAVRA_ARQUIVO 50
#define SEPARADOR_PALAVRAS_ARQUIVO '\n'
#define MINIMO_INTERVALO_PADRAO 1
//Uma mudan�a no tipo de dado da quantidade na estrutura do Mapa poder� quebrar o c�digo abaixo
//O certo seria obter o tipo de dados dela ao inv�s de tratar sempre como inteiro
#define MAXIMO_INTERVALO_PADRAO INT_MAX
#define MINIMO_CARACTERES_PADRAO 1

enum status_ranking{SemArquivo, ComArquivo};

typedef struct _ranking{
	Mapa *mapa;
	int minimo_caracteres;
	char *nome_arquivo;
	int status; // usar enum depois
	//0 = sem palavras, 1 = com palavras
} Ranking;

Ranking* obter_ranking();
void inicia_ranking(Ranking *ranking);
int absorver_palavras_arquivo(Ranking *ranking, char *nome_arquivo);
void limpar_ranking(Ranking *ranking);
void libera_ranking(Ranking *ranking);
void imprimir_ranking(Ranking *ranking, int intevalo_minimo, int intervalo_maximo);
int obter_status_ranking(Ranking *ranking);
int obter_minimo_caracteres_ranking(Ranking *ranking);
void definir_limites_caractere_ranking(Ranking *ranking, int minimo_caracteres);
ContainerPalavras* obter_palavras_filtradas(Ranking *ranking, int intevalo_minimo, int intervalo_maximo);
SubContainerPalavra* buscar_palavra_filtrada(Ranking *ranking, int intevalo_minimo, int intervalo_maximo, char *palavra);
//void libera_palavras(Palavras palavras); //Importante ap�s cada busca! Prefiro fazer static e de forma automatica pelo obter_palavras_filtradas
//Ou criar uma fun��o pro usu�rio usar
//Criar essas fun��es para os dois acima, pois eles est�o causando memory leak do jeito que est�

#endif // RANKING_H_INCLUDED
