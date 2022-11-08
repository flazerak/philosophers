/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_forks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:31:20 by flazerak          #+#    #+#             */
/*   Updated: 2022/11/04 12:07:42 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

int	ft_init_forks(t_env *env)
{
	int		index;
	t_fork	*fork;

	index = 0;
	env->forks = malloc(sizeof(t_fork *) * env->nb_of_philos);
	if (!env->forks)
		return (print_error("Allocation Failed!\n"));
	while (index < env->nb_of_philos)
	{
		fork = malloc(sizeof(t_fork));
		if (!fork)
			return (print_error("Allocation Failed!\n"));
		env->forks[index] = fork;
		index++;
	}
	return (0);
}
