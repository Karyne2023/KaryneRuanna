#include <stdio.h>
#include <math.h>

int main ()
{

    //ValorTerreno();
    //Retangulo();
    //Idade ();
    //Calculadora();
    //Notas();
    //Baskara();
    //Menorde3 ();
    //Crescente ();
    //MediaIdade (); Voltar nesse depois
    //Tabuada ();
    //SomaImpar (); Voltar nesse depois
    //Negativos ();
    //Diagonal();
    SomaLinhas ();

    return 0;
}
void SomaLinhas()
{
    int x, y;
    double elemento;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf ("%d,", &x);
    printf ("Qual a quantidade de colunas da matriz? ");
    scanf ("%d,", &y);

    double somas[x];

    double mat[x][y];

    for (int i = 0; i < x; i++)
    {
        printf ("Digite os elementos da %dª linha: \n", i+1);
        for (int j = 0; j < y; j++){
             scanf ("%lf", &elemento);
             somas[i]= somas[i] + elemento;
        }
    }

    printf("VETOR GERADO: \n");

    for (int i = 0; i < x; i++){
        printf ("%.1lf\n", somas[i]);
    }
}

void Diagonal()
{
    int N, qtdNe;

    printf ("Qual a ordem da matriz? \n");
    scanf ("%d", &N);

    int mat[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf ("Elemento [%d,%d]: ", i, j);
            scanf("%d", &mat [i][j]);
        }
    }

    /* N = 3
        (0,0) (0,1) (0,2)
        (1,0) (1,1) (1,2)
        (2,0) (2,1) (2,2)

       */
    printf ("DIAGONAL PRINCIPAL: \n");

    for (int i = 0; i < N; i++)
    {
        printf ("%d",mat [i][i]);
    }

    printf ("\nDIAGONAL SECUNDARIA: \n");

    for (int i = 0; i < N; i++)
    {
        printf ("%d",mat [i][N-1-i]);
    }

    qtdNe = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (mat [i][j] < 0)
            {
                qtdNe++;
            }

        }

    }
    printf ("\nQuantidade de Negativos = %d\n", qtdNe);

}

void Negativos ()
{
    int N;
    printf ("Quantos numeros?\n");
    scanf ("%d", &N);

    int vet [N];

    for (int i = 0; i < N; i++)
    {
        printf ("Digite um numero: ");
        scanf ("%d", &vet[i]);
    }
    printf ("Numeros Negativos: \n");
    for (int i = 0; i < N; i++)
    {
        if (vet[i] < 0 )
        {
            printf ("%d\n", vet[i]);
        }
    }
}
void SomaImpar ()
{
    int x, y, soma, troca;

    printf ("Digite dois numeros:\n");
    scanf ("%d %d", &x, &y);

    if (x > y)
    {
        troca = x;
        x = y;
        y = troca;
    }
    soma = 0;
    for (int i = x+1; i < y; i++)
    {
        if ( i % 2 != 0)
        {
            soma = soma + i;
        }
    }
    printf ("Soma dos numeros impares = %d\n", soma);
}
void Tabuada ()
{
    int N, i, produto;

    printf ("Deseja a tabuada para qual valor? \n");
    scanf ("%d", &N);

    for (i = 1; i <= 10; i++)
    {
        produto = N * i;
        printf ("%d x %d = %d \n", N, i, produto);

    }
}

