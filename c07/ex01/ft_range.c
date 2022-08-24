/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:50:43 by hualhash          #+#    #+#             */
/*   Updated: 2022/08/21 15:04:17 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*res;

	if (min >= max)
	{
		return (0);
	}
	i = max - min;
	res = (int *)malloc(sizeof(int) * (i));
	if (res == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (max > min)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (res);
}
