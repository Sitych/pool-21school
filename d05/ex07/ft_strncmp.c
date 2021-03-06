/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 04:42:21 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/06 04:58:00 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 && *s2 && n)
	{
		if (*s1 == *s2)
		{
			n--;
			s1++;
			s2++;
		}
		else
			return (*s2 - *s1);
	}
	if (n > 0 && *s1)
		return (*s1 - '\0');
	else if (n > 0 && *s2)
		return ('\0' - *s2);
	return (0);
}
