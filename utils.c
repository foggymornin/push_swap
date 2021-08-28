/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <mafajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 20:34:16 by mafajat           #+#    #+#             */
/*   Updated: 2021/08/26 21:42:16 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_atoi(const char *str)
{
	int nb;
	int n;
	int s;

	s = 1;
	n = 0;
	nb = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-')
		s = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		if (s > 0 && nb < 0)
			return (-1);
		if (s < 0 && nb < 0)
			return (0);
		n = *str - '0';
		nb = 10 * nb + n;
		str++;
	}
	return (nb * s);
}

int	ft_is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	is_sorted(int *tab, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (tab[i] < tab[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
