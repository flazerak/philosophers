/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:31:48 by flazerak          #+#    #+#             */
/*   Updated: 2022/11/04 12:09:19 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

void	ft_join(t_env *env)
{
	int	i;

	i = -1;
	while (++i < env->nb_of_philos)
		pthread_join(env->philos[i].th, NULL);
	pthread_join(env->checker, NULL);
}
