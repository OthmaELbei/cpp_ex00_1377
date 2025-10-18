/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_fn_ex01.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 21:22:53 by oelbied           #+#    #+#             */
/*   Updated: 2025/10/18 17:02:54 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

void afchechoui()
{
	std ::cout << "\n  ---< If you whant ADD or SEARCH or EXIT of this contct >--- \n" << std ::endl;
	std ::cout << "ADD" << std ::endl;
	std ::cout << "SEARCH" << std ::endl;
	std ::cout << "EXIT" << std ::endl;
}
int tchek(std :: string ds, int nb)
{

		int i = 0;
		
		
		int flag = 0;
	if(ds[i] == '\0')
			return 1;
	   while (ds[i] == ' ')
		     	 i++;
	if(ds[i] == '\0')
			return 1;
	if(nb == 1)
	{
		while (ds[i] != '\0')
		{
			if(!isdigit(ds[i]))
			{
				flag = 1;
				break;
			}
				i++;	
		}
	}else
	{
		
		while (ds[i] != '\0')
		{
			if(!isprint(ds[i]))
			{
				flag = 1;
				break;
			}
				i++;	
		}
	}
		if(flag == 0)
		{
			return 0;
		}
		else
			return 1;
	
}
void Contact ::setadd()
{
	std ::cout << "add first name :";
	if (!getline(std ::cin, first_name)){
		    std :: cout << "\n";
			std :: exit(1);
		}
	while (1)
	{
		if(tchek(first_name, 0))
		{
		std ::cout << "add first name :";
		if (!getline(std ::cin, first_name))
		{	
			std :: cout << "\n";
			std :: exit(1);
		}
		}
		else
			break;
	}
	std ::cout << "add last name :";
	if(!getline(std ::cin, last_name))
	{
		 std :: cout << "\n";
		 std :: exit(1);
	}
	while (1)
	{
		if(tchek(last_name, 0))
		{
			std ::cout << "add last name :";
			if(!getline(std ::cin, last_name))
			{
				std :: cout << "\n";
				std :: exit(1);
			}
		}
		else
			break;
	}
	std ::cout << "add nick name :";
	if(!getline(std ::cin, nickname))
	{
		std :: cout << "\n";
		std :: exit(1);
	}
	while (1)
	{
		if(tchek(nickname, 0))
		{
			std ::cout << "add nick name :";
		if(!getline(std ::cin, nickname))
		{
			std :: cout << "\n";
			std :: exit(1);
		}
		}
		else
			break;
	}
	std ::cout << "add phonenamber :";
	if(!getline(std ::cin, phone_number))
	{
		std :: cout << "\n";
		std :: exit(1);
	}
	while (1)
	{
		if(tchek(phone_number, 1))
		{
			std ::cout << "add phonenamber :";
		if(!getline(std ::cin, phone_number))
		{
			std :: cout << "\n";
			std :: exit(1);
		}
		}
		else
			break;
	}
	std ::cout << "add darkest secret :";
	if(!getline(std ::cin,darkest_secret))
	{
		std :: cout << "\n";
		std :: exit(1);
	}
	while (1)
	{
		if(tchek(darkest_secret, 0))
		{
		std ::cout << "add darkest secret:";
		if(!getline(std ::cin, darkest_secret))
		{
			std :: cout << "\n";
			std :: exit(1);
		}
		}
		else
			break;
	}
}
std ::string Contact ::cont_word(std ::string word)
{
	std ::string newWord(10, ' ');
	std::string::size_type i = 0;
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
std:: string trim(std :: string df){
	int i = 0;
	int nb = df.size();
	while ( i < nb && df[i] == ' ')
	{
		i++;
	}
	while (nb > i && df[nb - 1] == ' ')
	{
		nb--;
	}
	return df.substr(i,nb - i);
}
void Contact ::getset(int i)
{
	std ::cout << "|         " << i << "|" << cont_word(trim(first_name)) << "|" << cont_word(trim(last_name)) << "|" << cont_word(trim(nickname)) << "|" << std ::endl;
}

void Contact ::schow()
{
	std ::cout << "Frist name is a :   " << trim(first_name) << std ::endl;
	std ::cout << "Last name is a :   " << trim(last_name) << std ::endl;
	std ::cout << "Nickname is a :   " << trim(nickname) << std ::endl;
	std ::cout << "phonenamber is a :   " << trim(phone_number) << std ::endl;
	std ::cout << "darkest secret is a :   " << trim(darkest_secret) << std ::endl;
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
