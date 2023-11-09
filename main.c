/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idumenil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:43:58 by idumenil          #+#    #+#             */
/*   Updated: 2023/11/07 11:13:19 by idumenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int ac, char **av)
{
	t_prog			prog;
	t_philo			philos[200];
	pthread_mutex_t	forks[200];

	if (ac != 5 && ac != 6)
		return (write(2, "Wrong argument number\n", 22), 1);
	if (check_valid_args(av))
		return (1);
	init_prog(&prog, philos);
	init_forks(forks, ft_atoi(av[1]));
	init_philos(philos, &prog, forks, av);
	thread_create(&prog, forks);
	destroy_all(NULL, &prog, forks);
	return (0);
}
