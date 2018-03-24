/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfavero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 18:39:30 by cfavero           #+#    #+#             */
/*   Updated: 2018/03/22 17:57:53 by cfavero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_errors(t_lst *a, int len)
{
	int		*arr;
	int		i;
	int		k;
	t_lst	*temp;

	i = 0;
	temp = a;
	if (!(arr = malloc(sizeof(int) * len)))
		return (-1);
	arr[i] = a->val;
	a = a->next;
	while (a != temp)
	{
		k = 0;
		i++;
		arr[i] = a->val;
		while (k < i)
		{
			arr[i] != arr[k] ? k++ : 0;
			if (arr[i] == arr[k] && i != k)
				return (-1);
		}
		a = a->next;
	}
	i = ft_find_middle(arr, i + 1);
	return (i);
}

int		ft_are_int(int ac, char **av)
{
	int i;
	int k;

	i = 1;
	(void)av;
	while (i < ac)
	{
		k = 0;
		if (av[i][k] == '-')
			k++;
		while (ft_isdigit(av[i][k]))
			k++;
		if (av[i][k])
			return (1);
		if (ft_atoll(av[i]) > INT_MAX)
			return (1);
		if (ft_atoll(av[i]) < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}

/*int		ft_are_sorted_b(t_lst *lst)
{
	t_lst *tmp;

	tmp = lst->prev;
	while (lst != tmp)
	{
		if (lst->val > lst->next->val)
			lst = lst->next;
		else
			return (1);
	}
	if (lst->val > lst->prev->val)
		return (1);
	return (0);
}*/

int		ft_are_sorted_a(t_lst *lst)
{
	t_lst *tmp;

	tmp = lst->prev;
	while (lst != tmp)
	{
		if (lst->val < lst->next->val)
			lst = lst->next;
		else
			return (1);
	}
	if (lst->val < lst->prev->val)
		return (1);
	return (0);
}

int		ft_checker(int ac, char **av, t_all *data)
{
	int i;

	i = 0;
	(void)av;
	if (!(data->lst_a))
		return (0);
	// if the instruction do not exist or are badly formatted (get next line (fd = 0))
	if ((ft_are_int(ac, av)) == 1 || ft_errors(data->lst_a, ac) == -1)
	{
		ft_printf("Error\n");
		return (-1);
	}
	return (1);
}
