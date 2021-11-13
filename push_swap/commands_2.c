#include "push_swap.h"

void	ra(t_stack *a, int k)
{
	int	i;
	int	tmp;
	int	tmp_n;

	i = 0;
	tmp = a->mas[0];
	tmp_n = a->num[0];
	while (i < a->size - 1)
	{
		a->mas[i] = a->mas[i + 1];
		a->num[i] = a->num[i + 1];
		i++;
	}
	a->mas[i] = tmp;
	a->num[i] = tmp_n;
	if (k == 1)
		ft_putstr_fd("ra\n", 1);
}

void	rb(t_stack *b, int k)
{
	int	i;
	int	tmp;
	int	tmp_n;

	i = 0;
	tmp = b->mas[0];
	tmp_n = b->num[0];
	while (i < b->size - 1)
	{
		b->mas[i] = b->mas[i + 1];
		b->num[i] = b->num[i + 1];
		i++;
	}
	b->mas[i] = tmp;
	b->num[i] = tmp_n;
	if (k == 1)
		ft_putstr_fd("rb\n", 1);
}

void	rr(t_stack *a, t_stack *b, int k)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = a->mas[0];
	while (i < a->size - 1)
	{
		a->mas[i] = a->mas[i + 1];
		i++;
	}
	a->mas[i] = tmp;
	i = 0;
	tmp = b->mas[0];
	while (i < b->size - 1)
	{
		b->mas[i] = b->mas[i + 1];
		i++;
	}
	b->mas[i] = tmp;
	if (k == 1)
		ft_putstr_fd("rr\n", 1);
}
