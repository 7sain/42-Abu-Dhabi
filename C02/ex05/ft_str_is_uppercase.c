/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 17:12:35 by hualhash          #+#    #+#             */
/*   Updated: 2022/08/09 17:22:14 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
	{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if ((*str < 'A') || (*str > 'Z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
