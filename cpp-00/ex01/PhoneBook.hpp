/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 21:15:15 by oelbied           #+#    #+#             */
/*   Updated: 2025/10/25 16:40:19 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <sstream>
#include "Contact.hpp"


class PhoneBook
{
private:
	static int index;

	public:
	Contact bookcall[8];
	
	void addcontact(Contact cont);
	int showall();

	int afche(int nber);
	int afchecontact(int nber);
};
void afchechoui();
	std:: string trim(std :: string df);
#endif
