/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flakouda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:29:21 by flakouda          #+#    #+#             */
/*   Updated: 2017/11/09 12:29:22 by flakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		length;
	char	*dest;

	i = -1;
	length = 0;
	while (src[length])
		length++;
	dest = (char*)malloc(sizeof(*dest) * (length + 1));
	if (!dest)
		return (0);
	while (src[++i])
		dest[i] = src[i];
	dest[i] = src[i];
	return (dest);
}
