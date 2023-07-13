/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:27:13 by rahmed            #+#    #+#             */
/*   Updated: 2022/05/20 15:13:49 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

int	ft_str_isdigit(char *str)
{
	int	i;
	int	dot;

	i = 0;
	dot = 0;
	if ((str[i] != '-') && (str[i] != '+') && !ft_isdigit(str[i]))
		return (0);
	while (str[++i])
	{
		if (str[i] == '.')
			dot++;
		if ((!ft_isdigit(str[i]) && (str[i] != '.')) || dot > 1)
			return (0);
	}
	return (1);
}