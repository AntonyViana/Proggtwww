#include <stdio.h>

#define MAX 100
#define NUMATLE 3

struct Atleta
{
    char nome[MAX];
    int idade;
    char esporte[MAX];
    float altura;
};

int main()
{
    struct Atleta atleta[NUMATLE];
    struct Atleta *atletaMaisVelho = &atleta[0];
    struct Atleta *atletaMaisAlto = &atleta[0];

    for (int i = 0; i < NUMATLE; i++)
    {

        fgets(atleta[i].nome, MAX, stdin);
        fgets(atleta[i].esporte, MAX, stdin);
        scanf("%d", &atleta[i].idade);
        scanf("%f", &atleta[i].altura);
        fflush(stdin); 
        
    }
    for (int i = 0; i < NUMATLE; i++)
    {

        if (atleta[i].idade > atletaMaisVelho->idade)
        {
            atletaMaisVelho = &atleta[i];
        }
    }
    for (int i = 0; i < NUMATLE; i++)
    {

        if (atleta[i].altura > atletaMaisAlto->altura)
        {
            atletaMaisAlto = &atleta[i];
        }
    }
    printf("%s", atletaMaisVelho->nome);
    printf("%s", atletaMaisAlto->nome);
}
