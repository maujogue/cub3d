/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:54:47 by maujogue          #+#    #+#             */
/*   Updated: 2023/06/14 14:29:32 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/cub.h"

int main(int argc, char **argv)
{
    t_all all;

    (void)argc;
    (void)argv;
    init_cub(&all);
    check_keypress(&all);
    mlx_loop(all.mlx);
    free_exit(&all);
    return (0);
}
