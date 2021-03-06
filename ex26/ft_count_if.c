/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flakouda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:29:49 by flakouda          #+#    #+#             */
/*   Updated: 2017/11/09 12:29:50 by flakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char *))
{
	int		i;
	int		nb;

	i = -1;
	nb = 0;
	while (tab[++i])
		if (f(tab[i]) == 1)
			nb++;
	return (nb);
}
