/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 14:51:10 by rahmed            #+#    #+#             */
/*   Updated: 2022/05/14 14:51:14 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isin(char *str, int c)
{
	size_t	i;

	i = -1;
	if (!str)
		return (0);
	while (str[++i])
		if (str[i] == c)
			return (1);
	return (0);
}
