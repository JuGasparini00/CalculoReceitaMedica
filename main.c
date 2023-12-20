#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    float peso;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite o peso: ");
    scanf("%f", &peso);

    if (idade >= 12 && peso >= 60)
    {
        printf("Deve tomar 1000mg (40 gotas)\n");
    }
    if (idade >= 12 && peso < 60)
    {
        printf("Deve tomar 875mg (35 gotas)\n");
    }
    if (idade < 12 && peso <= 5 || peso <= 9)
    {
        printf("Deve tomar 125mg (5 gotas)\n");
    }
    if (idade < 12 && peso > 9.1 && peso <= 16)
    {
        printf("Deve tomar 250mg (10 gotas)\n");
    }
    if (idade < 12 && peso > 16.1 && peso <= 24)
    {
        printf("Deve tomar 375mg (15 gotas)\n");
    }
    if (idade < 12 && peso > 24.1 && peso <= 30)
    {
        printf("Deve tomar 500mg (20 gotas)\n");
    }
    if (idade < 12 && peso > 30)
    {
        printf("Deve tomar 750mg (25 gotas)\n");
    }
    else if (idade <= 0 || peso <= 0)
    {
        printf("Idade ou peso invalidos, desconsiderar receita e digitar novamente.\n");
    }
    return 0;
}