void MediaIdade()
{
    double media,nValores = 0, soma = 0;
    int idade = 0;

    printf ("Digite as idades: \n");

    while (idade >= 0 )
    {

        scanf ("%d", &idade);

        if (idade >= 0)
        {
            nValores++;
            soma = soma + idade;
        }

    }

    media = soma / nValores;
    printf ("Media = %.2lf", media);
}
void Crescente ()
{
    int x, y;

    printf ("Digite dois numeros: \n");
    scanf ("%d",&x);
    scanf ("%d",&y);

    while (x != y)
    {

        if ( x > y)
        {
            printf ("Decrescente!\n");

        }
        else
        {
            printf ("Crescente! \n");
        }

        printf ("Digite outro dois numeros: \n");
        scanf ("%d",&x);
        scanf ("%d",&y);
    }


}
void Menorde3 ()
{
    int a, b, c, menor;

    printf ("Primeiro Valor: ");
    scanf ("%d", &a);
    printf ("Segundo Valor: ");
    scanf ("%d", &b);
    printf ("Terceiro Valor: ");
    scanf ("%d", &c);

    if ( a < b && a < c)
    {
        printf ("Menor: %d", a);
    }
    else if (b < a && b < c)
    {
        printf ("Menor: %d", b);
    }
    else
    {
        printf ("Menor: %d", c);
    }

}
void Baskara ()
{
    double a, b, c, delta, x1, x2;

    printf ("Coeficiente a: ");
    scanf ("%lf", &a);
    printf ("Coeficiente b: ");
    scanf ("%lf", &b);
    printf ("Coeficiente c: ");
    scanf ("%lf", &c);

    delta = b * b - 4 * a * c;

    if ( a == 0 || delta < 0)
    {

        printf (" Essa equacao nao possui raizes reais \n");
    }
    else
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf ("X1 = %.4lf\n", x1);
        printf ("X2 = %.4lf\n", x2);
    }
}
void Notas ()
{

    double primNota, segNota, notaFinal;

    printf ("Digite a primeira nota: \n");
    scanf ("%lf", &primNota);
    printf ("Digite a segunda nota: \n");
    scanf ("%lf", &segNota);

    notaFinal = primNota + segNota;

    printf ("Nota Final: %.1lf\n", notaFinal);

    if (notaFinal < 60)
    {
        printf ("REPROVADO");
    }
    else
    {
        printf ("APROVADO");
    }
}

void Calculadora ()
{
    int operacoes;
    double num1, num2, resultado;

    printf ("Calculadora Simples: \n");
    printf ("Escolha uma das operacoes: \n");
    printf ("1. Adicao \n");
    printf ("2. Subtracao \n");
    printf ("3. Multiplicacao \n");
    printf ("4. Divisao \n");
    scanf ("%d", &operacoes);

    printf ("Escolha o primeiro numero: \n");
    scanf ("%lf", &num1);
    printf ("Escolha o segundo numero: \n");
    scanf ("%lf", &num2);

    switch (operacoes)
    {
    case 1 :
        resultado = num1 + num2;
        printf("resultado: %.2lf\n", resultado);
        break;

    case 2 :
        resultado = num1 - num2;
        printf("resultado: %.2lf\n", resultado);
        break;

    case 3 :
        resultado = num1 * num2;
        printf("resultado: %.2lf\n", resultado);
        break;

    case 4 :
        if (num2 != 0)
        {
            resultado = num1 / num2;
            printf("resultado: %.2lf\n", resultado);
        }
        else
        {
            printf ("ERRO! divisao por 0 nao e permitida \n");
        }

        break;
    default:
        printf ("operacao invalida\n");
        break;

    }
}

void Idade ()
{
    char nome1[50], nome2[50];
    int idade1, idade2;
    double mediaIdade;

    printf ("Dados da primeira pessoa: \n");
    printf ("Nome: ");
    gets (nome1);
    printf ("Idade: ");
    scanf ("%d", &idade1);

    printf ("Dados da segunda pessoa: \n");
    printf ("Nome: ");
    fseek (stdin, 0, SEEK_END);
    gets (nome2);
    printf ("Idade: ");
    scanf ("%d", &idade2);

    mediaIdade = (double)(idade1 + idade2) / 2;

    printf ("A idade media de %s e %s e %.1lf anos", nome1, nome2, mediaIdade);


}
void Retangulo ()
{

    double base, altura, area, perimetro, diagonal;

    printf ("Digite a base do retangulo: ");
    scanf ("%lf", &base);

    printf ("Digite a altura do retangulo: ");
    scanf ("%lf", &altura);

    area = base * altura;
    perimetro = base * 2 + altura * 2;
    diagonal = sqrt(base * base + altura * altura);

    printf ("Area do retangulo: %.4lf\n", area);
    printf ("Perimetro do retangulo: %.4lf\n", perimetro);
    printf ("Diagonal do retangulo: %.4lf\n", diagonal);



}

void ValorTerreno()
{
    double largura, comprimento, valor, area, preco;

    printf ("Digite a largura do terreno: ");
    scanf ("%lf", &largura);

    printf ("Digite o comprimento do terreno: ");
    scanf ("%lf", &comprimento);

    printf ("Digite o valor do metro quadrado: ");
    scanf ("%lf", &valor);

    area = largura * comprimento;
    preco = area * valor;

    printf ("Area do terreno: %.2lf\n", area);
    printf ("Preco do terreno: %.2lf\n", preco);

}


