#include "push_swap.h"

static void	err_out(char **str, int argc)
{
	if (argc < 2)
		ft_putstr_fd("USE: ./checker <numbers>\n<commands>\n", 1);
	else
		ft_putstr_fd("Error\n", 1);
	if (argc == 2)
		free(str);
	exit(0);
}

static void	check_help_2(t_stack *a, t_stack *b, char *gnl)
{
	if (ft_strncmp(gnl, "sa", 4) == 0)
		sa(a, 0);
	if (ft_strncmp(gnl, "sb", 4) == 0)
		sb(b, 0);
	if (ft_strncmp(gnl, "ss", 4) == 0)
		ss(a, b, 0);
	if (ft_strncmp(gnl, "pa", 4) == 0)
		pa(a, b, 0);
	if (ft_strncmp(gnl, "pb", 4) == 0)
		pb(a, b, 0);
	if (ft_strncmp(gnl, "ra", 4) == 0)
		ra(a, 0);
	if (ft_strncmp(gnl, "rb", 4) == 0)
		rb(b, 0);
	if (ft_strncmp(gnl, "rr", 4) == 0)
		rr(a, b, 0);
	if (ft_strncmp(gnl, "rra", 4) == 0)
		rra(a, 0);
	if (ft_strncmp(gnl, "rrb", 4) == 0)
		rrb(b, 0);
	if (ft_strncmp(gnl, "rrr", 4) == 0)
		rrr(a, b, 0);
}

static int	help_if(char *gnl)
{
	if (ft_strncmp(gnl, "sa", 4) != 0 && ft_strncmp(gnl, "sb", 4) != 0
		&& ft_strncmp(gnl, "ss", 4) != 0 && ft_strncmp(gnl, "pa", 4) != 0
		&& ft_strncmp(gnl, "pb", 4) != 0 && ft_strncmp(gnl, "ra", 4) != 0
		&& ft_strncmp(gnl, "rb", 4) != 0 && ft_strncmp(gnl, "rr", 4) != 0
		&& ft_strncmp(gnl, "rra", 4) != 0 && ft_strncmp(gnl, "rrb", 4) != 0
		&& ft_strncmp(gnl, "rrr", 4) != 0)
		return (1);
	return (0);
}

static void	check_help(t_stack *a, t_stack *b, char **str, int argc)
{
	int		i;
	char	*gnl;

	i = 0;
	while (str[i])
	{
		a->mas[i] = ft_atoi(str[i]);
		a->num[i] = 0;
		i++;
	}
	while (get_next_line(0, &gnl))
	{
		if (help_if(gnl))
		{
			mal_free(a, b, 0);
			err_out(str, argc);
		}
		check_help_2(a, b, gnl);
	}
	if (check_perf(*a) == 0 && b->size == 0)
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	char	**str;

	str = NULL;
	if (argc < 2)
		err_out(str, argc);
	if (argc == 2)
		str = ft_split(argv[1], ' ');
	if (argc > 2)
		str = ++argv;
	if (ft_validate(str, &a.size) == 0)
		err_out(str, argc);
	mal_free(&a, &b, 1);
	b.size = 0;
	if (!a.mas || !b.mas || !a.num || !b.num)
		err_out(str, argc);
	check_help(&a, &b, str, argc);
	if (argc == 2)
		free(str);
	mal_free(&a, &b, 0);
	return (0);
}
