#include <stdio.h>


int main(void)
{
  int salario1, salario2;

  printf("Qual � o sal�rio do funcion�rio?");
  scanf("%d",salario1);

  salario2 = salario1 + 0.25;

  printf("\n O novo salario do funcionario �: %d",salario2);

    return 0;
}
