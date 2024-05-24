/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 20:00:30 by mpena-so          #+#    #+#             */
/*   Updated: 2024/05/24 09:00:19 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//verificación de argumentos no repetidos. Sin terminar.
bool repeat_digit(int argc, char *argv[])
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    if(argc < 3)
        return false;
    while(argv[i])
    {
        j = i + 1;
        while(argv[j])
        {
            if(ft_atoi(argv[i]) == ft_atoi(argv[i]))
                return false;
            j++;
        }
        i++;
    }
    return true;
}




