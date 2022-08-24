/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:21:23 by hualhash          #+#    #+#             */
/*   Updated: 2022/08/21 15:44:20 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*a;
	int		i;
	int		c;
	int		d;

	a = malloc(sizeof(strs));
	i = 0;
	d = 0;
	while (i < size)
	{
		c = 0;
		while (strs[i][c] != '\0')
		{
			a[d++] = strs[i][c++];
		}
		c = 0;
		while (sep[c] != '\0' && i != size - 1)
		{
			a[d++] = sep[c++];
		}
		i++;
	}
	a[d] = '\0';
	return (a);
}
