/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:55:43 by pteh              #+#    #+#             */
/*   Updated: 2023/08/15 17:32:11 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int	*ft_range(int min, int max)
{
	int	arrsize;
	int	index;
	int	*ptr;

	arrsize = max - min;
	index = 0;
	ptr = (int *)malloc(arrsize * sizeof(int));
	if (min >= max)
		return (NULL);
	while (index < arrsize)
	{
		if (ptr == NULL)
			return (NULL);
		ptr[index] = min;
		index++;
		min++;
	}
	return (ptr);
}
/*
//to comment out before submission, with main.
void	print_array(int* arr, int max, int min)
{
	int* ptr = arr;
	int i = 0;

	while (i < (max - min))
	{
		printf("%d, ", ptr[i]);
		i++;
	}
}

int	main(void)
{
	int	min = 22;
	int	max = INT_MAX; //testing INT_MAX
	int* array1 = ft_range(min,max);
//	int array1size = sizeof(array1) / sizeof(int);
	printf("array1 =  ft_range(-1000, 20000000) : ");
	print_array(array1, max, min);
	free(array1);
}*/
