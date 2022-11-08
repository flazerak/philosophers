/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_env.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:31:13 by flazerak          #+#    #+#             */
/*   Updated: 2022/11/04 12:07:20 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

int	ft_init_env(int ac, char **av, t_env *en)
{
	if (valid_args(ac, av) == 1)
		return (1);
	en->nb_of_philos = ft_atoi(av[1]);
	if (en->nb_of_philos == 0)
		return (print_error("Nb of philos can'c be 0\n"));
	en->t_to_die = ft_atoi(av[2]);
	en->t_t_eat = ft_atoi(av[3]);
	en->t_to_sleep = ft_atoi(av[4]);
	if (ac == 6)
		en->nb_times_m_eat = ft_atoi(av[5]);
	else if (ac == 5)
		en->nb_times_m_eat = -1;
	if (en->nb_times_m_eat == 0)
		return (print_error("nbTimesMEat cannot be 0\n"));
	if (en->t_to_die < 60 || en->t_t_eat < 60 || en->t_to_sleep < 60)
		return (print_error("Time arguments cannot be smaller than 60ms\n"));
	if (en->nb_of_philos > 200)
		return (print_error("Philosopher nbs cannot be higher than 200\n"));
	en->end_sim = 0;
	return (0);
}
