#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>

# define BUFFER_SIZE 10

typedef struct s_stack
{
	int	*mas;
	int	*num;
	int	size;
}	t_stack;

size_t	ft_strlen(const char *str);
void	ft_putstr_fd(char *s, int fd);
int		ft_atoi(const char *str);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strchr(const char *str, int ch);
char	*ft_strdup(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strcpy(char *dst, const char *src);
char	**ft_split(char const *s, char c);
void	mal_free(t_stack *a, t_stack *b, int k);
void	sa(t_stack *a, int k);
void	sb(t_stack *b, int k);
void	ss(t_stack *a, t_stack *b, int k);
void	pa(t_stack *a, t_stack *b, int k);
void	pb(t_stack *a, t_stack *b, int k);
void	ra(t_stack *a, int k);
void	rb(t_stack *b, int k);
void	rr(t_stack *a, t_stack *b, int k);
void	rra(t_stack *a, int k);
void	rrb(t_stack *b, int k);
void	rrr(t_stack *a, t_stack *b, int k);
int		ft_validate(char **str, int *k);
void	push_swap(t_stack *a, t_stack *b, char **str);
void	ft_number(t_stack *a);
int		find_min_2(t_stack *a);
int		check_perf(t_stack x);
int		get_next_line(int fd, char **line);

#endif