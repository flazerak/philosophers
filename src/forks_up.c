/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forks_up.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:30:41 by flazerak          #+#    #+#             */
/*   Updated: 2022/11/04 12:05:53 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

void	forks_up(t_philo *philo)
{
	pthread_mutex_lock(&philo->left_fork->lock);
	ft_printf(philo, "has taken a fork");
	pthread_mutex_lock(&philo->right_fork->lock);
	ft_printf(philo, "has taken a fork");
}
