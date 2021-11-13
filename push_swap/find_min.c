#include "push_swap.h"

static int	find_min_1(t_stack *a)
{
	int	i;
	int	i_min;
	int	min;

	i = 0;
	while (a->num[i] != -1)
		i++;
	i_min = i;
	min = a->mas[i];
	while (i < a->size)
	{
		if (a->mas[i] < min && a->num[i] == -1)
		{
			min = a->mas[i];
			i_min = i;
		}
		i++;
	}
	return (i_min);
}

void	ft_number(t_stack *a)
{
	int	j;

	j = 0;
	while (j < a->size)
	{
		a->num[find_min_1(a)] = j;
		j++;
	}
}

int	find_min_2(t_stack *a)
{
	int	i;
	int	i_min;
	int	min;

	i = 1;
	i_min = 0;
	min = a->mas[0];
	while (i < a->size)
	{
		if (min > a->mas[i])
		{
			min = a->mas[i];
			i_min = i;
		}
		i++;
	}
	return (i_min);
}
