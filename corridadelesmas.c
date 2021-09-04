#include <stdio.h>

/*autora: Beatriz Lima
  ano: 2021
  disciplina: AlgProg2
  */

/*  Corrida de lesmas: programa que diz a velocidade da lesma campeã
    critérios:
    se sua velocidade é menor ou igual a 10 cm/h, então ela consegue andar por 3 h até parar;
    se sua velocidade é maior que 10 cm/h e menor ou igual a 20 cm/h, então ela consegue andar por 2 h até parar;
    se sua velocidade é maior que 20 cm/h e menor ou igual a 100cm/h, então ela consegue andar por 1 h até parar.*/

int main() {
  int i, n;
  int velocidades[100];
  int duracao;
  int maxima = -1;

  scanf("%d", &n);
  for(i = 0; i < n; i++)
  {
      scanf("%d", &velocidades[i]);
  }
  scanf("%d", &duracao);

  if(duracao == 1)
  {
      for(i = 0; i < n; i++)
      {
           if(velocidades[i] < 20)
                velocidades[i] = 0;
      }
  }
  else if(duracao == 2)
  {
      for(i = 0; i < n; i++)
      {
          if(velocidades[i] < 10 && velocidades[i] > 20)
             velocidades[i] = 0;

      }
  }
  else if(duracao == 3)
  {
      for(i = 0; i < n; i++)
      {
         if(velocidades[i] > 10)
            velocidades[i] = 0;

      }
  }
  for(int j = 0; j < n; j++)
  {
      if(velocidades[j] > maxima)
          maxima = velocidades[j];
  }
  printf("%d\n", maxima);

  return 0;
}
