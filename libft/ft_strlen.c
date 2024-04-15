/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:29:46 by gforns-s          #+#    #+#             */
/*   Updated: 2024/04/06 14:01:21 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *var)
{
	size_t	count;

	count = 0;
	if (var == NULL)
		return (0);
	while (var[count] != '\0')
		count++;
	return (count);
}
/*
#include <stdio.h>
int main(void)
{
    char	*var = "Hola buenas tardes";
    printf("%d", ft_strlen(var));
}*/ 