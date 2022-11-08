/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_philos.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:30:57 by flazerak          #+#    #+#             */
/*   Updated: 2022/11/04 12:06:34 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

void	ft_create_philos(t_env *env)
{
	int	i;

	i = -1;
	env->start_time = get_time_now();
	while (++i < env->nb_of_philos)
		pthread_create(&env->philos[i].th, NULL, \
		&philo_routine, &env->philos[i]);
	pthread_create(&env->checker, NULL, &checker_routine, env);
}
