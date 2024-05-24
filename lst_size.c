/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:22:39 by mpena-so          #+#    #+#             */
/*   Updated: 2024/05/24 09:01:32 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//tamaño lista
int lst_size(t_numbers *numbs)
{
    int i;
    i = 0;
    while(numbs != NULL)
    {
        numbs = numbs->next;
        i++;
    }
    return(i);
}