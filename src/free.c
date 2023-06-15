/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:18:10 by maujogue          #+#    #+#             */
/*   Updated: 2023/06/15 16:42:03 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/cub.h"

void	free_lst(t_list *lst)
{
	t_list	*temp;

	while (lst)
	{
		temp = lst->next;
		free(lst->content);
		free(lst);
		lst = temp;
	}
}

void	free_array(char **tab)
{
	int	i;

	i = -1;
	if (tab != NULL)
	{
		while (tab[++i])
			free(tab[i]);
		free(tab);
		tab = NULL;
	}
}

void    free_exit(t_all *all, int exit_code, char *error_message)
{
    mlx_clear_window(all->mlx, all->mlx_win);
    mlx_destroy_window(all->mlx, all->mlx_win);
    mlx_destroy_display(all->mlx);
    free(all->mlx);
    if (exit_code != 0)
        ft_putstr_fd(error_message, 2);
    exit(exit_code);
}