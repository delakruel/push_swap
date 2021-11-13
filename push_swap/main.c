#include "push_swap.h"

static void	err_out(char **str, int argc)
{
	if (argc < 2)
		ft_putstr_fd("Right use of program is: ./push_swap <numbers>\n", 1);
	else
		ft_putstr_fd("Error\n", 1);
	if (argc == 2)
		free(str);
	exit(0);
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
	if (!a.mas || !b.mas || !a.num || !b.num)
		err_out(str, argc);
	push_swap(&a, &b, str);
	if (argc == 2)
		free(str);
	mal_free(&a, &b, 0);
	return (0);
}
