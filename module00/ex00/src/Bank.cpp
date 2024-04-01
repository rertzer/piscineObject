/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bank.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:14:00 by rertzer           #+#    #+#             */
/*   Updated: 2024/04/01 16:08:03 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bank.hpp"

Bank::Bank():liquidity(0)
{}

Bank::~Bank()
{
	for(std::vector<Account*>::iterator it = client_accounts.begin(); it != client_accounts.end(); ++it)
	{
		delete *it;
	}
}

int	Bank::createAccount()
{
	int	new_account_id = -1;

	Account*	new_account = new Account();
	if (new_account)
	{
		client_accounts.push_back(new_account);
		new_account_id = new_account->getId();
	}
	return new_account_id;
}

int	Bank::deleteAccount(int id)
{
	Account * acc = getAccount(id);
	liquidity += acc->getValue();
	delete acc;
	return id;
}

int	Bank::creditAccount(int id, int amount)
{
	Account*	acc = getAccount(id);

	if (acc == NULL || amount <= 0)
		return 0;

	int	fees = amount / 20;
	amount -= fees;
	liquidity += fees;
	acc->credit(amount);
	return amount;
}

int	Bank::debitAccount(int id, int amount)
{
	Account* acc = getAccount(id);
	if (acc == NULL || amount <= 0)
		return 0;
	amount = - amount;
	acc->credit(amount);
	return amount;

int	Bank::giveLoan(int id, int amount)
{
	if (amount > liquidity)
		return 0;
	liquidity -= amount;
	return creditAccount(id, amount);
}
