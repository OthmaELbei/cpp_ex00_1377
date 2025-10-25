/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 20:23:12 by oelbied           #+#    #+#             */
/*   Updated: 2025/10/25 15:33:31 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdlib>

int PhoneBook::index = 0;


int main()
{
	std :: string line;
	Contact add;
	PhoneBook ds;
	std :: string Index;
	std :: string spline;
	afchechoui();
	while (getline(std :: cin, line))
	{
		if (std::cin.eof() || std::cin.fail())
        {
            std :: cout << std ::endl ;
            std::cin.eof() ? std::exit(0): std::exit(1);
        }
		spline = trim(line);
		if(spline == "EXIT")
		{
			return(1);
		}
		if(spline == "ADD")
		{
			add.setadd();
			ds.addcontact(add);
		
		}
		if(spline == "SEARCH")
		{
			int nb = ds.showall();
			if(nb == 0)
			{ 
				std :: cout << "\n--- < No contacts found. Please add one > --- \n\n";  
				 afchechoui();
			}else
			{
			std :: cout << "Please add any index you want between 0 and 8:  "  ;
			getline(std :: cin, Index);
			if (std::cin.eof() || std::cin.fail())
			{
				std :: cout << std ::endl ;
				std::cin.eof() ? std::exit(0): std::exit(1);
			}
			if(Index.empty())
			{
				std :: cout << " \n  is empty " << std :: endl ;
				afchechoui();
			}
			else
			{
				if(tchek(Index, 1))
				{
					std :: cout << " \nThe number you added is not correct"<< std :: endl;
					afchechoui();
				}else{
					int num = 10;
        		std::stringstream buffer(Index);
        			buffer >> num;
					std :: cout << num << std ::endl ;
				if(ds.afchecontact(num) == 0 && ds.afche(num) == 0)
				{
				    afchechoui();
				}
				else{
						std :: cout << "The number you added is not correct"<< std :: endl;
				 afchechoui();
				}
				
				}
				
				}
			}
	
		}
		else 
		{
				 afchechoui();
		}
	}
	std :: cout <<  line << std :: endl;
}