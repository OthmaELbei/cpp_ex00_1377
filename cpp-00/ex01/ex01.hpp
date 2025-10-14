/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 21:15:15 by oelbied           #+#    #+#             */
/*   Updated: 2025/10/14 16:41:57 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_HPP
#define EX01_HPP

#include <iostream>

class Contact
{
private:
	std ::string first_name;
	std ::string last_name;
	std ::string nickname;
	std ::string phone_number;
	std ::string darkest_secret;

public:
	void setadd();
	std ::string cont_word(std ::string word);
	void getset(int i);
	void schow();
};


class PhoneBook
{
private:
	static int index;

public:
	Contact bookcall[8];

	void addcontact(Contact cont);
	void showall();
	void afche(int nber);
	int afchecontact(int nber);
};
void afchechoui();
#endif
