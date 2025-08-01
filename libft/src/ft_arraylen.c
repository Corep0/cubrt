/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:45:44 by seruff            #+#    #+#             */
/*   Updated: 2025/07/30 11:27:06 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_array_len(char **array)
{
	int	size;

	size = 0;
	if (!array || !array[size])
		return (0);
	while (array && array[size])
		size++;
	return (size);
}
