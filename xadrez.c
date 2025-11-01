#include <stdio.h>
#include <stdlib.h>

// Desafio de Xadrez - MateCheck
// Escrito por Igor Leite da Silva

int main (){

    // Variáveis
    // numX - Usados para a entrada do usuário para quantas vezes a peça se moverá
    // a e b - São variaveis de contagem para o while e do-while para controle e finalizar o loop
    int numBispo, numTorre, numRainha, numCavalo;
    int a = 0, b = 0;
    
    // Exibição do menu e entrada do usuário
    printf ("-- Movimentacao de Pecas de Xadrez --\n");
    printf ("Escolaha quantas vezes cada peca se movera\n");

    // Bispo
    // While - Comando simples que gera um loop até que a condição, nesse caso (a != numBispo), seja falso
    printf ("\nMovimentacao do Bispo: ");
    scanf ("%d", &numBispo);

    while (a != numBispo){
        printf ("Diagonal superior direita\n");
        a++; // Variável de controle do loop
    }

    // Torre
    // Do-while - Comando de loop como o while, mas com a diferença q o programa sempre inicia e depois entra no loop
    printf ("\nMovimentacao da Torre: ");
    scanf ("%d", &numTorre);

    do {
        printf ("Direita\n");
        b++; // Variável de controle do loop
    } while (b != numTorre);

    // Rainha
    // For - E um loop mais complexo, porem muito útio quando se tem um valor de repetição já estabelecido
    printf ("\nMovimentacao da Rainha: ");
    scanf ("%d", &numRainha);

    for (int i=1; i <= numRainha; i++){ // A contagem pode acontecer inteiramente dentro do for
        printf ("Esquerda\n");
    }

    // Nível Aventureiro

    // Cavalo
    // Loop aninhados - Aqui tem um loop dentro de outro loop
    // Utilizei dois "For", tanto por identação quando por praticidade
    printf ("\nMovimentacao da Cavalo: ");
    scanf ("%d", &numCavalo);

    for (int i=1; i<=numCavalo; i++){ // Loop externo
        for (int j=1; j<=2; j++){ // Loop interno
            printf ("Cima\t");
        }
        printf ("Direita\n");
    }

    // Fim
    return 0;
}