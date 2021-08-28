/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <mafajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 23:00:26 by mafajat           #+#    #+#             */
/*   Updated: 2021/08/26 21:47:54 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		sort_table(int argc, t_stack *s)
{
	int	tmp;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc - 1)
		{
			if (s->tab[i] > s->tab[j])
			{
				tmp = s->tab[i];
				s->tab[i] = s->tab[j];
				s->tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
void	fill_a(t_stack *s, int argc, char **argv)
{
	int	i;

	i = 0;
	while (i < argc - 1)
	{
		s->stack_a[i] = ft_atoi(argv[argc - i - 1]);
		s->tab[i] = s->stack_a[i];
		i++;
	}
	sort_table(argc, s);
}
int	ft_divider(int n)
{
	if (n > 150)
		return (n / 12);
	return (n / 6);
}

void	sort_a(t_stack *s)
{
	int	i;
	int	divider;

	i = 0;
	divider = ft_divider(s->tab_len);
	while ((i + 1) * divider < s->tab_len)
	{
		push_in_b(s, i * divider, (divider * i) + divider);
		i++;
	}
	while (s->top_a != -1)
		pb(s);
	push_in_a(s);
}

int main(int argc, char **argv)
{
    t_stack s;
    
	ft_error(argc, argv);
	alloc(&s, argc);
    fill_a(&s, argc, argv);
	if (is_sorted(s.stack_a, s.top_a))
		return (0);
	if (argc == 3)
		sa(&s);
	if (argc == 4)
		sort_three(&s);
	if (argc == 5)
		sort_five(&s, 0);
	if (argc == 6)
		sort_five(&s, 0);
	else
		sort_a(&s);
	free(s.stack_a);
	free(s.stack_b);
	free(s.tab);	
	return (0);
}