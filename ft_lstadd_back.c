/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrulin <hbrulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 18:28:27 by hbrulin           #+#    #+#             */
/*   Updated: 2019/12/09 15:56:27 by hbrulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *tmp;

	if (!alst)
		return ;
	if (*alst)
		tmp = *alst;
	else
	{
		*alst = new;
		return ;
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
}
