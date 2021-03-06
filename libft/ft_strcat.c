/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afesyk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 15:06:29 by afesyk            #+#    #+#             */
/*   Updated: 2017/10/28 15:08:22 by afesyk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*tmp;

	if (!*s1 && !*s2)
		return (s1);
	i = 0;
	j = 0;
	tmp = (char*)s2;
	while (s1[i] != '\0')
		i++;
	while (tmp[j] != '\0')
	{
		s1[i + j] = tmp[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}
