/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 10:10:10 by oelbied           #+#    #+#             */
/*   Updated: 2025/10/25 14:43:27 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP


#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>

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
	int schow();
};
int tchek(std :: string ds, int nb);

#endif
