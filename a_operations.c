/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_operations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <mafajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:54:07 by mafajat           #+#    #+#             */
/*   Updated: 2021/07/26 13:25:13 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *s)
{
	int	tmp;

	if (s->top_a == 0)
		return ;
	tmp = s->stack_a[s ->top_a];
	s->stack_a[s->top_a] = s->stack_a[s->top_a - 1];
	s->stack_a[s->top_a - 1] = tmp;
	write(1, "sa\n", 3);
}

void	ra(t_stack *s)
{
	int	j;
	int	tmp;

	j = s->top_a;
	if (s->top_a == 0)
		return ;
	while (j > 0)
	{
		tmp = s->stack_a[j];
		s->stack_a[j] = s->stack_a[j - 1];
		s->stack_a[j - 1] = tmp;
		j--;
	}
	write(1, "ra\n", 3);
}

void	rra(t_stack *s)
{
	int	j;
	int	tmp;

	j = 0;
	if (s-> top_a == 0)
		return ;
	while (j < s->top_a)
	{
		tmp = s->stack_a[j];
		s->stack_a[j] = s->stack_a[j + 1];
		s->stack_a[j + 1] = tmp;
		j++;
	}
	write(1, "rra\n", 4);
}

void	pa(t_stack *s)
{
	if (s->top_b == -1)
		return ;
	s->stack_a[s->top_a + 1] = s->stack_b[s->top_b];
	s->top_a++;
	s->top_b--;
	write(1, "pa\n", 3);
}