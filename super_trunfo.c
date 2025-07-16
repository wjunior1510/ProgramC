#include <stdio.h>

int main() {

    int população1, população2, pontosturisticos1, pontosturisticos2;
    char estado1, estado2, codigocarta1, codigocarta2, nomecidade1[50], nomecidade2[50];
    float pib1, pib2, area1, area2;

    printf("A seguir digite os dados da carta 01 \n");
    printf("Digite o estado (Uma letra de 'A' a 'H'): \n");
    scanf("%c", &estado1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomecidade1);
                                        
    printf("Digite a população: \n");
    scanf("%d", &população1);
                                                    
    printf("Digite a área: \n");
    scanf("%f", &area1);
                                                                
    printf("Digite o PIB: \n");
    scanf("%f", &pib1);
                                                                            
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos1);

    printf("A seguir digite os dados da carta 02\n");
    printf("Digite o estado (Uma letra de 'A' a 'H'): \n");
    scanf("%c", &estado2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomecidade2);
                                        
    printf("Digite a população: \n");
    scanf("%d", &população2);
                                                    
    printf("Digite a área: \n");
    scanf("%f", &area2);
                                                                
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
                                                                            
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos2);


    printf("Carta: 01\n ");
    printf("Estado: %c\n", estado1);
    printf("Código: %c01\n", estado1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", população1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontosturisticos1);

    printf("Carta: 02\n ");
    printf("Estado: %c\n", estado2);
    printf("Código: %c02\n", estado2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", população2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontosturisticos2);

    return 0;


    }
                                                                                                                        