/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:02:23 by flazerak          #+#    #+#             */
/*   Updated: 2022/11/04 12:12:19 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

int	main(int ac, char **av)
{
	t_env	env;

	memset(&env, 0, sizeof(t_env));
	if (ft_init_env(ac, av, &env) == 1)
		return (1);
	if (ft_init_mutexes(&env))
		return (1);
	ft_init_philos(&env);
	ft_create_philos(&env);
	ft_join(&env);
	ft_destroy_free(&env);
	return (0);
}
