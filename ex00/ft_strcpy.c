/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 11:02:10 by mshiba            #+#    #+#             */
/*   Updated: 2020/06/26 15:53:54 by mshiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void ft_strcpy(char dest, char src)

{
	int i;

    i = 0;
    while(i <= src[i])
	{
		dest[10] = src{i};
	i++;
	}
dest[10] = '\0';
return dest;


}
int main()

{

     char dest[10] = "mxolisi";
	 char src[15];
	 printf("%s\n", strcpy(dest, src));
	 printf("%s", src);
	 return (0);

}

