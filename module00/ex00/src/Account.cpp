/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:30:54 by rertzer           #+#    #+#             */
/*   Updated: 2024/04/01 15:37:26 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account():value(0)
{
	id = id_counter;
	++id_counter;
}

Account::~Account()
{}

int const &	Account::getId() const
{
	return id;
}

int const &	Account::getValue() const
{
	return value;
}

void	Account::credit(int amount)
{
	value += amount;
}

std::ostream &	operator<<(std::ostream & os, Account const & account)
{
	os << "[" << account.getId() << "]-[" << account.getValue() << "]";
	return os;
}

int Account::id_counter = 0;
