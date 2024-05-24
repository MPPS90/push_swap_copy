#include "push_swap.h"

//función para revisar que los argumentos que pasan sean digitos
int check_digit(char *str)
{
    int i;
    int numb;

    i = 0;
    if(str[i] == '-')
        i++;
    while(str[i])
    {
        numb = ft_isdigit(str[i]);
        if(numb == 0)
            return 1;
        i++;
    }
    return 0;
}


int main(int argc, char*argv[])
{
    int i;
    int j;
    char    **sub_s;
    //int numb;

    i = 1;
    if(argc <= 2)
        return 1;
    while (argv[i])
    {
        sub_s = ft_split(argv[i], ' ');
        j = 0;
        while(sub_s[j])
        {
            ft_printf("%s\n", sub_s[j]);
            if(check_digit(sub_s[j]) == 1)
            {
                free(sub_s[j]);
                free(sub_s);
                ft_printf("Error\n");
                return (1);
            }
            if(ft_atol(sub_s[j])> 2147483647 || ft_atol(sub_s[j]) < -2147483648)
            {
                free(sub_s[j]);
                free(sub_s);
                ft_printf("Error\n");
            }
            free(sub_s[j]);
            j++;
        }
        //ft_printf("comprobando i: %d\n", i);
        free(sub_s);
        i++;
    }
    return 0;
}

//Pendientes:
//el free podría meterlo en la misma función como en el split para llamarlo solo una vez y no se me pongan muchas líneas de código
//recordar que cada vez que salte error debo liberar