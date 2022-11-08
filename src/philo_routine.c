/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_routine.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:02:31 by flazerak          #+#    #+#             */
/*   Updated: 2022/11/04 12:13:07 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

void	*philo_routine(void *vars)
{
	t_philo	*philo;

	philo = (t_philo *)vars;
	if (philo->env->nb_times_m_eat == 0 || philo->env->t_to_die == 0)
		return (NULL);
	philo->last_meal = get_time_now();
	if ((philo->id % 2))
		thinking(philo);
	while (!philo->env->end_sim)
	{
		if (philo->env->nb_of_philos == 1)
		{
			pthread_mutex_lock(&philo->left_fork->lock);
			ft_printf(philo, "has taken a fork");
			usleep(1000000);
			break ;
		}
		eating(philo);
		sleeping(philo);
		thinking(philo);
	}
	return (NULL);
}
