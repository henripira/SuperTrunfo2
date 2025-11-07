
#include <stdio.h>

// funcao para calculo da densidade demografica
float densidade(int populacao, float densidade){
    float resultado;
    resultado = (float) populacao / densidade;
    return resultado;
}

int main(){
    //declaracao das variaveis a seremusadas nesse projeto ja com as informacoes da carta(baseado em Pais)
    char paisA[20]="Brasil", paisB[20]="Argentina";
    int populacaoA=100000000, populacaoB=10000000;
    int pontoTuristicoA=34, pontoTuristicoB=37;
    int resultado1, resultado2,opcao1, opcao2;
    float densidadeA, densidadeB;
    float pibA=300e9, pibB=305e9;
    float areaA=1200.16, areaB=1200.15;

    //calculo da densidade demografica
    densidadeA = densidade(populacaoA, areaA);
    densidadeB = densidade(populacaoB, areaB);

    
    //menu inicial, escolha do atributo
    printf("---------MENU----------\n");
    printf("-- Jogo Super Trunfo --\n");
    printf("1. População\n");
    printf("2. Area(km²)\n");
    printf("3. PIB(em Bilhões de reais)\n");
    printf("4. Pontos Turisticos(qtd)\n");
    printf("5. Densidade Demografica\n");
    printf("Escolha um menu para comparacao: ");
    scanf("%d", &opcao1);

    //escolha do segundo atributo, baseado na escolha do primeiro menu
    switch (opcao1) {

        case 1:
            printf("\n-- Jogo Super Trunfo --\n");
            printf("---------MENU----------\n");
            printf("2. Area(km²)\n");
            printf("3. PIB(em Bilhões de reais)\n");
            printf("4. Pontos Turisticos(qtd)\n");
            printf("5. Densidade Demografica\n");
            printf("Escolha outro menu para comparacao: ");
            scanf("%d", &opcao2);
        break;
        case 2:
            printf("\n-- Jogo Super Trunfo --\n");
            printf("---------MENU----------\n");
            printf("1. População\n");
            printf("3. PIB(em Bilhões de reais)\n");
            printf("4. Pontos Turisticos(qtd)\n");
            printf("5. Densidade Demografica\n");
            printf("Escolha outro menu para comparacao: ");
            scanf("%d", &opcao2);
        break;
        case 3:
            printf("\n-- Jogo Super Trunfo --\n");
            printf("---------MENU----------\n");
            printf("1. População\n");
            printf("2. Area(km²)\n");
            printf("4. Pontos Turisticos(qtd)\n");
            printf("5. Densidade Demografica\n");
            printf("Escolha outro menu para comparacao: ");
            scanf("%d", &opcao2);
        break;
        case 4:
            printf("\n-- Jogo Super Trunfo --\n");
            printf("---------MENU----------\n");
            printf("1. População\n");
            printf("2. Area(km²)\n");
            printf("3. PIB(em Bilhões de reais)\n");
            printf("5. Densidade Demografica\n");
            printf("Escolha outro menu para comparacao: ");
            scanf("%d", &opcao2);
        break;
        case 5:
            printf("\n-- Jogo Super Trunfo --\n");
            printf("---------MENU----------\n");
            printf("1. População\n");
            printf("2. Area(km²)\n");
            printf("3. PIB(em Bilhões de reais)\n");
            printf("4. Pontos Turisticos(qtd)\n");
            printf("Escolha outro menu para comparacao: ");
            scanf("%d", &opcao2);
        break;
        default:
            printf("Menu escolhido inválido.\n");
        
    }
    
    //saida da escolha dos menus nas duas opções, com switch aninhado
    switch (opcao1) {

        case 1:
            printf("\nPopulacao\n");
            printf("Populacao %s %d\n",paisA, populacaoA);
            printf("Populacao %s %d\n",paisB, populacaoB);
            resultado1 = populacaoA > populacaoB ? 1:0;
            if (resultado1 == 1){
                printf("Carta 1 %s venceu!\n", paisA);
            }else if (resultado1 == 0) {
                printf("Carta 2 %s venceu\n", paisB);
            }else {
                printf("Empatou\n");
            }
            switch (opcao2){
                case 2:
                    printf("Area\n");
                    printf("Area %s: %.2f\n", paisA, areaA);
                    printf("Area %s: %.2f\n", paisB, areaB);
                    resultado2 = areaA > areaB ? 1:0;
                    if (resultado2 == 1){
                            printf("Carta 1 venceu!\n");
                        }else if (resultado2 == 0) {
                            printf("Carta 2 venceu\n");
                        }else {
                            printf("Empatou\n");
                        }
                break;
                case 3:
                    printf("PIB\n");
                    printf("PIB %s: %.2f\n", paisA, pibA);
                    printf("PIB %s: %.2f\n", paisB, pibB);
                    resultado2 = pibA > pibB ? 1:0;
                    if (resultado2 == 1){
                            printf("Carta 1 venceu!\n");
                        }else if (resultado2 == 0) {
                            printf("Carta 2 venceu\n");
                        }else {
                            printf("Empatou\n");
                        }
                break;
                case 4:
                    printf("Pontos Turisticos\n");
                    printf("Pontos Turisticos %s: %d\n", paisA, areaA);
                    printf("Pontos Turisticos %s: %d\n", paisB, areaB);
                    resultado2 = pontoTuristicoA > pontoTuristicoB ? 1:0;
                    if (resultado2 == 1){
                            printf("Carta 1 venceu!\n");
                        }else if (resultado2 == 0) {
                            printf("Carta 2 venceu\n");
                        }else {
                            printf("Empatou\n");
                        }
                break;
                case 5:
                    printf("Densidade Populacional\n");
                    printf("Densidade Populacional %s: %.2f\n", paisA, densidadeA);
                    printf("Densidade Populacional %s: %.2f\n", paisB, densidadeB);
                    resultado2 = densidadeB > densidadeA ? 1:0;
                    if (resultado2 == 1){
                            printf("Carta 2 venceu!\n");
                        }else if (resultado2 == 0) {
                            printf("Carta 1 venceu\n");
                        }else {
                            printf("Empatou\n");
                        }
                break;
                default:
                    printf("Opcao invalida, escolha somente de 1 a 5!\n");
                break;
            }
            break;
        case 2:
            printf("\nArea\n");
            printf("Area %s %.2f\n",paisA, areaA);
            printf("Area %s %.2f\n",paisB, areaB);
            resultado1 = areaA > areaB ? 1:0;
            if (resultado1 == 1){
                printf("Carta 1 %s venceu!\n", paisA);
            }else if (resultado1 == 0) {
                printf("Carta 2 %s venceu\n", paisB);
            }else {
                printf("Empatou\n");
            }
            switch (opcao2){
                case 1:
                    printf("População\n");
                    printf("População %s: %d\n", paisA, populacaoA);
                    printf("População %s: %d\n", paisB, populacaoB);
                    resultado2 = populacaoA > populacaoB ? 1:0;
                    if (resultado2 == 1){
                            printf("Carta 1 venceu!\n");
                        }else if (resultado2 == 0) {
                            printf("Carta 2 venceu\n");
                        }else {
                            printf("Empatou\n");
                        }
                break;
                case 3:
                    printf("PIB\n");
                    printf("PIB R$%s: %.2f\n", pibA, pibB);
                    printf("PIB R$%s: %.2f\n", pibA, pibB);
                    resultado2 = pibA > pibB ? 1:0;
                    if (resultado2 == 1){
                            printf("Carta 1 venceu!\n");
                        }else if (resultado2 == 0) {
                            printf("Carta 2 venceu\n");
                        }else {
                            printf("Empatou\n");
                        }
                break;
                case 4:
                    printf("Pontos Turisticos\n");
                    printf("Pontos Turisticos %s: %d\n", paisA, pontoTuristicoA);
                    printf("Pontos Turisticos %s: %d\n", paisB, pontoTuristicoB);
                    resultado2 = pontoTuristicoA > pontoTuristicoB ? 1:0;
                    if (resultado2 == 1){
                            printf("Carta 1 venceu!\n");
                        }else if (resultado2 == 0) {
                            printf("Carta 2 venceu\n");
                        }else {
                            printf("Empatou\n");
                        }
                break;
                case 5:
                    printf("Densidade Populacional\n");
                    printf("Densidade Populacional %s: %.2f\n", paisA, densidadeA);
                    printf("Densidade Populacional %s: %.2f\n", paisB, densidadeB);
                    resultado2 = densidadeB > densidadeA ? 1:0;
                    if (resultado2 == 1){
                            printf("Carta 2 venceu!\n");
                        }else if (resultado2 == 0) {
                            printf("Carta 1 venceu\n");
                        }else {
                            printf("Empatou\n");
                        }
                default:
                    printf("Opcao invalida, escolha somente de 1 a 5!\n");
                break;
            }
            break;
        case 3:
            printf("\nPIB\n");
            printf("PIB %s: %.2f\n", paisA, pibB);
            printf("PIB %s: %.2f\n", paisB, pibB);
            resultado1 = pibA > pibB ? 1:0;
            if (resultado1 == 1){
                printf("Carta 1 %s venceu!\n", paisA);
            }else if (resultado1 == 0) {
                printf("Carta 2 %s venceu\n", paisB);
            }else {
                printf("Empatou\n");
            }
            switch (opcao2){
                case 1:
                    printf("População\n");
                    printf("População %s: %d\n", paisA, populacaoA);
                    printf("População %s: %d\n", paisB, populacaoB);
                    resultado2 = populacaoA > populacaoB ? 1:0;
                    if (resultado2 == 1){
                            printf("Carta 1 venceu!\n");
                        }else if (resultado2 == 0) {
                            printf("Carta 2 venceu\n");
                        }else {
                            printf("Empatou\n");
                        }
                break;
                case 2:
                    printf("Area\n");
                    printf("Area %s: %.2f\n", paisA, areaA);
                    printf("Area %s: %.2f\n", paisB, areaB);
                    resultado2 = areaA > areaB ? 1:0;
                    if (resultado2 == 1){
                            printf("Carta 1 venceu!\n");
                        }else if (resultado2 == 0) {
                            printf("Carta 2 venceu\n");
                        }else {
                            printf("Empatou\n");
                        }
                break;
                case 4:
                    printf("Pontos Turisticos\n");
                    printf("Area %s: %d\n", paisA, pontoTuristicoA);
                    printf("Area %s: %d\n", paisB, pontoTuristicoB);
                    resultado2 = pontoTuristicoA > pontoTuristicoB ? 1:0;
                    if (resultado2 == 1){
                            printf("Carta 1 venceu!\n");
                        }else if (resultado2 == 0) {
                            printf("Carta 2 venceu\n");
                        }else {
                            printf("Empatou\n");
                        }
                break;
                case 5:
                    printf("Densidade Populacional\n");
                    printf("Densidade Populacional %s: %.2f\n", paisA, densidadeA);
                    printf("Densidade Populacional %s: %.2f\n", paisB, densidadeB);
                    resultado2 = densidadeB > densidadeA ? 1:0;
                    if (resultado2 == 1){
                            printf("Carta 2 venceu!\n");
                        }else if (resultado2 == 0) {
                            printf("Carta 1 venceu\n");
                        }else {
                            printf("Empatou\n");
                        }
                default:
                    printf("Opcao invalida, escolha somente de 1 a 5!\n");
                break;
            break;
                }
        case 4:
            printf("\nPontos Turisticos\n");
            printf("Area %s: %d\n", paisA, pontoTuristicoA);
            printf("Area %s: %d\n", paisB, pontoTuristicoB);
            resultado1 = pontoTuristicoA > pontoTuristicoB ? 1:0;
            if (resultado1 == 1){
                printf("Carta 1 %s venceu!\n", paisA);
            }else if (resultado1 == 0) {
                printf("Carta 2 %s venceu\n", paisB);
            }else {
                printf("Empatou\n");
            }
            switch (opcao2){
                case 1:
                    printf("População\n");
                    printf("População %s: %d\n", paisA, populacaoA);
                    printf("População %s: %d\n", paisB, populacaoB);
                    resultado2 = populacaoA > populacaoB ? 1:0;
                    if (resultado2 == 1){
                            printf("Carta 1 venceu!\n");
                        }else if (resultado2 == 0) {
                            printf("Carta 2 venceu\n");
                        }else {
                            printf("Empatou\n");
                        }
                break;
                case 2:
                    printf("Area\n");
                    printf("Area %s: %.2f\n", paisA, areaA);
                    printf("Area %s: %.2f\n", paisB, areaB);
                    resultado2 = areaA > areaB ? 1:0;
                    if (resultado2 == 1){
                            printf("Carta 1 venceu!\n");
                        }else if (resultado2 == 0) {
                            printf("Carta 2 venceu\n");
                        }else {
                            printf("Empatou\n");
                        }
                break;
                case 3:
                    printf("PIB\n");
                    printf("PIB %s: %.2f\n", paisA, pibA);
                    printf("PIB %s: %.2f\n", paisB, pibB);
                    resultado2 = pibA > pibB ? 1:0;

                    if (resultado2 == 1){
                            printf("Carta 1 venceu!\n");
                        }else if (resultado2 == 0) {
                            printf("Carta 2 venceu\n");
                        }else {
                            printf("Empatou\n");
                        }
                break;
                case 5:
                    printf("Densidade Populacional\n");
                    printf("Densidade Populacional %s: %.2f\n", paisA, densidadeA);
                    printf("Densidade Populacional %s: %.2f\n", paisB, densidadeB);
                    resultado2 = densidadeA < densidadeB ? 1:0;
                    if (resultado2 == 1){
                            printf("Carta 1 venceu!\n");
                        }else if (resultado2 == 0) {
                            printf("Carta 2 venceu\n");
                        }else {
                            printf("Empatou\n");
                        }
                    resultado2 = densidadeA < densidadeB ? 1:0;
                break;
                default:
                    printf("Opcao invalida, escolha somente de 1 a 5!\n");
                break;
            }
            break;
        case 5:
        printf("\nDensidade Populacional\n");
        printf("Densidade Populacional %s: %.2f\n", paisA, densidadeA);
        printf("Densidade Populacional %s: %.2f\n", paisB, densidadeB);
        resultado1 = densidadeA < densidadeB ? 1:0;
            if (resultado1 == 1){
                printf("Carta 1 %s venceu!\n", paisA);
            }else if (resultado1 == 0) {
                printf("Carta 2 %s venceu\n", paisB);
            }else {
                printf("Empatou\n");
            }
            switch (opcao2){
                case 1:
                    printf("População\n");
                    printf("População %s: %d\n", paisA, populacaoA);
                    printf("População %s: %d\n", paisB, populacaoB);
                    resultado2 = populacaoA > populacaoB ? 1:0;
                    if (resultado2 == 1){
                            printf("Carta 1 venceu!\n");
                        }else if (resultado2 == 0) {
                            printf("Carta 2 venceu\n");
                        }else {
                            printf("Empatou\n");
                        }
                break;
                case 2:
                    printf("Area\n");
                    printf("Area %s: %.2f\n", paisA, areaA);
                    printf("Area %s: %.2f\n", paisB, areaB);
                    resultado2 = areaA > areaB ? 1:0;
                    if (resultado2 == 1){
                            printf("Carta 1 venceu!\n");
                        }else if (resultado2 == 0) {
                            printf("Carta 2 venceu\n");
                        }else {
                            printf("Empatou\n");
                    }
                break;
                case 3:
                    printf("PIB\n");
                    printf("PIB %s: %.2f\n", paisA, pibA);
                    printf("PIB %s: %.2f\n", paisB, pibB);
                    resultado2 = pibA > pibB ? 1:0;
                    if (resultado2 == 1){
                            printf("Carta 1 venceu!\n");
                        }else if (resultado2 == 0) {
                            printf("Carta 2 venceu\n");
                        }else {
                            printf("Empatou\n");
                        }
                break;
                case 4:
                    printf("Pontos Turisticos\n");
                    printf("Pontos Turisticos %s: %d\n", paisA, pontoTuristicoA);
                    printf("Pontos Turisticos %s: %d\n", paisB, pontoTuristicoB);
                    resultado2 = pontoTuristicoA > pontoTuristicoB ? 1:0;
                    if (resultado2 == 1){
                            printf("Carta 1 %s venceu!\n", paisA);
                        }else if (resultado2 == 0) {
                            printf("Carta 2 %s venceu\n", paisB);
                        }else {
                            printf("Empatou\n");
                        }
                break;
                default:
                    printf("Opcao invalida, escolha somente de 1 a 5!\n");
                break;
            }
            break;
            }
    //checagem final do campeao ou nao
    printf("%d %d\n", resultado1, resultado2);
    if (resultado1 && resultado2) {
        printf("Carta 1 (%s) venceu!\n", paisA);
    }else if (resultado1 != resultado2) {
        printf("Empate!\n");
    }else {
        printf("Carta 2 (%s) venceu!\n", paisB);
    }
}
    
