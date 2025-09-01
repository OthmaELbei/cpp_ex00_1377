/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 20:23:12 by oelbied           #+#    #+#             */
/*   Updated: 2025/08/31 21:41:45 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

int PhoneBook::index = 0;
int main()
{
	std :: string line;
	Contact add;
	PhoneBook ds;
	std :: string Index;
	
	afchechoui();
	while (getline(std :: cin, line))
	{
		if(line == "EXIT")
		{
			return(1);
		}
		if(line == "ADD")
		{
			add.setadd();
			ds.addcontact(add);
		}
		if(line == "SEARCH")
		{
			ds.showall();
			std :: cout << "Plz add any index you whant betouin 0 to 8:  "  ;
			getline(std :: cin, Index);
			if((Index.size() == 1)&& isdigit(Index[0]))
			{
				int nbr = char(Index[0]) - '0';
				if(!ds.afchecontact(nbr) )
				{
					ds.afche(nbr);
				    afchechoui();
				}else{
					std :: cout << "this number is not finding" << std :: endl;
					 afchechoui();
				}
			}
			else
			std :: cout << "the number you add not exat"<< std :: endl;
		}
	}
	std :: cout <<  line << std :: endl;
	
}