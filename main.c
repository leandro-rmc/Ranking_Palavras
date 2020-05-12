#include <stdio.h>
#include <stdlib.h>
#include "Mapa.h"
#include "Ranking.h"

//Fun��es super b�sicas apenas para n�o ficar em branco aqui
//A segunda metade do trabalho usar� todas as fun��es do TAD

Mapa mp;

void imprimirTodasPalavras(Ranking *ranking){
    char t[100];
    int c;
    for (int i = 0; i<= ranking->mapa->total - 1; i++){
        le_termo(ranking->mapa,i,t,&c);
        printf("%s - %i\n", t, c);
    }
}

int main()
{
    /*inicia_mapa(&mp);
    insere_termo(&mp, "Teste (X)");
    insere_termo(&mp, "Teste (Y)");
    insere_termo(&mp, "Teste (Z)");
    insere_termo(&mp, "Teste (Z)");
    insere_termo(&mp, "Teste (Z)");
    insere_termo(&mp, "Teste (W)");
    insere_termo(&mp, "Teste (W)");
    insere_termo(&mp, "Teste (W)");
    insere_termo(&mp, "Teste (W)");

    remove_termo(&mp, "Teste (y)");
    imprimirTodasPalavras();
    */

    Ranking ranking;
    inicia_ranking(&ranking);
    absorver_palavras_arquivo(&ranking, "teste.txt");
    imprimirTodasPalavras(&ranking);
    int i;
    scanf("%i",&i);
    return 0;
}
