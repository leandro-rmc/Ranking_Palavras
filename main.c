#include <stdio.h>
#include <stdlib.h>
#include "Mapa.h"
#include "Ranking.h"

//Fun��es super b�sicas apenas para n�o ficar em branco aqui
//A segunda metade do trabalho usar� todas as fun��es do TAD

int main()
{

    Ranking ranking;
    inicia_ranking(&ranking);
    absorver_palavras_arquivo(&ranking, "teste.txt");
    imprimir_ranking(&ranking, ranking.rankingConfig->minimo_intervalo, ranking.rankingConfig->maximo_intervalo);

    int q1, q2;
    obter_quantidade(&ranking,&q1,&q2, ranking.rankingConfig->minimo_intervalo, ranking.rankingConfig->maximo_intervalo);
    printf("Total repetindo: %i\n", q1);
    printf("Total igual: %i\n", q2);

    int i;
    scanf("%i",&i);
    return 0;
}
