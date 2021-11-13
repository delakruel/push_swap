#include "push_swap.h"

static long long	ft_help_atoi(char *str)
{
	int				i;
	long long		n;
	long long		sign;

	sign = 1;
	i = 0;
	n = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (n * 10) + (str[i] - '0');
		i++;
	}
	return (sign * n);
}

static int	ft_val_value(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		if (ft_help_atoi(str[i]) > 2147483647
			|| ft_help_atoi(str[i]) < -2147483648)
			return (0);
		while (str[j])
		{
			if (ft_help_atoi(str[i]) == ft_help_atoi(str[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_validate(char **str, int *k)
{
	int	i;
	int	j;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i])
	{
		if (str[i][0] == '\0')
			return (0);
		j = 0;
		if (str[i][j] == '-' || str[i][j] == '+')
			j++;
		while (str[i][j])
		{
			if (!(str[i][j] >= '0' && str[i][j] <= '9'))
				return (0);
			j++;
		}
		i++;
	}
	*k = i;
	return (ft_val_value(str));
}

void	mal_free(t_stack *a, t_stack *b, int k)
{
	if (k == 1)
	{
		a->mas = malloc(sizeof(int) * (a->size + 1));
		a->num = malloc(sizeof(int) * (a->size + 1));
		b->mas = malloc(sizeof(int) * (a->size + 1));
		b->num = malloc(sizeof(int) * (a->size + 1));
	}
	else
	{
		free(a->mas);
		free(a->num);
		free(b->mas);
		free(b->num);
	}
}
