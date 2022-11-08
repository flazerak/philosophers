/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eating.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:30:19 by flazerak          #+#    #+#             */
/*   Updated: 2022/11/04 12:04:10 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

void	eating(t_philo *philo)
{
	forks_up(philo);
	ft_printf(philo, "is eating");
	philo->last_meal = get_time_now();
	philo->nb_t_ate++;
	ft_usleep(philo->env->t_t_eat, philo->env);
	forks_down(philo);
}
