/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:54:47 by maujogue          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/06/15 12:46:11 by maujogue         ###   ########.fr       */
=======
/*   Updated: 2023/06/15 11:18:53 by avaganay         ###   ########.fr       */
>>>>>>> Axel
/*                                                                            */
/* ************************************************************************** */

#include "../header/cub.h"

int	main(int argc, char **argv)
{
	t_all	all;

<<<<<<< HEAD
	if (argc == 2)
	{
		init_cub(&all, argv[1]);
		check_keypress(&all);
		mlx_loop(all.mlx);
		free_exit(&all, 0, "");
	}
	return (0);
=======
    (void)argc;
    (void)argv;
    init_cub(&all);
    ft_mlx(&all);
    free_exit(&all);
    return (0);
>>>>>>> Axel
}
