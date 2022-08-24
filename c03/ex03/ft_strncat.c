/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:09:11 by hualhash          #+#    #+#             */
/*   Updated: 2022/08/13 16:57:26 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	h;
	unsigned int	i;

	i = 0;
	h = 0;
	while (dest[i])
		i++;
	while (src[h] && h < nb)
	{
		dest[i + h] = src[h];
		h++;
	}
	dest [i + h] = '\0';
	return (dest);
}
