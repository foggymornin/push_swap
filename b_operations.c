#include "push_swap.h"

void	sb(t_stack *s)
{
	int	tmp;

	if (s->stack_b == 0)
		return ;
	tmp = s->stack_b[s->top_b];
	s->stack_b[s->top_b] = s->stack_b[s->top_b - 1];
	s->stack_b[s->top_b - 1] = tmp;
	write(1, "sb\n", 3);
}

void	rb(t_stack *s)
{
	int	j;
	int	tmp;

	j = s->top_b;
	if (s->top_b == 0)
		return ;
	while (j > 0)
	{
		tmp = s-> stack_b[j];
		s->stack_b[j] = s->stack_b[j - 1];
		s->stack_b[j - 1] = tmp;
		j--;
	}
	write(1, "rb\n", 3);
}

void	rrb(t_stack *s)
{
	int	j;
	int	tmp;

	j = 0;
	if (s-> top_b == 0)
		return ;
	while (j < s->top_b)
	{
		tmp = s->stack_b[j];
		s->stack_b[j] = s->stack_b[j + 1];
		s->stack_b[j + 1] = tmp;
		j++;
	}
	write(1, "rrb\n", 4);
}

int	pb(t_stack *s)
{
	if (s->top_a == -1)
		return (0);
	s->stack_b[s->top_b + 1] = s->stack_a[s->top_a];
	s->top_b++;
	s->top_a--;
	write(1, "pb\n", 3);
	return (1);
}