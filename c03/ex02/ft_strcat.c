/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:01:10 by hualhash          #+#    #+#             */
/*   Updated: 2022/08/13 16:54:04 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	h;

	h = 0;
	while (dest[h])
		h++;
	while (*src)
		dest[h++] = *src++;
	dest[h] = '\0';
	return (dest);
}
