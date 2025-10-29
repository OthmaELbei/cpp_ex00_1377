/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 16:23:25 by oelbied           #+#    #+#             */
/*   Updated: 2025/10/26 15:43:30 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac,char **av)
{
	int i = 1;
	int j = 0;

	if(ac <= 1)
	{
		std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std:: endl;
	}else
	{
		while(av[i])
		{
			j = 0;
			while(av[i][j])
			{
				std :: cout << char(toupper(av[i][j]));
				j++;
			}
			i++;
		}
			std :: cout << std :: endl;
	}
}
