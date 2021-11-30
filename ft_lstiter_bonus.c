/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiteri_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 19:06:14 by oouazize          #+#    #+#             */
/*   Updated: 2021/11/19 11:06:35 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*ptr;

	ptr = lst;
	if (!ptr)
		return ;
	if (lst && f)
	{
		while (ptr)
		{
			(*f)(ptr->content);
			ptr = ptr->next;
		}
	}
}
/*void	f(void *str)
{
	int i = 0;
	while (((char *)str)[i])
		((char *)str)[i++] -= 32;
}
int main()
{
	t_list	*head = NULL;
	t_list *node1 = NULL;
	t_list	*node2 = NULL;

	char str[] = "first";
	char str1[] = "second";
	char str2[] = "third";

	head = ft_lstnew(str);
	node1 = ft_lstnew(str1);
	node2 = ft_lstnew(str2);

	head->next = node1;
	node1->next = node2;
	node2->next = NULL;

	ft_lstiter(head, f);
	while (head)
	{
		printf("%s\n", head->content);
		head = head->next;
	}
}*/
