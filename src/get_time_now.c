/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_time_now.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:32:08 by flazerak          #+#    #+#             */
/*   Updated: 2022/11/04 12:10:54 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

long long	get_time_now(void)
{
	long long		t;
	struct timeval	t_s;

	gettimeofday(&t_s, NULL);
	t = (t_s.tv_sec * 1000) + (t_s.tv_usec / 1000);
	return (t);
}

//sec milli micro