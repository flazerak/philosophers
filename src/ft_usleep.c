/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usleep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:02:57 by flazerak          #+#    #+#             */
/*   Updated: 2022/11/04 12:10:35 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

void	ft_usleep(long int time_in_ms, t_env *env)
{
	long int	start_time;

	start_time = get_time_now();
	while (((get_time_now() - start_time) < time_in_ms) && env->end_sim == 0)
		usleep(100);
}
