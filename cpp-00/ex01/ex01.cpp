/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 20:23:12 by oelbied           #+#    #+#             */
/*   Updated: 2025/10/18 16:17:15 by oelbied          ###   ########.fr       */
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
	std :: string spline;
	afchechoui();
	while (getline(std :: cin, line))
	{
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
				std :: cout << "\n--- < no fined any contect plese add any contact > --- \n\n";  
				 afchechoui();
			}else
			{
			std :: cout << "Plz add any index you whant betouin 0 to 8:  "  ;
			if(!getline(std :: cin, Index))
			{
				std :: cout << "\n";
				std :: exit(1);
			}
			if((Index.size() == 1) && isdigit(Index[0]))
			{
				int nbr = char(Index[0]) - '0';
				if(!ds.afchecontact(nbr) )
				{
					ds.afche(nbr);
				    afchechoui();
				}else{
					std :: cout << "    --<< number is not finding    >>---   " << std :: endl;
					 afchechoui();
				}
				
			}
			else{
				
				std :: cout << "the number you add not exat"<< std :: endl;
				 afchechoui();
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