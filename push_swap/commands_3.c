#include "push_swap.h"

void	rra(t_stack *a, int k)
{
	int	i;
	int	tmp;
	int	tmp_n;

	i = a->size - 1;
	tmp = a->mas[a->size - 1];
	tmp_n = a->num[a->size - 1];
	while (i > 0)
	{
		a->mas[i] = a->mas[i - 1];
		a->num[i] = a->num[i - 1];
		i--;
	}
	a->mas[0] = tmp;
	a->num[0] = tmp_n;
	if (k == 1)
		ft_putstr_fd("rra\n", 1);
}

void	rrb(t_stack *b, int k)
{
	int	i;
	int	tmp;
	int	tmp_n;

	i = b->size - 1;
	tmp = b->mas[b->size - 1];
	tmp_n = b->num[b->size - 1];
	while (i > 0)
	{
		b->mas[i] = b->mas[i - 1];
		b->num[i] = b->num[i - 1];
		i--;
	}
	b->mas[0] = tmp;
	b->num[0] = tmp_n;
	if (k == 1)
		ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_stack *a, t_stack *b, int k)
{
	int	i;
	int	tmp;

	i = a->size - 1;
	tmp = a->mas[a->size - 1];
	while (i > 0)
	{
		a->mas[i] = a->mas[i - 1];
		i--;
	}
	a->mas[0] = tmp;
	i = b->size - 1;
	tmp = b->mas[b->size - 1];
	while (i > 0)
	{
		b->mas[i] = b->mas[i - 1];
		i--;
	}
	b->mas[0] = tmp;
	if (k == 1)
		ft_putstr_fd("rrr\n", 1);
}
