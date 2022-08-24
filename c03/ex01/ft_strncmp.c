/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 14:51:45 by hualhash          #+#    #+#             */
/*   Updated: 2022/08/13 16:53:26 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	h;

	if (!n)
		return (0);
	h = 0;
	while (h < n && s1[h] && s2[h] && s1[h] == s2[h])
		h ++;
	if (h < n)
		return (s1[h] - s2[h]);
	else
		return (0);
}
