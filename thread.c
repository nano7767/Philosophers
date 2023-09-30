/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thread.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svikornv <svikornv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:44:32 by svikornv          #+#    #+#             */
/*   Updated: 2023/09/30 16:01:31 by svikornv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	*routine(void *philo)
{
	while (philo->dead != 1)
	{
		eat(philo);
		sleep(philo);
		think(philo);
	}
}

int	create_thread(t_philo *philo)
{
	int	i;
	
	i = 0;
	while (i < philo->no_philos)
	{
		pthread_create(&philo[i].thread, NULL, &routine, &philo[i]);
		i++;
	}
	i = 0;
	while (i < philo->no_philos)
	{
		pthread_join(&philo[i].thread, NULL, &routine, &philo[i]);
		i++;
	}
	return (0);
}