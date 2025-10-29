/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 10:17:23 by oelbied           #+#    #+#             */
/*   Updated: 2025/10/26 15:12:28 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

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
			if(!isalnum(ds[i]))
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
	getline(std ::cin, first_name);
	if (std::cin.eof() || std::cin.fail())
        {
            std :: cout << std ::endl ;
            std::cin.eof() ? std::exit(0): std::exit(1);
        }
	while (1)
	{
		if(tchek(first_name, 0))
		{
		std ::cout << "add first name :";
		getline(std ::cin, first_name);
		if (std::cin.eof() || std::cin.fail())
        {
            std :: cout << std ::endl ;
            std::cin.eof() ? std::exit(0): std::exit(1);
        }
		}
		else
			break;
	}
	std ::cout << "add last name :";
	
        getline(std ::cin, last_name);
	if (std::cin.eof() || std::cin.fail())
        {
            std :: cout << std ::endl ;
            std::cin.eof() ? std::exit(0): std::exit(1);
        }
	while (1)
	{
		if(tchek(last_name, 0))
		{
			std ::cout << "add last name :";
			getline(std ::cin, last_name);
            if (std::cin.eof() || std::cin.fail())
            {
                std :: cout << std ::endl ;
                std::cin.eof() ? std::exit(0): std::exit(1);
            }
		}
		else
			break;
	}
	std ::cout << "add nick name :";
	getline(std ::cin, nickname);
    if (std::cin.eof() || std::cin.fail())
        {
            std :: cout << std ::endl ;
            std::cin.eof() ? std::exit(0): std::exit(1);
        }
	while (1)
	{
		if(tchek(nickname, 0))
		{
			std ::cout << "add nick name :";
		getline(std ::cin, nickname);
		if (std::cin.eof() || std::cin.fail())
        {
            std :: cout << std ::endl ;
            std::cin.eof() ? std::exit(0): std::exit(1);
        }
		}
		else
			break;
	}
	std ::cout << "add phonenamber :";
    getline(std ::cin, phone_number);
	if (std::cin.eof() || std::cin.fail())
        {
            std :: cout << std ::endl ;
            std::cin.eof() ? std::exit(0): std::exit(1);
        }
	while (1)
	{
		if(tchek(phone_number, 1))
		{
			std ::cout << "add phonenamber :";
		getline(std ::cin, phone_number);
		if (std::cin.eof() || std::cin.fail())
        {
            std :: cout << std ::endl ;
            std::cin.eof() ? std::exit(0): std::exit(1);
        }
		}
		else
			break;
	}
	std ::cout << "add darkest secret :";
	getline(std ::cin,darkest_secret);
	if (std::cin.eof() || std::cin.fail())
        {
            std :: cout << std ::endl ;
            std::cin.eof() ? std::exit(0): std::exit(1);
        }
	while (1)
	{
		if(tchek(darkest_secret, 0))
		{
		std ::cout << "add darkest secret:";
		getline(std ::cin, darkest_secret);
		if (std::cin.eof() || std::cin.fail())
        {
            std :: cout << std ::endl ;
            std::cin.eof() ? std::exit(0): std::exit(1);
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
	else if (word.size() <= 10)
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

int  Contact ::schow()
{
    if(first_name.empty())
    {
        return 1;
    }
	std ::cout << "Frist name is a :   " << trim(first_name) << std ::endl;
	std ::cout << "Last name is a :   " << trim(last_name) << std ::endl;
	std ::cout << "Nickname is a :   " << trim(nickname) << std ::endl;
	std ::cout << "phonenamber is a :   " << trim(phone_number) << std ::endl;
	std ::cout << "darkest secret is a :   " << trim(darkest_secret) << std ::endl;
    return 0;
}