
#include <stdio.h>

//Calculo da Densidade demografica
float densidade(int populacao, float densidade){
    float resultado;
    resultado = (float) populacao / densidade;
    return resultado;
}
//inicio da função principal
int main(){
    //cartas previamente cadastradas ja em sistema
    char paisA[20]="Brasil", paisB[20]="Argentina";
    int populacaoA=100000000, populacaoB=10000000, pontoTuristicoA=34, pontoTuristicoB=37, opcao;
    float densidadeA, densidadeB, pibA=300e9, pibB=305e9, areaA=1200.15, areaB=1200.15;
//chamando a funcao criada para calculo da densidade demografica
    densidadeA = densidade(populacaoA, areaA);
    densidadeB = densidade(populacaoB, areaB);


//menu de escolha do jogador
    printf("-- Jogo Super Trunfo --\n");
    printf("---------MENU----------\n");
    printf("1. População\n");
    printf("2. Area(km²)\n");
    printf("3. PIB(em Bilhões de reais)\n");
    printf("4. Pontos Turisticos(qtd)\n");
    printf("5. Densidade Demografica\n");
    printf("6. Encerrar jogo\n");
    printf("Escolha um menu para comparacao(de 1 a 6): ");
    scanf("%d", &opcao);
//comparações, usando switch de acordo com a escolha da comparação
    switch (opcao) {

        case 1:
            if(populacaoA > populacaoB){
                printf("\nPaís: %s | País %s: \n", paisA, paisB);
                printf("Comparação por População\n");
                printf("O país %s tem %d habitantes e o país %s tem %d habitantes\n", paisA, populacaoA, paisB, populacaoB);
                printf("Carta 1 venceu!\n");
            }else if (populacaoA == populacaoB) {
                printf("\nPaís: %s | País %s: \n", paisA, paisB);
                printf("Comparação por População\n");
                printf("O país %s tem %d habitantes e o país %s tem %d habitantes\n", paisA, populacaoA, paisB, populacaoB);
                printf("Empate!\n");
            }else{
                printf("\nPaís: %s | País %s: \n", paisA, paisB);
                printf("Comparação por População\n");
                printf("O país %s tem %d habitantes e o país %s tem %d habitantes\n", paisA, populacaoA, paisB, populacaoB);
                printf("Carta 2 venceu!\n");
            }
            break;
        case 2:
            if(areaA > areaB){
                printf("\nPaís: %s | País %s: \n", paisA, paisB);
                printf("Comparação por Area(km²)\n");
                printf("O país %s tem %.2f km² e o país %s tem %.2f km²\n", paisA, areaA, paisB, areaB);
                printf("Carta 1 venceu!\n");
            }else if (areaA == areaB) {
                printf("\nPaís: %s | País %s: \n", paisA, paisB);
                printf("Comparação por Area(km²)\n");
                printf("O país %s tem %.2f km² e o país %s tem %.2f km²\n", paisA, areaA, paisB, areaB);
                printf("Empate!\n");
            }else{
                printf("\nPaís: %s | País %s: \n", paisA, paisB);
                printf("Comparação por Area(km²)\n");
                printf("O país %s tem %.2f km² e o país %s tem %.2f km²\n", paisA, areaA, paisB, areaB);
                printf("Carta 2 venceu!\n");
            }
            break;
        case 3:
            if(pibA > pibB){
                printf("\nPaís: %s | País %s: \n", paisA, paisB);
                printf("Comparação por PIB\n");
                printf("O país %s tem R$%.2f e o país %s tem R$%.2f\n", paisA, pibA, paisB, pibB);
                printf("Carta 1 venceu!\n");
            }else if (pibA == pibB) {
                printf("\nPaís: %s | País %s: \n", paisA, paisB);
                printf("Comparação por PIB\n");
                printf("O país %s tem R$%.2f e o país %s tem R$%.2f \n", paisA, pibA, paisB, pibB);
                printf("Empate!\n");
            }else{
                printf("\nPaís: %s | País %s: \n", paisA, paisB);
                printf("Comparação por PIB\n");
                printf("O país %s tem R$%.2f e o país %s tem R$%.2f \n", paisA, pibA, paisB, pibB);
                printf("Carta 2 venceu!\n");
            }
            break;
        case 4:
            if(pontoTuristicoA > pontoTuristicoB){
                printf("\nPaís: %s | País %s: \n", paisA, paisB);
                printf("Comparação por Pontos Turisticos\n");
                printf("O país %s tem %d locais e o país %s tem %d locais\n", paisA, pontoTuristicoA, paisB, pontoTuristicoB);
                printf("Carta 1 venceu!\n");
            }else if (pontoTuristicoA == pontoTuristicoB) {
                printf("\nPaís: %s | País %s: \n", paisA, paisB);
                printf("Comparação por Pontos Turisticos\n");
                printf("O país %s tem %d locais e o país %s tem %d locais\n", paisA, pontoTuristicoA, paisB, pontoTuristicoB);
                printf("Empate!\n");
            }else{
                printf("\nPaís: %s | País %s: \n", paisA, paisB);
                printf("Comparação por Pontos Turisticos\n");
                printf("O país %s tem %d locais e o país %s tem %d locais\n", paisA, pontoTuristicoA, paisB, pontoTuristicoB);
                printf("Carta 2 venceu!\n");
            }
            break;
        case 5:
            if(densidadeA > densidadeB){
                printf("\nPaís: %s | País %s: \n", paisA, paisB);
                printf("Comparação por Densidade Demografica\n");
                printf("O país %s tem %.2f habitantes/km² e o país %s tem %.2f habitantes/km²\n", paisA, densidadeA, paisB, densidadeB);
                printf("Carta 2 venceu!\n");
            }else if (densidadeA == densidadeB) {
                printf("\nPaís: %s | País %s: \n", paisA, paisB);
                printf("Comparação por Densidade Demografica\n");
                printf("O país %s tem %.2f habitantes/km² e o país %s tem %.2f habitantes/km²\n", paisA, densidadeA, paisB, densidadeB);
                printf("Empate!\n");
            }else{
                printf("\nPaís: %s | País %s: \n", paisA, paisB);
                printf("Comparação por Densidade Demografica\n");
                printf("O país %s tem %.2f habitantes/km² e o país %s tem %.2f habitantes/km²\n", paisA, densidadeA, paisB, densidadeB);
                printf("Carta 1 venceu!\n");
            }
            break;
        case 6:
            printf("Encerrando...\n");
            printf("Até mais.\n");
            break;
        default:
            printf("Opcao invalida, escolha somente de 1 a 6!\n");
            break;
    }

}
