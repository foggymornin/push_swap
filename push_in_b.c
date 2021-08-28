/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_in_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <mafajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 21:25:19 by mafajat           #+#    #+#             */
/*   Updated: 2021/08/26 21:25:23 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_stack *s, int i, int j)
{
	if (j < (s->top_a / 2))
		while (s->tab[i] != s->stack_a[s->top_a])
			ra(s);
	else
		while (s->tab[i] != s->stack_a[s->top_a])
			rra(s);
	pb(s);
}

void	push_in_b(t_stack *s, int start, int end)
{
	int	j;
	int	i;

	i = start;
	j = 0;
	while (j < s->top_a)
	{
		while (i < end)
		{
			if (s->stack_a[s->top_a - j] == s->tab[i])
			{
				rotate_a(s, i, j);
				j = 0;
				i = -1;
			}
			i++;
		}
		i = start;
		j++;
	}
}