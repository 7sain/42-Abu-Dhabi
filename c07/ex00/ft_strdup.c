/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 15:32:56 by hualhash          #+#    #+#             */
/*   Updated: 2022/08/20 19:08:15 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;

	i = 0;
	while (src[i])
		i++;
	new = malloc(sizeof(src) * i);
	i = 0;
	if (new == NULL)
		return (0);
	else
	{
		while (src[i])
		{
			new[i] = src[i];
			i++;
		}
		new[i] = '\0';
		return (new);
	}
}
