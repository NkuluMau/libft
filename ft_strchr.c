/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnqisha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 16:12:30 by nnqisha           #+#    #+#             */
/*   Updated: 2017/09/11 16:12:50 by nnqisha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s1;
	int		i;

	i = 0;
	s1 = (char *)s;
	if (s1[i] == '\0')
		return (0);
	while (s1[i] != '\0' && s1[i] != (char)c)
		i++;
	if (s1[i] == (char)c)
		return (&(s1[i]));
	return (0);
}
