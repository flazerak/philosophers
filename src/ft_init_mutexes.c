/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_mutexes.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:02:19 by flazerak          #+#    #+#             */
/*   Updated: 2022/11/04 12:08:04 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

int	ft_init_mutexes(t_env *env)
{
	int	i;

	i = 0;
	if (ft_init_forks(env))
		return (1);
	env->philos = malloc(sizeof(t_philo) * env->nb_of_philos);
	if (!env->philos)
		return (print_error("Failed malloc!!"));
	while (i < env->nb_of_philos)
		pthread_mutex_init(&(env->forks[i++]->lock), NULL);
	pthread_mutex_init(&env->printf_mutex, NULL);
	return (0);
}
