#include "push_swap.h"

int	check_perf(t_stack x)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (i < x.size - 1)
	{
		if (x.mas[i] > x.mas[i + 1])
			k = 1;
		i++;
	}
	return (k);
}
