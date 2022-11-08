/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   got_forks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:32:18 by flazerak          #+#    #+#             */
/*   Updated: 2022/11/04 12:11:28 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

void	got_forks(t_philo *philo)
{
	if (philo->id % 2)
	{
		philo->left_fork = philo->env->forks[(philo->id) % \
		(philo->env->nb_of_philos)];
		philo->right_fork = philo->env->forks[philo->id - 1];
	}
	else
	{
		philo->left_fork = philo->env->forks[philo->id - 1];
		philo->right_fork = philo->env->forks[(philo->id) % \
		(philo->env->nb_of_philos)];
	}
}
