/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usefull.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfavero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 17:55:38 by cfavero           #+#    #+#             */
/*   Updated: 2018/03/20 19:03:30 by cfavero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_find_middle(int *arr, int k)
{
	int val;
	int more;
	int less;
	int i;
	int len;

	len = k;
	while (k--)
	{
		i = 0;
		more = 0;
		less = 0;
		val = arr[k];
		while (i < len)
		{
			if (val < arr[i])
				less++;
			else
				more++;
			i++;
		}
		if ((more - less == 0) || (len % 2 == 1 && more - less == 1))
			return (val);
	}
	return (val);
}
