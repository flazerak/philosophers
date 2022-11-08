/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:01:02 by flazerak          #+#    #+#             */
/*   Updated: 2022/11/04 12:03:03 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdlib.h>
# include <pthread.h>
# include <unistd.h>
# include <sys/time.h>
# include <stdio.h>
# include <limits.h>
# include <string.h>

typedef struct s_env	t_env;

typedef struct s_fork
{
	pthread_mutex_t	lock;

}				t_fork;

typedef struct s_philo
{
	pthread_t	th;
	int			id;
	long long	last_meal;
	int			nb_t_ate;
	int			dead;
	t_fork		*left_fork;
	t_fork		*right_fork;
	t_env		*env;
}	t_philo;

typedef struct s_env
{
	int				nb_of_philos;
	int				t_to_die;
	int				t_t_eat;
	int				t_to_sleep;
	int				nb_times_m_eat;
	int				end_sim;
	long long		start_time;
	pthread_t		checker;
	t_philo			*philos;
	t_fork			**forks;
	pthread_mutex_t	printf_mutex;
}	t_env;

int			ft_init_env(int ac, char **av, t_env *env);
void		ft_create_philos(t_env *env);
void		ft_init_philos(t_env *env);
int			ft_init_mutexes(t_env *env);
void		*checker_routine(void *vars);
void		*philo_routine(void *vars);
long long	get_time_now(void);
void		ft_usleep(long int time_in_ms, t_env *env);
int			ft_isdigit(int c);
int			is_valid_digits(char *str);
int			valid_args(int ac, char **av);
void		got_forks(t_philo *philo);
void		forks_up(t_philo *philo);
void		forks_down(t_philo *philo);
void		eating(t_philo *philo);
void		sleeping(t_philo *philo);
void		thinking(t_philo *philo);
void		ft_printf(t_philo *philo, char *str);
int			philo_dead(t_philo *philo);
int			check_end_sim(t_env *env);
void		ft_join(t_env *env);
void		ft_destroy_free(t_env *env);
long		ft_atoi(char *str);
int			ft_strlen(char *str);
int			print_error(char *str);
int			ft_init_forks(t_env *env);

#endif
