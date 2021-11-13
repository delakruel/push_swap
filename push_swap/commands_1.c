#include "push_swap.h"

void	sa(t_stack *a, int k)
{
	int	tmp;
	int	tmp_n;

	tmp = a->mas[0];
	tmp_n = a->num[0];
	a->mas[0] = a->mas[1];
	a->num[0] = a->num[1];
	a->mas[1] = tmp;
	a->num[1] = tmp_n;
	if (k == 1)
		ft_putstr_fd("sa\n", 1);
}

void	sb(t_stack *b, int k)
{
	int	tmp;
	int	tmp_n;

	tmp = b->mas[0];
	tmp_n = b->num[0];
	b->mas[0] = b->mas[1];
	b->num[0] = b->num[1];
	b->mas[1] = tmp;
	b->num[1] = tmp_n;
	if (k == 1)
		ft_putstr_fd("sb\n", 1);
}

void	ss(t_stack *a, t_stack *b, int k)
{
	int	tmp;
	int	tmp_n;

	tmp = a->mas[0];
	tmp_n = a->num[0];
	a->mas[0] = a->mas[1];
	a->num[0] = a->num[1];
	a->mas[1] = tmp;
	a->num[1] = tmp_n;
	tmp = b->mas[0];
	tmp_n = b->num[0];
	b->mas[0] = b->mas[1];
	b->num[0] = b->num[1];
	b->mas[1] = tmp;
	b->num[1] = tmp_n;
	if (k == 1)
		ft_putstr_fd("ss\n", 1);
}

void	pa(t_stack *a, t_stack *b, int k)
{
	int	n;

	n = a->size;
	a->size++;
	while (n > 0)
	{
		a->mas[n] = a->mas[n - 1];
		a->num[n] = a->num[n - 1];
		n--;
	}
	a->mas[0] = b->mas[0];
	a->num[0] = b->num[0];
	while (n < b->size - 1)
	{
		b->mas[n] = b->mas[n + 1];
		b->num[n] = b->num[n + 1];
		n++;
	}
	b->size--;
	if (k == 1)
		ft_putstr_fd("pa\n", 1);
}

void	pb(t_stack *a, t_stack *b, int k)
{
	int	n;

	n = b->size;
	b->size++;
	while (n > 0)
	{
		b->mas[n] = b->mas[n - 1];
		b->num[n] = b->num[n - 1];
		n--;
	}
	b->mas[0] = a->mas[0];
	b->num[0] = a->num[0];
	while (n < a->size - 1)
	{
		a->mas[n] = a->mas[n + 1];
		a->num[n] = a->num[n + 1];
		n++;
	}
	a->size--;
	if (k == 1)
		ft_putstr_fd("pb\n", 1);
}
