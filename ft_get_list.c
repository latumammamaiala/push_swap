/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfavero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 17:16:18 by cfavero           #+#    #+#             */
/*   Updated: 2018/03/22 17:57:57 by cfavero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// puo prendere anche una lista "1 2 3 5 6" slipt white spaces

int			ft_create_list(t_lst **lst, t_lst *temp)
{
	if (!(*lst))
		*lst = temp;
	else if (!((*lst)->next))
	{
		temp->prev = *lst;
		(*lst)->prev = temp;
		(*lst)->next = temp;
	}
	else
	{
		temp->prev = (*lst)->prev;
		(*lst)->prev->next = temp;
		(*lst)->prev = temp;
	}
	return (1);
}

static int	ft_list(t_lst **lst, int nb)
{
	t_lst *temp;

	if (!(lst))
		return (-1);
	if (!(temp = (t_lst*)malloc(sizeof(t_lst))))
		return (-1);
	temp->val = nb;
	temp->prev = NULL;
	temp->next = !(*lst) ? NULL : *lst;
	ft_create_list(lst, temp);
	return (1);
}

int			ft_get_list(int ac, char **av, t_lst **lst_a)
{
	int i;

	i = 1;
	while (i < ac)
	{
		if (!(ft_list(lst_a, ft_atoi(av[i++]))))
			return (-1);
	}
	return (1);
}
