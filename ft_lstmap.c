/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 23:55:23 by ygbouri           #+#    #+#             */
/*   Updated: 2021/11/30 22:53:32 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*p;

	p = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst != NULL)
	{
		ft_lstadd_back(&p, ft_lstnew(f(lst->content)));
		if (!p)
		{
			ft_lstclear(&p, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (p);
}
