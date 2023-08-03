#include <stdio.h>


int main(void)
{
  int salario1, salario2;

  printf("Qual é o salário do funcionário?");
  scanf("%d",salario1);

  salario2 = salario1 + 0.25;

  printf("\n O novo salario do funcionario é: %d",salario2);

    return 0;
}
