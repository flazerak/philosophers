/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:22:33 by flazerak          #+#    #+#             */
/*   Updated: 2022/11/04 12:09:44 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

void	ft_printf(t_philo *philo, char *str)
{
	long int	t;

	t = get_time_now() - philo->env->start_time;
	pthread_mutex_lock(&philo->env->printf_mutex);
	printf ("%ld %d %s\n", t, philo->id, str);
	pthread_mutex_unlock(&philo->env->printf_mutex);
}
