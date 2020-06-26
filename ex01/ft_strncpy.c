/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 16:52:58 by mshiba            #+#    #+#             */
/*   Updated: 2020/06/26 17:07:22 by mshiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strncpy(char dest, char src, unsigned int n)
{
	dest [];
		if (src == n)
			return src + dest;
}
int main()
{
	char a[8];
	char b[10]; 
   a = "mxolisi";
   b = "shiba" ;
	strncpy(a ,b,20);
		printf("string is  %s\n",a);
	return 0;
}
