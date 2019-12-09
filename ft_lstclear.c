/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrulin <hbrulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 17:14:45 by hbrulin           #+#    #+#             */
/*   Updated: 2019/12/09 16:35:10 by hbrulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_lstclear(t_list **lst)
{
	t_list *tmp;
	t_list *next;

	if (!lst)
		return ;
	tmp = *lst;
	while (tmp)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	*lst = NULL;
}
