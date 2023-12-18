/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svikornv <svikornv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:57:49 by svikornv          #+#    #+#             */
/*   Updated: 2023/12/18 14:52:41 by svikornv         ###   ########.fr       */
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

int	init_forks(t_philo *philo)
{
	pthread_mutex_t	*philo->forks[philo->philo_num];
	int	i;

	i = 0;
	while (i++ < philo->philo_num)
		pthread_mutex_init(&forks[i], NULL);
}

void	init_philos(char **argv)
{
	t_philo	*philo;
	int	i;

	philos = malloc(sizeof(t_philo) * philo->philo_num + 1);
	if (!philos)
		return ;
	philo->no_philos = ft_atoi(argv[1]);
	i = 0;
	while (i < ft_atoi(argv[1]))
	{
		philo[i].id = i + 1;
		philo[i].time_to_die = ft_atoi(argv[2]);
		philo[i].time_to_eat = ft_atoi(argv[3]);
		philo[i].time_to_sleep = ft_atoi(argv[4]);
		philo[i].meals_left = -1;
		if (argv[5])
			philo.meals_left = ft_atoi(argv[5]);
		philo[i].eating = 0;
		philo[i].eaten = 0;
		philo[i].dead = 0;
		i++; 	
	}
}