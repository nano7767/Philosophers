/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svikornv <svikornv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:57:49 by svikornv          #+#    #+#             */
/*   Updated: 2023/09/30 14:58:50 by svikornv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

// void	init_input(char **argv)
// {
// 	t_philo	philo;

// 	v.philos = ft_atoi(argv[1]);
// 	v.time_to_die = ft_atoi(argv[2]);
// 	v.time_to_eat = ft_atoi(argv[3]);
// 	v.time_to_sleep  = ft_atoi(argv[4]);
// 	if (argv[5])
// 		v.NOTEPME = ft_atoi(argv[5]);
// 	else
// 		v.NOTEPME = -1;
// }

void	init_philos(char **argv)
{
	t_philo	*philo;
	int	i;


	philo->no_philos = ft_atoi(argv[1]);
	i = 0;
	while (i < ft_atoi(argv[1]))
	{
		philo[i].id = i + 1;
		philo[i].time_to_die = ft_atoi(argv[2]);
		philo[i].time_to_eat = ft_atoi(argv[3]);
		philo[i].time_to_sleep = ft_atoi(argv[4]);
		philo[i].NOTEPME = -1;
		if (argv[5])
			philo.NOTEPEME = ft_atoi(argv[5]);
		philo[i].eating = 0;
		philo[i].eaten = 0;
		philo[i].dead = 0;
		i++; 	
	}
}