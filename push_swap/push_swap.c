#include "push_swap.h"

static void	push_swap_alg(t_stack *a, t_stack *b)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	size = a->size;
	while (check_perf(*a))
	{
		j = 0;
		while (j < size)
		{
			if ((a->num[0] >> i) & 1)
				ra(a, 1);
			else
				pb(a, b, 1);
			j++;
		}
		while (b->size > 0)
			pa(a, b, 1);
		i++;
	}
}

static void	ps_10(t_stack *a, t_stack *b)
{
	int	i;

	i = 0;
	while (check_perf(*a))
	{
		while (a->num[0] != i)
		{
			if (a->num[1] == i)
				sa(a, 1);
			else if (find_min_2(a) <= a->size / 2)
				ra(a, 1);
			else
				rra(a, 1);
		}
		if (check_perf(*a))
			pb(a, b, 1);
		i++;
	}
	while (b->size > 0)
		pa(a, b, 1);
}

static void	ps_3(t_stack *a, t_stack *b)
{
	if (a->num[0] != 2)
		ps_10(a, b);
	else if (a->num[1] == 0)
		ra(a, 1);
	else
	{
		ra(a, 1);
		sa(a, 1);
	}
}

void	push_swap(t_stack *a, t_stack *b, char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		a->mas[i] = ft_atoi(str[i]);
		a->num[i] = -1;
		i++;
	}
	ft_number(a);
	b->size = 0;
	if (check_perf(*a))
	{
		if (a->size == 2)
			sa(a, 1);
		else if (a->size == 3)
			ps_3(a, b);
		else if (a->size <= 10)
			ps_10(a, b);
		else
			push_swap_alg(a, b);
	}
}
