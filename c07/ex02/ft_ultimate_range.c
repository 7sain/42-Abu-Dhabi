/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:07:50 by hualhash          #+#    #+#             */
/*   Updated: 2022/08/21 15:17:50 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*res;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = max - min;
	res = malloc(sizeof(int) * (i));
	if (res == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = res;
	i = 0;
	while (max > min)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (i);
}
