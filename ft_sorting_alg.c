/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting_alg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfavero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 13:27:34 by cfavero           #+#    #+#             */
/*   Updated: 2018/03/24 17:29:42 by cfavero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_move_b(t_all *data, int middle)
{
	if (AA < middle)
	{
		PB;
		ft_printf("pb\n");
	}
	else if (AA > AB)
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

int		ft_find_place(t_lst *lst)
{
	int		k;
	int		val;
	t_lst	*tmp;

	k = 2;
	tmp = lst;
	val = lst->val;
	lst = lst->next->next;
	while (lst != tmp)
	{
		//		ft_printf("val : %d, prev : %d, next : %d", val, lst->prev->val, lst->next->val);
		if (val < lst->prev->val && val > lst->next->val)
			return (k);
		else
		{
			k++;
			lst = lst->next;
		}
	}
	return (k);
}

static int	ft_push_order(t_all *data, int half, int middle)
{
	int		k;

	k = ft_find_place(data->lst_b);
	//	ft_printf("position : %d\n", k);
	if (BA < BB)
	{
		if (k < half)
		{
			if (AA > middle && AA > AB)
			{
				SS;
				ft_printf("ss\n");
			}
			else
			{
				SB;
				ft_printf("sb\n");
			}
		}
		else
		{
			if (AA > middle && AA < AB)
			{
				RR;
				ft_printf("rr\n");
			}
			else
			{
				RB;
				ft_printf("rb\n");
			}
		}
	}
	return (half);
}

static int	ft_check_push(t_all *data, int middle, int y)
{
	if (AA < middle)
	{
		PB;
		ft_printf("pb\n");
		y++;
		ft_push_order(data, (y / 2), middle);
	}
	else if (AA > AB)
	{
		SA;
		ft_printf("sa\n");
	}
	else
	{
		RA;
		ft_printf("ra\n");
	}
//	ft_printf("y: %d, middle: %d\n", y, middle);
//	ft_print_stack(data->lst_a);
	return (y);
}

int			ft_sorting_alg(t_all *data, int ac)
{
	int		y;
	int		i;
	int		max;
	int		try;
	int		middle;

	y = 2;
	i = 2;
	ac = ac - 1;
	middle = ft_errors(data->lst_a, ac);
//	ft_printf("middle : %d\n", middle);
	while (!(data->lst_b))
		ft_move_b(data, middle);
	while (!(data->lst_b->next))
		ft_move_b(data, middle);
	ft_push_order(data, (y / i), middle);
	max = (ac / 2) - ((ac % 2) == 0 ? 1 : 0);
	while (y < max)
		y = ft_check_push(data, middle, y);
//	ft_print_stack(data->lst_b);
//	ft_print_stack(data->lst_a);
	while ((try = ft_try_a(data, ((ac - y) / 2))) == 0)
	{
//		ft_printf("try : %d\n", try);
	//	if (i <= ac)
		i = ac - y;
		max = ((i / 2) + y);
		(i % 2) == 0 ? max-- : max;
		middle = ft_errors(data->lst_a, ac - y);
//		ft_printf("1 middle : %d, y : %d, max : %d, i : %d, ac : %d\n", middle, y, max, i, ac);
		while (y < max)
			y = ft_check_push(data, middle, y);
	}
//	ft_printf("result : %d\n", try);
//	ft_print_stack(data->lst_b);
//	ft_print_stack(data->lst_a);
	ft_solve_a(data, (ac - y) / 2);
//	ft_print_stack(data->lst_a);
/*	while (data->lst_b->next)
	{
		if (ft_are_sorted_a(data->lst_a) == 0)
			ft_solve_b(data);
		else
			ft_sort(data);
//		ft_printf("ciao");
//		ft_print_stack(data->lst_b);
	}
	if (ft_are_sorted_a(data->lst_a) == 1)
		ft_sort(data);
	ft_solve_b(data);*/
	ft_print_stack(data->lst_b);
//	ft_print_stack(data->lst_a);
	return (0);
}
