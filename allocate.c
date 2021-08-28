/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <mafajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 18:23:09 by mafajat           #+#    #+#             */
/*   Updated: 2021/07/27 18:23:16 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	alloc(t_stack *s, int argc)
{
	s->top_a = argc - 2;
	s->tab_len = argc - 1;
	s->stack_a = (int *)malloc((argc - 1) * sizeof(int));
	if (s->stack_a == 0)
		exit(1);
	s->stack_b = malloc((argc - 1) * sizeof(int));
	if (s->stack_b == 0)
	{
		free(s->stack_a);
		exit(1);
	}
	s->tab = malloc((argc - 1) * sizeof(int));
	if (s->tab == 0)
	{
		free(s->stack_b);
		free(s->stack_a);
		exit(1);
	}
	s->top_b = -1;
}

