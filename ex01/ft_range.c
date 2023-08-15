/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:55:43 by pteh              #+#    #+#             */
/*   Updated: 2023/08/15 16:06:20 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

in	*ft_range(int min, int max)
{
//returns array of ints, containing all values between min & max, min included, max excluded. 

//calculate size of array
	int arrsize;

	arrsize = max - min;

//allocate memory size to array.

//

//if min >= max, return null pointer.
	if min >= max
		return (NULL);

// flesh out each value from min to max in array. 

}

//to comment out before submission, with main.
void	print_array(int* arr, int size)
{
	int* ptr = arr;
	int i = 0;

	while (i < size)
	{
		printf("%d ", *ptr);
		ptr++;
	}
}

int	main(void)
{
	int array1 = ft_range(-1000, 20000000);
	int array1size = sizeof(array1)/sizeof(array1[0]);
	printf("array1 =  ft_range(-1000, 20000000) : ");
	print_array(array1, array1size);
	int array2 = ft_range(-1000, 2000000000);
	int array2size = sizeof(array2)/sizeof(array2[0]);
	printf("array1 =   ft_range(-1000, 2000000000) : ")'
	print_array(array2, array2size);
}
