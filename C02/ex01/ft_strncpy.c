/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:18:42 by hualhash          #+#    #+#             */
/*   Updated: 2022/08/11 12:36:47 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	h;

	h = 0;
	while (*(src + h) != '\0' && h < n)
	{
		*(dest + h) = *(src + h);
		h++;
	}
	while (h < n)
	{
		*(dest + h) = '\0';
		h++;
	}
	return (dest);
}
