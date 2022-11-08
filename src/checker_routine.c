/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_routine.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:01:15 by flazerak          #+#    #+#             */
/*   Updated: 2022/11/04 12:03:56 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

void	*checker_routine(void *vars)
{
	t_env	*env;

	env = (t_env *)vars;
	if (env->nb_times_m_eat == 0)
		return (NULL);
	while (get_time_now() < env->start_time)
		continue ;
	env->end_sim = 0;
	while (1)
	{
		if (check_end_sim(env) == 1)
			return (NULL);
		usleep(1000);
	}
	return (NULL);
}
