/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 21:22:53 by oelbied           #+#    #+#             */
/*   Updated: 2025/10/29 09:30:11 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void afchechoui()
{
	std ::cout << "\n  ---< If you want to ADD, SEARCH, or EXIT this contact list >--- \n" << std ::endl;
	std ::cout << "ADD" << std ::endl;
	std ::cout << "SEARCH" << std ::endl;
	std ::cout << "EXIT" << std ::endl;
}

void PhoneBook ::addcontact (Contact cont)
{
	if (index >= 0)
		bookcall[index % 8] = cont;
	index++;
}

int PhoneBook :: showall()
{
	int end = (index < 8) ? index : 8;
	for (int i = 0; i < end; i++)
	{
		bookcall[i].getset(i);
	}
	return index;
}
int PhoneBook ::afche(int nber)
{
	int nb = bookcall[nber].schow();
	return nb;
}
int PhoneBook ::afchecontact(int nber)
{
	if (nber > -1 && nber < index)
	{
		return 0;
	}	
	return 1;
}
