/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svikornv <svikornv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:58:45 by svikornv          #+#    #+#             */
/*   Updated: 2023/12/18 14:53:19 by svikornv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

u_int64_t	get_time(void)
{
	struct	timeval tv;

	if (gettimeofday(&tv, NULL))
		return (0);
	return ((tv.tv_sec * (uint64_t)1000) + (tv.tv_usec / 1000));
}

void	pick_forks(t_philo	*philo)
{
	int	left_fork;
	int	right_fork;

	left_fork = philo->id - 1;
	right_fork = (philo->id) % philo->philo_num;
	pthread_mutex_lock(&forks[left_fork]);
	printf("philo %d has taken a fork\n", philo->id);
	pthread_mutex_lock(&forks[right_fork]);
	printf("philo %d has taken a fork\n", philo->id);
}

void	drop_forks(t_philo *philo)
{
	int	left_fork;
	int	right_fork;

	left_fork = philo->id;
	right_fork = (philo->id + 1) % philo->philo_num;
	pthread_mutex_unlock(&forks[left_fork]);
	printf("philo %d has dropped a fork\n", philo->id);
	pthread_mutex_lock(&forks[right_fork]);
	printf("philo %d has dropped a fork\n", philo->id);
	sleep(philo)
}

void	eat(t_philo *philo)
{
	// t_philo	*philo;

	// pthread_mutex_lock(philo->r_fork);
	// printf("philo %d has taken a fork", philo->id);
	// pthread_mutex_lock(philo->l_fork);
	// printf("philo %d has taken a fork", philo->id);
	// philo->eating = 1;
	// printf("philo %d is eating", philo->id);
	// //mutex lock meal
	// philo->eaten++;
	// usleep(philo->time_to_eat);
	// philo->eating = 0;
	// pthread_mutex_unlock(philo->r_fork);
	// pthread_mutex_unlock(philo->l_fork);
	pick_forks(philo);
	philo->eating = 1;
	//philo->time_to_die
	printf("philo %d is eating\n", philo->id);
	usleep(philo->time_to_eat);
	philo->eaten++;
	philo->eating = 0;
	drop_forks(philo);

}

void	sleep(t_philo *philo)
{
	t_philo	*philo;

	printf("philo %d is sleeping" , philo->id);
	usleep(philo->time_to_sleep);
}

void	think(t_philo *philo)
{
	t_philo	*philo;

	printf("philo %d is thinking", philo->id);
}
