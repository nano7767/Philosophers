/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svikornv <svikornv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:12:02 by svikornv          #+#    #+#             */
/*   Updated: 2023/12/18 14:42:51 by svikornv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

int	main(int argc, char **argv)
{
	if (argc != 5 || argc != 6)
		return (write(2, "invalid argument count\n", 22), 1);
	if (check_args(argv) == 1)
		return (1);
	init_philos(argv);
}

int	check_number(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

int	check_args(char **argv)
{
	if (ft_atoi(argv[1]) <= 0 || check_number(argv[1]) == 1)
		return (write(2, "invalid number of philosophers\n", 32), 1);
	else if (ft_atoi(argv[2]) <= 0 || check_number(argv[2]) == 1)
		return (write(2, "invalid time to die\n", 21), 1);
	else if (ft_atoi(argv[3]) <= 0 || check_number(argv[3]) == 1)
		return (write(2, "invalid time to eat\n", 21), 1);
	else if (ft_atoi(argv[4]) <= 0 || check_number(argv[4]) == 1)
		return (write(2, "invalid time to sleep\n"), 1);
	else if (ft_atoi(argv[5]) < 0 || check_number(argv[5]) == 1)
		return (write(2, "invalid times philosopher must eat"), 1);
	return (0);
}

// void	init_vars(char **argv)
// {
// 	t_vars	v;

// 	v.philos = ft_atoi(argv[1]);
// 	v.time_to_die = ft_atoi(argv[2]);
// 	v.time_to_eat = ft_atoi(argv[3]);
// 	v.time_to_sleep  = ft_atoi(argv[4]);
// 	if (argv[5])
// 		v.NOTEPME = ft_atoi(argv[5]);
// 	else
// 		v.NOTEPME = -1;
// }