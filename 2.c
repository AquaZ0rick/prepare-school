#include <unistd.h>

// Функция, которая отображает символ переданный через аргументы 
void ft_putchar(char c)
{
    write(1, &c, 1);
}

// Функция, которая выводит комбинации чисел в порядке возрастания. 
// А именно комбинации чисел от 00 01 до 98 99.
void ft_print_comb2(void)
{
    int i = 0;
    int k = 0;
    while (i < 100)
    {
        k = i + 1;
        while (k < 100)
        {
            ft_putchar(i / 10 + 48);
            ft_putchar(i % 10 + 48);
            ft_putchar(' ');
            ft_putchar(k / 10 + '0');
            ft_putchar(k % 10 + 48);
            if ((i / 10 != 9) || (i % 10 != 8))
            {
                ft_putchar(',');
                ft_putchar(' ');
            }

            k++;
        }
        i++;
    }
}

int main(void)
{
    ft_print_comb2();
    return 0;
}
