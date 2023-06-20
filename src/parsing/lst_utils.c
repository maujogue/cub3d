/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 16:23:35 by maujogue          #+#    #+#             */
/*   Updated: 2023/06/20 12:56:30 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/cub.h"

char    *get_lst_content(t_list *lst, char *key)
{
    char    *content;
    char    *res;
    char    *temp;

    res = NULL;
    while (lst)
    {
        content = (char *)lst->content;
        temp = ft_strnstr(content, key, ft_strlen(key));
        if (temp)
        {
            if (!res)
                res = ft_strtrim(temp, key);
            else
                return (NULL);
            if (!res)
                return (NULL);
            
        }
        lst = lst->next;
    }
    return (res);
    
}

t_list  *file_to_lst(t_list *lst, int fd)
{
    t_list  *node;
    char    *line;
    
    while (1)
    {
        line = get_next_line(fd);
        if (!line)
            break ;
        node = ft_lstnew(line);
        if (!node)
            return (NULL);
        ft_lstadd_back(&lst, node);
    }
    return (lst);
}

char	*ft_strtrim_right(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		end;

	if (!s1)
		return (NULL);
    end = 0;
	i = ft_strlen(s1) - 1;
    while (i >= 0 && ft_strchr(set, s1[i]))
	{
		end++;
		i--;
	}
	res = ft_substr(s1, 0, ft_strlen(s1)- end);
	if (!res)
		return (NULL);
	return (res);
}

char	**lst_to_tab(t_list	*lst)
{
    char    **tab;
	int		i;

	i = 0;
    while (ft_strchr(" 01", ((char *)lst->content)[0]) == NULL)
        lst = lst->next;
    tab = malloc(sizeof(char *) * (ft_lstsize(lst) + 1));
	while (lst)
	{
        if (ft_strlen(lst->content) < 3)
            return (NULL);
		tab[i]= ft_strtrim_right(lst->content, "\n ");
		if (!tab[i])
			return (free_array(tab), NULL);
		lst = lst->next;
        i++;
	}
	tab[i] = NULL;
	return (tab);
}