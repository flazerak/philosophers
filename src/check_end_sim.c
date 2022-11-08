/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_end_sim.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:30:06 by flazerak          #+#    #+#             */
/*   Updated: 2022/11/04 12:03:40 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

int	check_end_sim(t_env *env)
{
	int	i;
	int	check;

	i = -1;
	check = 0;
	while (++i < env->nb_of_philos)
	{
		if (philo_dead(&(env->philos[i])))
			return (1);
		if (env->nb_times_m_eat != -1)
		{
			if (env->philos[i].nb_t_ate <= env->nb_times_m_eat)
				check = 1;
		}
	}
	if (env->nb_times_m_eat != -1 && !check)
	{
		env->end_sim = 1;
		return (1);
	}
	return (0);
}
