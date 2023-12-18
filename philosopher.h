/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svikornv <svikornv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 10:30:04 by svikornv          #+#    #+#             */
/*   Updated: 2023/12/18 14:46:33 by svikornv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

typedef struct s_philo
{
	pthread_t	thread;
	int	no_philos;
	int	time_to_die;
	int	time_to_eat;
	int	time_to_sleep;
	int	meals_left;
	int	id;
	int	eating;
	int	eaten;
	int	dead;
	// pthread_mutex_t	*r_fork;
	// pthread_mutex_t	*l_fork;
	pthread_mutex_t	*forks;
}		t_philo;

// typedef struct s_philo
// {
// 	int	id;
// 	int	eaten;
// 	int	dead;
// }		t_philo;