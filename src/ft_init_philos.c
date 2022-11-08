/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_philos.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:31:37 by flazerak          #+#    #+#             */
/*   Updated: 2022/11/04 12:08:43 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

void	ft_init_philos(t_env *env)
{
	int	i;

	i = -1;
	while (++i < env->nb_of_philos)
	{
		env->philos[i].id = i + 1;
		env->philos[i].env = env;
		env->philos[i].th = 0;
		env->philos[i].nb_t_ate = 0;
		env->philos[i].last_meal = 0;
		env->philos[i].dead = 0;
		got_forks(&env->philos[i]);
	}
}
