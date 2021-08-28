/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <mafajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 15:44:18 by mafajat           #+#    #+#             */
/*   Updated: 2021/08/26 21:34:14 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void     ft_non_numeric(int  argc, char **argv)
{
    int i;
    int j;

    i = 1;
    j = 0;

    while (i < argc)
    {
        j = 0;
        if (argv[i][0] == '-' && ft_is_digit(argv[i][1]))
            j++;
        while (argv[i][j])
        {
            if (!ft_is_digit (argv[i][j]))
            {
                write(1, "Error\n", 6);
                exit(1);
            }
            j++;
        }
        i++;
    }
}

void    ft_duplicate (int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    j = 1;
    while (i < argc - 1)
    {
        j = i + 1;
        while (j < argc)
        {
            if (!ft_strcmp(argv[i], argv[j]))
            {
                write(1, "Error\n", 6);
                exit(1);
            }
            j++;
        }
        i++;
    }
}

void    ft_max_int(int argc, char **argv)
{
    int i;

    i = 1;
    while (i < argc)
    {
        if (ft_atoi(argv[i]) > MI)
        {
            write(1, "Error\n", 6);
            exit(1);
        }
        i++;
    }
}
void	is_int(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if ((argv[i][0] != '-' && ft_strlen(argv[i]) > 10) || \
		((argv[i][0] != '-') && ft_strlen(argv[i]) == 10 \
		&& ft_strcmp(argv[i], "2147483647") > 0))
		{
			write(1, "Error\n", 6);
			exit(1);
		}
		if ((argv[i][0] == '-' && ft_strlen(argv[i]) > 11) || \
		 ((argv[i][0] == '-') && ft_strlen(argv[i]) == 11 \
		&& ft_strcmp(argv[i], "-2147483648") > 0))
		{
			write(1, "Error\n", 6);
			exit(1);
		}
		i++;
	}
}

void    ft_error(int argc, char **argv)
{
    ft_non_numeric(argc, argv);
    ft_duplicate(argc, argv);
    ft_max_int(argc, argv);
    is_int(argc, argv);
}