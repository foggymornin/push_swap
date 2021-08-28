/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_five.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <mafajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:49:44 by mafajat           #+#    #+#             */
/*   Updated: 2021/08/13 17:24:42 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack *s)
{
	if ((s->stack_a[2] > s ->stack_a[1]) && (s->stack_a[2] > s->stack_a[0]))
		ra(s);
	if ((s->stack_a[1] > s->stack_a[2]) && (s->stack_a[1] > s->stack_a[0]))
		rra(s);
	if (s->stack_a[1] < s->stack_a[2])
		sa(s);
}

void	sort_four(t_stack *s, int i)
{
	while (i <= s->top_a)
	{
		if (s->stack_a[i] == s->tab[0])
		{
			if (i  < s->top_a / 2)
			{
				while(s->stack_a[s->top_a] != s->tab[0])
					rra(s);
			}
			else
				while(s->stack_a[s->top_a] != s->tab[0])
					ra(s);
			pb(s);
			break;
		}
		i++;
	}
	sort_three(s);
	pa(s);
}

void	sort_five(t_stack *s, int i)
{
	while (i <= s->top_a)
	{
		if (s->stack_a[i] == s->tab[0] || s ->stack_a[i] == s->tab[1])
		{
			if (i  < s->top_a / 2)
			{
				while(s->stack_a[s->top_a] != s->tab[0] && s->stack_a[s->top_a] != s->tab[1])
					rra(s);
			}
			else
				while(s->stack_a[s->top_a] != s->tab[0] && s->stack_a[s->top_a] != s->tab[1])
					ra(s);
			pb(s);
			i = -1;
		}
		i++;
	}
	sort_three(s);
	pa(s);
	pa(s);
	if (s->stack_a[s->top_a] > s->stack_a[s->top_a - 1])
		sa(s);
}

