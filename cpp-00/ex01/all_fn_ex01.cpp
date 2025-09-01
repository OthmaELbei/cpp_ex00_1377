/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_fn_ex01.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 21:22:53 by oelbied           #+#    #+#             */
/*   Updated: 2025/08/31 21:55:21 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

void afchechoui()
{
	std ::cout << "ples anetr formela de contact" << std ::endl;
	std ::cout << "ADD" << std ::endl;
	std ::cout << "SEARCH:" << std ::endl;
	std ::cout << "EXIT" << std ::endl;
}
void Contact ::setadd()
{
	std ::cout << "add first name :";
	getline(std ::cin, first_name);
	std ::cout << "add last name :";
	getline(std ::cin, last_name);
	std ::cout << "add nick name :";
	getline(std ::cin, nickname);
	std ::cout << "add phonenamber :";
	getline(std ::cin, phone_number);
}
std ::string Contact ::cont_word(std ::string word)
{
	std ::string newWord(10, ' ');
	int i = 0;
	int k = 0;
	if (word.size() > 10)
	{
		while (9 > i)
		{
			newWord[k] = word[i];
			i++;
			k++;
		}
		newWord[k] = '.';
	}
	else if (word.size() < 10)
	{
		int j = 10 - word.size();
		while (j > 0)
		{
			newWord[k] = ' ';
			j--;
			k++;
		}
		while (word.size() > i)
		{
			newWord[k] = word[i];
			i++;
			k++;
		}
	}
	return newWord;
}
void Contact ::getset(int i)
{
	std ::cout << "|         " << i << "|" << cont_word(first_name) << "|" << cont_word(last_name) << "|" << cont_word(nickname) << "|" << std ::endl;
}

void Contact ::schow()
{
	std ::cout << "Frist name is a:   " << first_name << std ::endl;
	std ::cout << "Last name is a:   " << last_name << std ::endl;
	std ::cout << "Nickname is a:   " << nickname << std ::endl;
}

void PhoneBook ::addcontact (Contact cont)
{
	if (index >= 0)
		bookcall[index % 8] = cont;
	index++;
}

void PhoneBook :: showall()
{
	int end = (index < 8) ? index : 8;
	for (int i = 0; i < end; i++)
	{
		bookcall[i].getset(i);
	}
}
void PhoneBook ::afche(int nber)
{
	bookcall[nber].schow();
}
int PhoneBook ::afchecontact(int nber)
{
	if (nber <= index)
	{
		return 0;
	}
	return 1;
}
