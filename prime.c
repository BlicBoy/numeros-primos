#include <stdio.h>
#include <stdlib.h>


//Inicializar
float primeNumb (int limit1, int limit2);

int main()
{
    //limpar consola
    system("cls");

    //variaveis
    int limite1 = 0, limite2 = 0;
    float media = 0.0;

    //pedir valores!
    printf("Limite Menor: ");
    scanf("%d", &limite1);
    printf("Limite Maior: ");
    scanf("%d", &limite2);

    //chamar função
    media = primeNumb(limite1,limite2);

    //Apresentar Resultado
    printf("\nMédia dos Numeros: %0.2f", media);

    //parar programa
    getchar();

}

//Saber os numeros primos entre 2 limites
float primeNumb (int limit1, int limit2)
{
    //Verdadeiro
    int flag = 1, soma = 0, contador = 0;
    float media = 0.0f;

    for(int i = limit1; i <= limit2; i++) //este for vai percorrer os numeros do limite 1 ou limite 2
    {   
        for( int j = 2; j <= i / 2; j++)
        {
            if ( i % j == 0)
            {
                flag = 0; //se não for primo
            }
            
        }

        if(flag == 1) //se for primo
        {
            printf("%d\t", i);
            soma = soma + i;
            contador++;
        }

        flag = 1; //a flag volta sempre a ser verdadeiro

    }

    //se contador for maior que 0 quer dizer que ha numeros primos!
    if(contador != 0)
    {
        //calcula a media
        media = soma / contador;
    }

    //Retorna a media
    return media;

}