/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:06:03 by hualhash          #+#    #+#             */
/*   Updated: 2022/08/22 18:07:20 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	isin(char *charset, char a)
{
	if (a == '\0')
		return (1);
	while (*charset)
	{
		if (*charset == a)
			return (1);
		charset++;
	}
	return (0);
}

void	make(char **res, int c, char *str, int len)
{
	int	i;

	res[c] = (char *)malloc(sizeof(char) * len);
	i = 0;
	while (i < len)
	{
		res[c][i] = str[i];
		i++;
	}
	res[c][len] = '\0';
}

int	occ(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (isin(charset, str[i]) == 0 && isin(charset, str[i + 1]) == 1)
				count++;
		i++;
	}
	return (count);
}

void	assign(char **res, char *str, char *charset, int count)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	c = 0;
	while (str[i] && c < count)
	{
		j = 0;
		while (isin(charset, str[i + j]) == 0)
			j++;
		if (j != 0)
		{
			make(res, c, &str[i], j);
			i += j;
			c++;
		}
		else
			i++;
	}
}

char	**ft_split(char *str, char *charset)
{
	int		count;
	char	**res;

	count = occ(str, charset);
	res = (char **)malloc(sizeof(char *) * (count + 1));
	assign(res, str, charset, count);
	res[count] = 0;
	return (res);
}
