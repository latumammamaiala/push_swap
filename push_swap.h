/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfavero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 16:03:02 by cfavero           #+#    #+#             */
/*   Updated: 2018/03/24 16:38:48 by cfavero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "printf/libft/libft.h"
# include "printf/ft_printf.h"
# define SA data->tab_f[0].f(&data->lst_a, &data->lst_b)
# define ST data->tab_f[0].f(&tmp, &data->lst_b)
# define RT data->tab_f[5].f(&tmp, &data->lst_b)
# define SB data->tab_f[1].f(&data->lst_a, &data->lst_b)
# define SS data->tab_f[2].f(&data->lst_a, &data->lst_b)
# define PA data->tab_f[3].f(&data->lst_a, &data->lst_b)
# define PB data->tab_f[4].f(&data->lst_a, &data->lst_b)
# define RA data->tab_f[5].f(&data->lst_a, &data->lst_b)
# define RB data->tab_f[6].f(&data->lst_a, &data->lst_b)
# define RR data->tab_f[7].f(&data->lst_a, &data->lst_b)
# define RRA data->tab_f[8].f(&data->lst_a, &data->lst_b)
# define RRB data->tab_f[9].f(&data->lst_a, &data->lst_b)
# define RRR data->tab_f[10].f(&data->lst_a, &data->lst_b)
# define AA data->lst_a->val
# define TA tmp->val
# define AB data->lst_a->next->val
# define AC data->lst_a->next->next->val
# define TB tmp->next->val
# define AZ data->lst_a->prev->val
# define BA data->lst_b->val
# define BB data->lst_b->next->val
# define BZ data->lst_b->prev->val
# define AZZ data->lst_a->prev->prev->val

typedef struct		s_lst
{
	int				val;
	struct s_lst	*next;
	struct s_lst	*prev;
}					t_lst;

typedef struct		s_tab
{
	char			*str;
	int				(*f)(t_lst **a, t_lst **b);
}					t_tab;

typedef struct		s_all
{
	t_lst			*lst_a;
	t_lst			*lst_b;
	t_tab			*tab_f;
}					t_all;

int					ft_find_place(t_lst *lst);
int					ft_sorting_alg(t_all *data, int ac);
int					ft_find_middle(int *arr, int k);
int					ft_are_sorted_a(t_lst *lst);
int					ft_are_sorted_b(t_lst *lst);
int					ft_errors(t_lst *a, int len);
int					ft_are_int(int ac, char **av);
int					ft_checker(int ac, char **av, t_all *data);
int					ft_solve_a(t_all *data, int half);
int					ft_try_a(t_all *data, int half);
int					ft_solve_b(t_all *data);
int					ft_sort(t_all *data);
int					ft_fill(int ac, char **av, t_all **data);
void				ft_print_stack(t_lst *lst);
void				ft_print_add(t_lst *lst);
int					ft_create_list(t_lst **lst, t_lst *temp);
int					ft_get_list(int ac, char **av, t_lst **lst);
int					ft_s_a(t_lst **a, t_lst **b);
int					ft_s_b(t_lst **a, t_lst **b);
int					ft_s_s(t_lst **a, t_lst **b);
int					ft_p_a(t_lst **a, t_lst **b);
int					ft_p_b(t_lst **a, t_lst **b);
int					ft_r_a(t_lst **a, t_lst **b);
int					ft_r_b(t_lst **a, t_lst **b);
int					ft_r_r(t_lst **a, t_lst **b);
int					ft_rr_a(t_lst **a, t_lst **b);
int					ft_rr_b(t_lst **a, t_lst **b);
int					ft_rr_r(t_lst **a, t_lst **b);
#endif
