/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfavero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 16:04:47 by cfavero           #+#    #+#             */
/*   Updated: 2018/03/19 11:39:57 by cfavero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_r_b(t_lst **a, t_lst **b)
{
	(void)a;
	if (!(*b && (*b)->prev))
		return (1);
	(*b) = (*b)->next;
	return (1);
}

int	ft_r_a(t_lst **a, t_lst **b)
{
	ft_r_b(b, a);
	return (1);
}

int	ft_r_r(t_lst **a, t_lst **b)
{
	ft_r_b(a, b);
	ft_r_a(a, b);
	return (1);
}
