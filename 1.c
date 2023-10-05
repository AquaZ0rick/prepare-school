#include <unistd.h>

// Функция, которая отображает символ переданный через аргументы 
void ft_putchar(char c) 
{
  write(1, &c, 1);
}

// Функция, которая выводит англ алфавит в нижнем регистре в порядке убывания. То есть от буквы z до a 
void ft_print_alphabet(void)
{
  char bukva;

  bukva = 'z';
  while (bukva >= 'a')
  {
    ft_putchar(bukva);
    bukva--;
  }
}

// Функция, которая отображает "N" или "P" в зависимости от того, какого знака число. 
// Если "n" отрицательное, то вывести "N". Если положительное, то "P". 
void ft_is_negative(int n)
{
  if (n < 0)
    ft_putchar('N');
  else
    ft_putchar('P');
}

int main(void)
{
  ft_is_negative(0);
  return 0;
}