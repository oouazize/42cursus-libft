/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 18:43:23 by oouazize          #+#    #+#             */
/*   Updated: 2021/11/18 12:21:03 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;

	ptr = *lst;
	while (*lst)
	{
		ptr = ptr->next;
		ft_lstdelone(*lst, del);
		*lst = ptr;
	}
}
/*int main()
{
	t_list	*head = NULL;
	t_list *node1 = NULL;
	t_list	*node2 = NULL;

	char *str = ft_strdup("first");
	char *str1 = ft_strdup("second");
	char *str2 = ft_strdup("defult");

	head = ft_lstnew(str);
	node1 = ft_lstnew(str1);
	node2 = ft_lstnew(str2);

	head->next = node1;
	node1->next = node2;
	node2->next = NULL;

	ft_lstclear(&head, free);
	while (head)
	{
		printf("%s\n", head->content);
		head = head->next;
	}
}*/
