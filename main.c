#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Sucessor ();
    //Trabalho();
    //Segundos();
    //ValorInvertido();
    //Idade();
    //IdadeCompleto();
    //strings();
    //Estruturas();
    Soma();

    return 0;

}

void Soma()
{
    int a, b;
    printf("Digite 2 numeros: ");
    scanf("%d%d", &a, &b);

    int resultado = Soma2(a , b);
    printf("Resultado: %d\n",resultado);
}

int Soma2 (int n1, int n2)
{
    return n1 + n2;
}

void Sucessor ()
{


    int num, ant, dep;

    printf ("Digite um numero: ");
    scanf("%d", &num);

    ant = num - 1;
    dep = num + 1;

    printf("O antecessor desse numero e: %d\n\n", ant);
    printf("O sucessor desse numero e: %d\n", dep);

}

void Trabalho ()
{
    float valorHora, total, horaT, aumento;


    printf("Digite o valor da hora trabalhada:\n");
    scanf("%f", &valorHora);

    printf("Digite as horas trabalhadas no mes:\n");
    scanf("%f", &horaT);

    total = valorHora * horaT;

    aumento = total * 1.10;

    printf("Valor a ser pago: %.2f", aumento);

}

void Segundos ()
{
    int seg, min, hora;

    printf("Digite as horas: \n");
    scanf ("%d", &hora);

    min = hora * 60;

    seg = min * 60;

    printf("As horas %d, e equivalente a %d minutos.\n", hora, min);
    printf("As horas %d, e equivalente a %d segundos.\n", hora, seg);

}






void ValorInvertido()
{

    int numero, valorInv = 0; // Declarar um valor inicial

    // Leitura do valor inteiro
    printf("Digite um valor inteiro: ");
    scanf("%d", &numero);

    // Cálculo do valor invertido
    while (numero != 0)
    {
        int digito = numero % 10;
        valorInv = valorInv * 10 + digito;
        numero /= 10;
        printf("O valor invertido e: %d, %d\n", valorInv,digito);
    }

    // Impressão do valor invertido
    printf("O valor invertido e: %d\n", valorInv);


}
void Idade()
{

    int anoNascimento, anoAtual = 2023;

    printf("Digite seu ano de nascimento: ");
    scanf("%d",&anoNascimento);

    int suaidade = anoAtual - anoNascimento;

    printf("Sua idade e: %d", suaidade);


}

void IdadeCompleto()
{
    int anoNasc, mesNas, diaNasc, anoAtual, mesAtual, diaAtual;
    char continuar = 'y';

    printf("Ano atual: ");
    scanf("%d",&anoAtual);
    printf("Mes atual: ");
    scanf("%d",&mesAtual);
    printf("Dia de hoje: ");
    scanf("%d",&diaAtual);

    while (continuar == 'y' || continuar == 'Y')
    {

        printf("\nDigite seu ano de nascimento: ");
        scanf("%d",&anoNasc);
        printf("Digite seu mes de nascimento: ");
        scanf("%d",&mesNas);
        printf("Digite seu dia de nascimento: ");
        scanf("%d",&diaNasc);

        int suaIdade;

        if(mesNas < mesAtual)
        {

            suaIdade = anoAtual - anoNasc;
        }
        else if(mesNas > mesAtual)
        {
            suaIdade = anoAtual - anoNasc - 1;
        }
        else
        {
            if (diaNasc > diaAtual)
            {
                suaIdade = anoAtual - anoNasc - 1;
            }
            else if (diaNasc < diaAtual)
            {
                suaIdade = anoAtual - anoNasc;
            }
            else if (diaAtual==diaNasc)
            {

                suaIdade = anoAtual - anoNasc;
                printf("PARABEEEEEEENS!!!!!\n");
            }
        }


        printf("Sua idade e: %d", suaIdade);


        printf("\nContinuar? (y/n): ");
        fseek(stdin,0,SEEK_END);
        scanf("%c", &continuar);

    }

}
void strings()
{

    char palavras[] = {};

    printf("Digite se nome: \n");
    scanf("%[^\n]", palavras);

    printf("%s\n", palavras);
}
struct Pessoa
{
    char nome[50];
    int idade;
    float altura;
};
void Estruturas()
{


    struct Pessoa pessoa1; // Declaração da variável pessoa1 do tipo Pessoa

// Atribuição de valores aos membros da estrutura pessoa1
    strcpy(pessoa1.nome, "João");
    pessoa1.idade = 25;
    pessoa1.altura = 1.75;

// Acesso aos membros da estrutura pessoa1
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d anos\n", pessoa1.idade);
    printf("Altura: %.2f metros\n", pessoa1.altura);

}







