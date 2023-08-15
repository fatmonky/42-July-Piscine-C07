/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 17:34:01 by pteh              #+#    #+#             */
/*   Updated: 2023/08/15 17:57:08 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	arrsize;
	int	*ptr;
	int	index;
//function should allocate and assign all values between min (inclusive) and max (excluded)
//into an array of ints.

	arrsize = max - min;
	ptr = (int *)malloc(arrsize * sizeof(int));

	if (min >= max)
		{
			*range = NULL; //why is this *range instead of range = &NULL? Because "range will point on NULL" => implies that 
			return (0);
		}
	while (index < arrsize)
	{
		if (ptr == NULL
			return (-1);
		ptr[index] = min + index;
		index++;
	}
//function should return range (or -1 on error)
//
//if min >= max, range points on NULL and return 0.
//
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
}
