/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:02:35 by flazerak          #+#    #+#             */
/*   Updated: 2022/11/04 12:13:25 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

int	print_error(char *str)
{
	if (!str)
		return (1);
	write (STDERR_FILENO, str, ft_strlen(str));
	return (1);
}
