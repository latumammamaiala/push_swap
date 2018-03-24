/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfavero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 14:08:21 by cfavero           #+#    #+#             */
/*   Updated: 2018/03/22 17:32:27 by cfavero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int ac, char **av)
{
	t_all *data;

	if (ft_are_int(ac, av) != 0)
	{
		ft_printf("Error\n");
		return (-1);
	}
	ft_fill(ac, av, &data);
	if (ft_checker(ac, av, data) != 1)
		return (-1);
	ft_sorting_alg(data, ac);
//	ft_print_stack(data->lst_a);
//	ft_print_stack(data->lst_b);
	if (ft_are_sorted_a(data->lst_a) == 0)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	return (0);
}
