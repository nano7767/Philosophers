/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svikornv <svikornv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:58:45 by svikornv          #+#    #+#             */
/*   Updated: 2023/09/30 15:01:53 by svikornv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	eat(t_philo *philo)
{
	printf("philo %d is eating", philo->id);
	//mutex lock meal
	philo->eating = 1;
	philo->eaten++;
	//delay time to eat by x milliseconds
	philo->eating = 0;
	//mutex unlock
}

void	sleep(t_philo *philo)
{
	printf("philo %d is sleeping" , philo->id);
}

void	think(t_philo *philo)
{
	printf("philo %d is thinking", philo->id);
}