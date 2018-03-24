/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfavero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 17:26:08 by cfavero           #+#    #+#             */
/*   Updated: 2018/03/24 17:29:38 by cfavero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_fill(int ac, char **av, t_all **data)
{
	static t_tab	f[] = {{"sa", ft_s_a}, {"sb", ft_s_b}, {"ss", ft_s_s},
		{"pa", ft_p_a}, {"pb", ft_p_b}, {"ra", ft_r_a}, {"rb", ft_r_b},
		{"rr", ft_r_r}, {"rra", ft_rr_a}, {"rrb", ft_rr_b}, {"rrr", ft_rr_r},
		{NULL, NULL}};

	if (!(*data = malloc(sizeof(**data))))
		return (-1);
	(*data)->lst_a = NULL;
	(*data)->lst_b = NULL;
	(*data)->tab_f = f;
	if (!(ft_get_list(ac, av, &((*data)->lst_a))))
		return (-1);
	return (1);
}

int		ft_sort(t_all *data)
{
		while (AC < AB)
		{
			RA;
			SA;
			ft_printf("ra\nsa\n");
		}
		while (AA > AZ)
		{
			RRA;
			ft_printf("rra\n");
		}
	return (0);
}

int		ft_solve_b(t_all *data)
{
	if (data->lst_b->next != NULL)
	{
		if (BA > BB)
		{
			PA;
			ft_printf("pa\n");
		}
		else
		{
			SB;
			ft_printf("sb\n");
		}
		if (AA > AB)
		{
			SA;
			ft_printf("sa\n");
		}
	}
	else
	{
		PA;
		ft_printf("pa\n");
	}
	return (0);
}


int		ft_try_a(t_all *data, int half)
{
	int k;
	int i;
	t_lst *tmp;

//	ft_printf("why\n");
	tmp = data->lst_a;
	i = 0;
	while (i++ < 100000)
	{
		k = ft_find_place(tmp);
		if (TA > TB && (k <= half || half < 3))
			ST;
		else
			RT;
//		ft_print_stack(tmp);
		if (ft_are_sorted_a(tmp) == 0)
			return (1);
	}
//	ft_printf("that's why\n");
//	ft_print_stack(tmp);
//	ft_print_stack(data->lst_a);
	return (0);
}

int		ft_solve_a(t_all *data, int half)
{
	int k;

	while (ft_are_sorted_a(data->lst_a) == 1)
	{
		k = ft_find_place(data->lst_a);
//		ft_print_stack(data->lst_a);
		if (AA > AB && (k <= half || half < 3))
		{
			SA;
			ft_printf("sa\n");
		}
		else
		{
			RA;
			ft_printf("ra\n");
		}
	}
	return (0);
}
