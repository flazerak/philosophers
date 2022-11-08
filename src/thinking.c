/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thinking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:01:08 by flazerak          #+#    #+#             */
/*   Updated: 2022/11/04 12:13:59 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

void	thinking(t_philo *philo)
{
	time_t	t_t_tihink;

	t_t_tihink = philo->env->t_to_die - \
	(get_time_now() - philo->last_meal - philo->env->t_t_eat) / 2 ;
	ft_printf(philo, "is thinking");
	if (philo->nb_t_ate == 0)
		ft_usleep(philo->env->t_t_eat / 4, philo->env);
	else if (philo->env->nb_of_philos > 4)
		ft_usleep(t_t_tihink / 2, philo->env);
}
