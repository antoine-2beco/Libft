/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:44:13 by ade-beco          #+#    #+#             */
/*   Updated: 2023/11/08 18:08:36 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				n;
	long long int	res;
	long long int	temp;
	size_t			i;

	n = 1;
	res = 0;
	i = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if ((str[i] == '+') || (str[i] == '-'))
		if (str[i++] == '-')
			n = -n;
	while (str[i] >= '0' && str[i] <= '9')
	{
		temp = res;
		res = ((res * 10) + (str[i] - '0'));
		if (temp > res && n == -1)
			return (0);
		if (temp > res && n == 1)
			return (-1);
		i++;
	}
	return (res * n);
}
