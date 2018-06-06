/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flakouda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:29:54 by flakouda          #+#    #+#             */
/*   Updated: 2017/11/09 14:02:49 by flakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(char *argv)
{
	int		fd;
	char	buf;

	if ((fd = open(argv, O_RDONLY)) == -1)
		write(2, "open () failed.\n", 16);
	else
	{
		while (read(fd, &buf, 1) != 0)
			write(1, &buf, 1);
		if (close(fd) == -1)
			write(2, "close () failed.\n", 17);
	}
}

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	ft_display_file(argv[1]);
	return (0);
}
