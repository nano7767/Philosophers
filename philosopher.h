/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svikornv <svikornv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 10:30:04 by svikornv          #+#    #+#             */
/*   Updated: 2023/09/30 15:55:43 by svikornv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <pthread.h>

typedef struct s_philo
{
	pthread_t	thread;
	int	no_philos;
	int	time_to_die;
	int	time_to_eat;
	int	time_to_sleep;
	int	NOTEPME;
	int	id;
	int	eating;
	int	eaten;
	int	dead;
}		t_philo;

// typedef struct s_philo
// {
// 	int	id;
// 	int	eaten;
// 	int	dead;
// }		t_philo;