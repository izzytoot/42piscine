/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:18:42 by icunha-t          #+#    #+#             */
/*   Updated: 2024/09/23 17:09:13 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest [i + j] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_joinallstrs(int size, int total_len, char **strs, char *sep)
{
	char	*dest;
	int		i;

	dest = (char *)malloc(sizeof(char) * (total_len + 1));
	if (! dest)
		return (NULL);
	dest[0] = '\0';
	i = 0;
	while (i < size)
	{
		dest = ft_strcat(dest, strs[i]);
		if (i < size -1)
		{
			dest = ft_strcat(dest, sep);
		}
		i++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		total_len;
	int		i;

	i = 0;
	if (size == 0)
	{
		dest = malloc(sizeof(char));
		if (dest)
			dest[0] = '\0';
		return (dest);
	}
	total_len = ft_strlen(sep) * (size - 1);
	while (i < size)
	{
		total_len = total_len + ft_strlen(strs[i]);
		i++;
	}
	dest = ft_joinallstrs(size, total_len, strs, sep);
	return (dest);
}
/*
int	main(void)
{
	char	str[] = "This";
	char	str1[] = "is";
	char	str2[] = "the";
	char	str3[] = "life.";
	char	*join[] = {str, str1, str2, str3};
	char	*result = ft_strjoin(4, join, "--");
	
	printf("%s", result);
	free(result);
	return (0);
}
*/
