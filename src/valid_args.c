/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:02:28 by flazerak          #+#    #+#             */
/*   Updated: 2022/11/04 12:14:20 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

int	valid_args(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 5 && ac != 6)
		return (print_error("Invalid nb of args\n"));
	while (++i < ac)
	{
		if (!is_valid_digits(av[i]) || (int)(ft_atoi(av[i]) < 0))
			return (print_error("Invalid args!\n"));
	}
	return (0);
}
