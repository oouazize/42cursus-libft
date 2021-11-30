/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 21:31:42 by oouazize          #+#    #+#             */
/*   Updated: 2021/11/16 18:18:40 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (!*lst)
		*lst = new;
	else
	{
		ptr = *lst;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new;
	}
	return ;
}
/*int main()
{
	t_list	*head = NULL;
	t_list *node1 = NULL;
	t_list	*newnode = NULL;

	char *str = ft_strdup("first");
	char *str1 = ft_strdup("second");
	char *str2 = ft_strdup("defult");

	head = ft_lstnew(str);
	node1 = ft_lstnew(str1);
	newnode = ft_lstnew(str2);

	head->next = node1;
	node1->next = NULL;
	newnode->next = NULL;

	ft_lstadd_back(&head, newnode);
	while (head)
	{
		printf("%s\n", head->content);
		head = head->next;
	}
}*/
