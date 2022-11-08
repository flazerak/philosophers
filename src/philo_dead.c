/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_dead.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:32:50 by flazerak          #+#    #+#             */
/*   Updated: 2022/11/04 12:12:51 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

int	philo_dead(t_philo *philo)
{
	while (get_time_now() < (philo->env->start_time + 10))
		continue ;
	if ((get_time_now() - philo->last_meal) >= philo->env->t_to_die)
	{
		philo->env->end_sim = 1;
		ft_printf(philo, "died");
		return (1);
	}
	return (0);
}
