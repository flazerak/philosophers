/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:02:05 by flazerak          #+#    #+#             */
/*   Updated: 2022/11/04 12:06:53 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

void	ft_destroy_free(t_env *env)
{
	int	i;

	i = 0;
	while (i < env->nb_of_philos)
	{
		pthread_mutex_destroy(&env->forks[i]->lock);
		free(env->forks[i]);
		i++;
	}
	pthread_mutex_destroy(&env->printf_mutex);
	free(env->philos);
	free(env->forks);
}
