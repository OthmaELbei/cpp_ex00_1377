/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 16:37:01 by oelbied           #+#    #+#             */
/*   Updated: 2025/10/19 14:53:53 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account :: _displayTimestamp( void )
{
	std :: time_t now =  std::time(NULL);
	std :: tm *ltm =std:: localtime(&now);

	std:: cout << "[" << 1900 + ltm->tm_year 
	<< ltm->tm_mon + 1 << ltm->tm_mday << "_"  
	<< ltm->tm_hour 
	<< ltm->tm_min << ltm->tm_sec << "]";
}

 int	Account :: getTotalAmount( void ){
	return _totalAmount;
 }
 
 int	Account :: 	getNbAccounts( void ){
	return _nbAccounts;
 }
 int	Account :: 	getNbDeposits( void ){
	return _totalNbDeposits;
 }
 int	Account :: 	getNbWithdrawals( void ){
	return _totalNbWithdrawals ;
 }
void	Account :: makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "  index:" << _accountIndex << ";p_amount:" << _amount
	          << ";deposit:" << deposit << ";amount:" << (_amount + deposit)
	          << ";nb_deposits:" << (_nbDeposits + 1) << std::endl;
	_amount +=deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	
}
bool	Account ::makeWithdrawal( int withdrawal )
{
		_displayTimestamp();
	std::cout << "  index:" << _accountIndex << ";p_amount:" << _amount;
	
	if (withdrawal <= _amount) {
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << ";withdrawal:" << withdrawal << ";amount:" << _amount
		          << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true;
	}
	else {
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
}
int Account ::checkAmount( void ) const
{
	return 1;
		// std :: cout << " withdrawals:" << withdrawal;
}
  Account :: Account( int initial_deposit )
  {
	_displayTimestamp();
	std :: cout <<  "  index:";
	_accountIndex=_nbAccounts ;
	 _amount = initial_deposit ;
	 _nbDeposits = 0;
	 _nbWithdrawals = 0;
    _nbAccounts++;
	// _nbWithdrawals++;
	_totalAmount += _amount;
	std :: cout <<_accountIndex <<";amount:" << _amount;
	std :: cout << ";created"<< std:: endl;
	
  }

   Account :: Account( void )
   {
	//  _accountIndex++;
	
   }
   Account :: ~Account( void )
   {
	 _displayTimestamp();
	std :: cout  << "  index:";

	std :: cout << _accountIndex <<";amount:" << _amount;
	std :: cout <<_nbDeposits<< ";closed" << std:: endl;
   }
   void	 Account :: displayStatus( void ) const
   {
	     _displayTimestamp();
		std :: cout  << "  index:";
		std :: cout << _accountIndex 
		<<";amount:" << _amount
	 	<< ";deposits:" << _nbDeposits 
	 	<< ";withdrawals:" << _nbWithdrawals
	     << std::endl;
   } 
    void Account ::displayAccountsInfos( void )
	{
		
		 _displayTimestamp();
	 	std :: cout<<"  accounts:"
	  	<<getNbAccounts()<<";total:"
	  	<< getTotalAmount()
	 	<< ";deposits:" << getNbDeposits() 
	 	<<";withdrawals:"<<getNbWithdrawals()
		<< std :: endl;
	}
